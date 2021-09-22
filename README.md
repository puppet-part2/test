The specific version of EMS to be tested on FuzzBench. 

<br>To evaluate EMS on FuzzBench, just mv the dir ```ems/``` to ```$fuzzbench/fuzzers/```.  
Then, run ```make format  &&  make presubmit``` to confirm newly added fuzzer EMS. 

<br>To run evaluation on FuzzBench, run the cmd as follows: 

``` PYTHONPATH=. python3 $path_to_run_experiment.py -a  --experiment-config $path_to_experiment-config.yaml  --benchmarks $target_programs   --experiment-name  $experiment_name   --fuzzers ems $other_fuzzers ```


initial_seed_sets.tar.gz: All the initial seed sets used in our evaluation, containing 100 seeds, 10 seeds, and an empty seed. 

results_from_FuzzBench: The orignal results reported by FuzzBench in our evaluation. 
