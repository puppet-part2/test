ARG parent_image
FROM $parent_image                         

#RUN apt-get update && \                  
#    apt-get install -y  clang-6.0 && rm /usr/local/bin/clang && rm /usr/local/bin/clang++ &&  ln -s /usr/local/bin/clang-6.0  /usr/local/bin/clang  && ln -s /usr/local/bin/clang++-6.0  /usr/local/bin/clang++

RUN git clone https://github.com/puppet-part2/test.git /afl && cd /afl && git checkout eaaddf803e7b1c4d2b71e78b395c73e3b22ccf88 && AFL_NO_X86=1 make  

RUN cd /afl/llvm_mode && export CC=clang && export LLVM_CONFIG=llvm-config && make 



RUN apt-get update && \
     apt-get install wget -y && \
     wget https://raw.githubusercontent.com/llvm/llvm-project/5feb80e748924606531ba28c97fe65145c65372e/compiler-rt/lib/fuzzer/afl/afl_driver.cpp -O /afl/afl_driver.cpp && \
     clang -Wno-pointer-sign -c /afl/llvm_mode/afl-llvm-rt.o.c -I/afl && \
     clang++ -stdlib=libc++ -std=c++11 -O2 -c /afl/afl_driver.cpp && \
     ar r /libAFL.a *.o

