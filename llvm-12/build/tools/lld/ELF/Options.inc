/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_1, {"-" COMMA nullptr})
PREFIX(prefix_4, {"-" COMMA "--" COMMA nullptr})
PREFIX(prefix_3, {"--" COMMA nullptr})
PREFIX(prefix_2, {"--" COMMA "-" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, &"<input>"[0], INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, &"<unknown>"[0], UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-("[1], anonymous_31, Flag, INVALID, start_group, nullptr, 0, 0,
       "Alias for --start-group", nullptr, nullptr)
OPTION(prefix_1, &"-)"[1], anonymous_12, Flag, INVALID, end_group, nullptr, 0, 0,
       "Alias for --end-group", nullptr, nullptr)
OPTION(prefix_2, &"--allow-multiple-definition"[2], allow_multiple_definition, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow multiple definitions", nullptr, nullptr)
OPTION(prefix_2, &"--allow-shlib-undefined"[2], allow_shlib_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow unresolved references in shared libraries (default when linking a shared library)", nullptr, nullptr)
OPTION(prefix_3, &"--apply-dynamic-relocs"[2], apply_dynamic_relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Apply link-time values for dynamic relocations", nullptr, nullptr)
OPTION(prefix_2, &"--as-needed"[2], as_needed, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Only set DT_NEEDED for shared libraries if used", nullptr, nullptr)
OPTION(prefix_2, &"--auxiliary="[2], auxiliary_eq, Joined, INVALID, auxiliary, nullptr, 0, 0,
       "Set DT_AUXILIARY field to the specified name", nullptr, nullptr)
OPTION(prefix_2, &"--auxiliary"[2], auxiliary, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--Bdynamic"[2], Bdynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Link against shared libraries (default)", nullptr, nullptr)
OPTION(prefix_2, &"--Bshareable"[2], anonymous_29, Flag, INVALID, shared, nullptr, 0, 0,
       "Alias for --shared", nullptr, nullptr)
OPTION(prefix_2, &"--Bstatic"[2], Bstatic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not link against shared libraries", nullptr, nullptr)
OPTION(prefix_2, &"--Bsymbolic-functions"[2], Bsymbolic_functions, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Bind defined function symbols locally", nullptr, nullptr)
OPTION(prefix_2, &"--Bsymbolic"[2], Bsymbolic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Bind defined symbols locally", nullptr, nullptr)
OPTION(prefix_2, &"--build-id="[2], build_id_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Generate build ID note", "[fast,md5,sha1,uuid,0x<hexstring>]", nullptr)
OPTION(prefix_2, &"--build-id"[2], build_id, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --build-id=fast", nullptr, nullptr)
OPTION(prefix_1, &"-b"[1], anonymous_16, Separate, INVALID, format, nullptr, 0, 0,
       "Alias for --format", nullptr, nullptr)
OPTION(prefix_2, &"--call-graph-ordering-file="[2], call_graph_ordering_file_eq, Joined, INVALID, call_graph_ordering_file, nullptr, 0, 0,
       "Layout sections to optimize the given callgraph", nullptr, nullptr)
OPTION(prefix_2, &"--call-graph-ordering-file"[2], call_graph_ordering_file, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--call-graph-profile-sort"[2], call_graph_profile_sort, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Reorder sections with call graph profile (default)", nullptr, nullptr)
OPTION(prefix_2, &"--call_shared"[2], anonymous_1, Flag, INVALID, Bdynamic, nullptr, 0, 0,
       "Alias for --Bdynamic", nullptr, nullptr)
OPTION(prefix_2, &"--check-sections"[2], check_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Check section addresses for overlaps (default)", nullptr, nullptr)
OPTION(prefix_2, &"--chroot"[2], chroot, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--color-diagnostics="[2], color_diagnostics_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Use colors in diagnostics (default: auto)", "[auto,always,never]", nullptr)
OPTION(prefix_2, &"--color-diagnostics"[2], color_diagnostics, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --color-diagnostics=always", nullptr, nullptr)
OPTION(prefix_2, &"--compress-debug-sections="[2], compress_debug_sections_eq, Joined, INVALID, compress_debug_sections, nullptr, 0, 0,
       "Compress DWARF debug sections", "[none,zlib]", nullptr)
OPTION(prefix_2, &"--compress-debug-sections"[2], compress_debug_sections, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "[none,zlib]", nullptr)
OPTION(prefix_2, &"--cref"[2], cref, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Output cross reference table", nullptr, nullptr)
OPTION(prefix_2, &"--dc"[2], anonymous_7, Flag, INVALID, define_common, nullptr, 0, 0,
       "Alias for --define-common", nullptr, nullptr)
OPTION(prefix_2, &"--define-common"[2], define_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Assign space to common symbols", nullptr, nullptr)
OPTION(prefix_2, &"--defsym="[2], defsym_eq, Joined, INVALID, defsym, nullptr, 0, 0,
       "Define a symbol alias", "<symbol>=<value>", nullptr)
OPTION(prefix_2, &"--defsym"[2], defsym, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>=<value>", nullptr)
OPTION(prefix_2, &"--demangle"[2], demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Demangle symbol names (default)", nullptr, nullptr)
OPTION(prefix_3, &"--dependency-file="[2], dependency_file_eq, Joined, INVALID, dependency_file, nullptr, 0, 0,
       "Write a dependency file", "<file>", nullptr)
OPTION(prefix_3, &"--dependency-file"[2], dependency_file, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<file>", nullptr)
OPTION(prefix_3, &"--dependent-libraries"[2], dependent_libraries, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Process dependent library specifiers from input files (default)", nullptr, nullptr)
OPTION(prefix_2, &"--detect-odr-violations"[2], anonymous_65, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--disable-new-dtags"[2], disable_new_dtags, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable new dynamic tags", nullptr, nullptr)
OPTION(prefix_2, &"--disable-verify"[2], disable_verify, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--discard-all"[2], discard_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Delete all local symbols", nullptr, nullptr)
OPTION(prefix_2, &"--discard-locals"[2], discard_locals, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Delete temporary local symbols", nullptr, nullptr)
OPTION(prefix_2, &"--discard-none"[2], discard_none, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Keep all symbols in the symbol table", nullptr, nullptr)
OPTION(prefix_2, &"--dn"[2], anonymous_3, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_2, &"--dp"[2], anonymous_8, Flag, INVALID, define_common, nullptr, 0, 0,
       "Alias for --define-common", nullptr, nullptr)
OPTION(prefix_2, &"--dynamic-linker="[2], dynamic_linker_eq, Joined, INVALID, dynamic_linker, nullptr, 0, 0,
       "Which dynamic linker to use", nullptr, nullptr)
OPTION(prefix_2, &"--dynamic-linker"[2], dynamic_linker, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--dynamic-list="[2], dynamic_list_eq, Joined, INVALID, dynamic_list, nullptr, 0, 0,
       "Read a list of dynamic symbols. (executable) Put matched non-local definedsymbols to the dynamic symbol table. (shared object) References to matchednon-local STV_DEFAULT symbols shouldn't be bound to definitions within the shared object. Implies -Bsymbolic but does not set DF_SYMBOLIC", "<file>", nullptr)
OPTION(prefix_2, &"--dynamic-list"[2], dynamic_list, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<file>", nullptr)
OPTION(prefix_2, &"--dy"[2], anonymous_2, Flag, INVALID, Bdynamic, nullptr, 0, 0,
       "Alias for --Bdynamic", nullptr, nullptr)
OPTION(prefix_1, &"-d"[1], anonymous_6, Flag, INVALID, define_common, nullptr, 0, 0,
       "Alias for --define-common", nullptr, nullptr)
OPTION(prefix_2, &"--EB"[2], anonymous_84, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--eh-frame-hdr"[2], eh_frame_hdr, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Request creation of .eh_frame_hdr section and PT_GNU_EH_FRAME segment header", nullptr, nullptr)
OPTION(prefix_2, &"--EL"[2], anonymous_85, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--emit-relocs"[2], emit_relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Generate relocations in output", nullptr, nullptr)
OPTION(prefix_2, &"--enable-new-dtags"[2], enable_new_dtags, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable new dynamic tags (default)", nullptr, nullptr)
OPTION(prefix_2, &"--end-group"[2], end_group, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignored for compatibility with GNU unless you pass --warn-backrefs", nullptr, nullptr)
OPTION(prefix_2, &"--end-lib"[2], end_lib, Flag, INVALID, INVALID, nullptr, 0, 0,
       "End a grouping of objects that should be treated as if they were together in an archive", nullptr, nullptr)
OPTION(prefix_2, &"--entry="[2], entry_eq, Joined, INVALID, entry, nullptr, 0, 0,
       "Name of entry point symbol", "<entry>", nullptr)
OPTION(prefix_2, &"--entry"[2], entry, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<entry>", nullptr)
OPTION(prefix_3, &"--error-handling-script="[2], error_handling_script_eq, Joined, INVALID, error_handling_script, nullptr, 0, 0,
       "Specify an error handling script", nullptr, nullptr)
OPTION(prefix_3, &"--error-handling-script"[2], error_handling_script, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--error-limit="[2], error_limit_eq, Joined, INVALID, error_limit, nullptr, 0, 0,
       "Maximum number of errors to emit before stopping (0 = no limit)", nullptr, nullptr)
OPTION(prefix_2, &"--error-limit"[2], error_limit, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--error-unresolved-symbols"[2], error_unresolved_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report unresolved symbols as errors", nullptr, nullptr)
OPTION(prefix_2, &"--exclude-libs="[2], exclude_libs_eq, Joined, INVALID, exclude_libs, nullptr, 0, 0,
       "Exclude static libraries from automatic export", nullptr, nullptr)
OPTION(prefix_2, &"--exclude-libs"[2], exclude_libs, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--execute-only"[2], execute_only, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark executable sections unreadable", nullptr, nullptr)
OPTION(prefix_3, &"--export-dynamic-symbol="[2], export_dynamic_symbol_eq, Joined, INVALID, export_dynamic_symbol, nullptr, 0, 0,
       "(executable) Put matched symbols in the dynamic symbol table. (shared object) References to matched non-local STV_DEFAULT symbols shouldn't be bound to definitions within the shared object. Does not imply -Bsymbolic.", "glob", nullptr)
OPTION(prefix_3, &"--export-dynamic-symbol"[2], export_dynamic_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "glob", nullptr)
OPTION(prefix_2, &"--export-dynamic"[2], export_dynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Put symbols in the dynamic symbol table", nullptr, nullptr)
OPTION(prefix_1, &"-E"[1], anonymous_14, Flag, INVALID, export_dynamic, nullptr, 0, 0,
       "Alias for --export-dynamic", nullptr, nullptr)
OPTION(prefix_1, &"-e"[1], anonymous_13, JoinedOrSeparate, INVALID, entry, nullptr, 0, 0,
       "Alias for --entry", nullptr, nullptr)
OPTION(prefix_2, &"--fatal-warnings"[2], fatal_warnings, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Treat warnings as errors", nullptr, nullptr)
OPTION(prefix_2, &"--filter="[2], filter_eq, Joined, INVALID, filter, nullptr, 0, 0,
       "Set DT_FILTER field to the specified name", nullptr, nullptr)
OPTION(prefix_2, &"--filter"[2], filter, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--fini="[2], fini_eq, Joined, INVALID, fini, nullptr, 0, 0,
       "Specify a finalizer function", "<symbol>", nullptr)
OPTION(prefix_2, &"--fini"[2], fini, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>", nullptr)
OPTION(prefix_2, &"--fix-cortex-a53-843419"[2], fix_cortex_a53_843419, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Apply fixes for AArch64 Cortex-A53 erratum 843419", nullptr, nullptr)
OPTION(prefix_2, &"--fix-cortex-a8"[2], fix_cortex_a8, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Apply fixes for ARM Cortex-A8 erratum 657417", nullptr, nullptr)
OPTION(prefix_2, &"--format="[2], format_eq, Joined, INVALID, format, nullptr, 0, 0,
       "Change the input format of the inputs following this option", "[default,elf,binary]", nullptr)
OPTION(prefix_2, &"--format"[2], format, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "[default,elf,binary]", nullptr)
OPTION(prefix_3, &"--fortran-common"[2], fortran_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Search archive members for definitions to override COMMON symbols (default)", nullptr, nullptr)
OPTION(prefix_1, &"-F"[1], anonymous_15, Separate, INVALID, filter, nullptr, 0, 0,
       "Alias for --filter", nullptr, nullptr)
OPTION(prefix_1, &"-f"[1], anonymous_0, Separate, INVALID, auxiliary, nullptr, 0, 0,
       "Alias for --auxiliary", nullptr, nullptr)
OPTION(prefix_2, &"--gc-sections"[2], gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable garbage collection of unused sections", nullptr, nullptr)
OPTION(prefix_3, &"--gdb-index"[2], gdb_index, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Generate .gdb_index section", nullptr, nullptr)
OPTION(prefix_3, &"--gnu-unique"[2], gnu_unique, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable STB_GNU_UNIQUE symbol binding (default)", nullptr, nullptr)
OPTION(prefix_1, &"-G"[1], anonymous_86, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-g"[1], anonymous_66, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--hash-style="[2], hash_style_eq, Joined, INVALID, hash_style, nullptr, 0, 0,
       "Specify hash style (sysv, gnu or both)", nullptr, nullptr)
OPTION(prefix_2, &"--hash-style"[2], hash_style, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--help"[2], help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print option help", nullptr, nullptr)
OPTION(prefix_1, &"-h"[1], anonymous_30, JoinedOrSeparate, INVALID, soname, nullptr, 0, 0,
       "Alias for --soname", nullptr, nullptr)
OPTION(prefix_2, &"--icf=all"[2], icf_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable identical code folding", nullptr, nullptr)
OPTION(prefix_2, &"--icf=none"[2], icf_none, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable identical code folding (default)", nullptr, nullptr)
OPTION(prefix_2, &"--icf=safe"[2], icf_safe, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable safe identical code folding", nullptr, nullptr)
OPTION(prefix_2, &"--ignore-data-address-equality"[2], ignore_data_address_equality, Flag, INVALID, INVALID, nullptr, 0, 0,
       "lld can break the address equality of data", nullptr, nullptr)
OPTION(prefix_2, &"--ignore-function-address-equality"[2], ignore_function_address_equality, Flag, INVALID, INVALID, nullptr, 0, 0,
       "lld can break the address equality of functions", nullptr, nullptr)
OPTION(prefix_2, &"--image-base="[2], image_base_eq, Joined, INVALID, image_base, nullptr, 0, 0,
       "Set the base address", nullptr, nullptr)
OPTION(prefix_2, &"--image-base"[2], image_base, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--init="[2], init_eq, Joined, INVALID, init, nullptr, 0, 0,
       "Specify an initializer function", "<symbol>", nullptr)
OPTION(prefix_2, &"--init"[2], init, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>", nullptr)
OPTION(prefix_2, &"--just-symbols="[2], just_symbols_eq, Joined, INVALID, just_symbols, nullptr, 0, 0,
       "Just link symbols", nullptr, nullptr)
OPTION(prefix_2, &"--just-symbols"[2], just_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--keep-unique="[2], keep_unique_eq, Joined, INVALID, keep_unique, nullptr, 0, 0,
       "Do not fold this symbol during ICF", nullptr, nullptr)
OPTION(prefix_2, &"--keep-unique"[2], keep_unique, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--library-path="[2], library_path_eq, Joined, INVALID, library_path, nullptr, 0, 0,
       "Add a directory to the library search path", "<dir>", nullptr)
OPTION(prefix_2, &"--library-path"[2], library_path, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<dir>", nullptr)
OPTION(prefix_2, &"--library="[2], library_eq, Joined, INVALID, library, nullptr, 0, 0,
       "Root name of library to use", "<libName>", nullptr)
OPTION(prefix_2, &"--library"[2], library, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<libName>", nullptr)
OPTION(prefix_2, &"--long-plt"[2], anonymous_67, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--lto-aa-pipeline="[2], lto_aa_pipeline, Joined, INVALID, INVALID, nullptr, 0, 0,
       "AA pipeline to run during LTO. Used in conjunction with -lto-newpm-passes", nullptr, nullptr)
OPTION(prefix_3, &"--lto-basic-block-sections="[2], lto_basic_block_sections, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Enable basic block sections for LTO", nullptr, nullptr)
OPTION(prefix_3, &"--lto-cs-profile-file="[2], lto_cs_profile_file, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Context sensitive profile file path", nullptr, nullptr)
OPTION(prefix_3, &"--lto-cs-profile-generate"[2], lto_cs_profile_generate, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Perform context sensitive PGO instrumentation", nullptr, nullptr)
OPTION(prefix_3, &"--lto-debug-pass-manager"[2], lto_debug_pass_manager, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Debug new pass manager", nullptr, nullptr)
OPTION(prefix_3, &"--lto-emit-asm"[2], lto_emit_asm, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Emit assembly code", nullptr, nullptr)
OPTION(prefix_3, &"--lto-legacy-pass-manager"[2], lto_legacy_pass_manager, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use the legacy pass manager in LLVM", nullptr, nullptr)
OPTION(prefix_3, &"--lto-newpm-passes="[2], lto_newpm_passes, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Passes to run during LTO", nullptr, nullptr)
OPTION(prefix_3, &"--lto-obj-path="[2], lto_obj_path_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--lto-O"[2], lto_O, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Optimization level for LTO", "<opt-level>", nullptr)
OPTION(prefix_3, &"--lto-partitions="[2], lto_partitions, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Number of LTO codegen partitions", nullptr, nullptr)
OPTION(prefix_2, &"--lto-pseudo-probe-for-profiling"[2], lto_pseudo_probe_for_profiling, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Emit pseudo probes for sample profiling", nullptr, nullptr)
OPTION(prefix_3, &"--lto-sample-profile="[2], lto_sample_profile, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Sample profile file path", nullptr, nullptr)
OPTION(prefix_3, &"--lto-unique-basic-block-section-names"[2], lto_unique_basic_block_section_names, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Give unique names to every basic block section for LTO", nullptr, nullptr)
OPTION(prefix_3, &"--lto-whole-program-visibility"[2], lto_whole_program_visibility, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Asserts that the LTO link has whole program visibility", nullptr, nullptr)
OPTION(prefix_1, &"-L"[1], anonymous_18, JoinedOrSeparate, INVALID, library_path, nullptr, 0, 0,
       "Alias for --library-path", nullptr, nullptr)
OPTION(prefix_1, &"-l"[1], anonymous_17, JoinedOrSeparate, INVALID, library, nullptr, 0, 0,
       "Alias for --library", nullptr, nullptr)
OPTION(prefix_2, &"--Map="[2], Map_eq, Joined, INVALID, Map, nullptr, 0, 0,
       "Print a link map to the specified file", nullptr, nullptr)
OPTION(prefix_2, &"--Map"[2], Map, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--merge-exidx-entries"[2], merge_exidx_entries, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable merging .ARM.exidx entries (default)", nullptr, nullptr)
OPTION(prefix_2, &"--mips-got-size="[2], mips_got_size_eq, Joined, INVALID, mips_got_size, nullptr, HelpHidden, 0,
       "Max size of a single MIPS GOT. 0x10000 by default.", nullptr, nullptr)
OPTION(prefix_2, &"--mips-got-size"[2], mips_got_size, Separate, INVALID, INVALID, nullptr, HelpHidden, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--mllvm="[2], mllvm_eq, Joined, INVALID, mllvm, nullptr, 0, 0,
       "Additional arguments to forward to LLVM's option processing", nullptr, nullptr)
OPTION(prefix_2, &"--mllvm"[2], mllvm, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--mmap-output-file"[2], mmap_output_file, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mmap the output file for writing (default)", nullptr, nullptr)
OPTION(prefix_1, &"-M"[1], anonymous_25, Flag, INVALID, print_map, nullptr, 0, 0,
       "Alias for --print-map", nullptr, nullptr)
OPTION(prefix_1, &"-m"[1], m, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Set target emulation", nullptr, nullptr)
OPTION(prefix_2, &"--nmagic"[2], nmagic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not page align sections, link against static libraries.", "<magic>", nullptr)
OPTION(prefix_2, &"--no-add-needed"[2], anonymous_68, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--no-allow-multiple-definition"[2], no_allow_multiple_definition, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not allow multiple definitions (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-allow-shlib-undefined"[2], no_allow_shlib_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not allow unresolved references in shared libraries (default when linking an executable)", nullptr, nullptr)
OPTION(prefix_3, &"--no-apply-dynamic-relocs"[2], no_apply_dynamic_relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not apply link-time values for dynamic relocations (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-as-needed"[2], no_as_needed, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Always set DT_NEEDED for shared libraries (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-call-graph-profile-sort"[2], no_call_graph_profile_sort, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not reorder sections with call graph profile", nullptr, nullptr)
OPTION(prefix_2, &"--no-check-sections"[2], no_check_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not check section addresses for overlaps", nullptr, nullptr)
OPTION(prefix_2, &"--no-color-diagnostics"[2], no_color_diagnostics, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --color-diagnostics=never", nullptr, nullptr)
OPTION(prefix_2, &"--no-copy-dt-needed-entries"[2], anonymous_69, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--no-cref"[2], no_cref, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not output cross reference table", nullptr, nullptr)
OPTION(prefix_2, &"--no-ctors-in-init-array"[2], anonymous_70, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--no-define-common"[2], no_define_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not assign space to common symbols", nullptr, nullptr)
OPTION(prefix_2, &"--no-demangle"[2], no_demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not demangle symbol names", nullptr, nullptr)
OPTION(prefix_3, &"--no-dependent-libraries"[2], no_dependent_libraries, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignore dependent library specifiers from input files", nullptr, nullptr)
OPTION(prefix_2, &"--no-dynamic-linker"[2], no_dynamic_linker, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Inhibit output of .interp section", nullptr, nullptr)
OPTION(prefix_2, &"--no-eh-frame-hdr"[2], no_eh_frame_hdr, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not create .eh_frame_hdr section", nullptr, nullptr)
OPTION(prefix_3, &"--no-execute-only"[2], no_execute_only, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark executable sections readable (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-export-dynamic"[2], no_export_dynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not put symbols in the dynamic symbol table (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-fatal-warnings"[2], no_fatal_warnings, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not treat warnings as errors (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-fortran-common"[2], no_fortran_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not search archive members for definitions to override COMMON symbols", nullptr, nullptr)
OPTION(prefix_2, &"--no-gc-sections"[2], no_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable garbage collection of unused sections (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-gdb-index"[2], no_gdb_index, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not generate .gdb_index section (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-gnu-unique"[2], no_gnu_unique, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable STB_GNU_UNIQUE symbol binding", nullptr, nullptr)
OPTION(prefix_2, &"--no-keep-memory"[2], anonymous_71, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--no-lto-legacy-pass-manager"[2], no_lto_legacy_pass_manager, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use the new pass manager in LLVM", nullptr, nullptr)
OPTION(prefix_3, &"--no-lto-unique-basic-block-section-names"[2], no_lto_unique_basic_block_section_names, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not give unique names to every basic block section for LTO (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-lto-whole-program-visibility"[2], no_lto_whole_program_visibility, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Asserts that the LTO link does not have whole program visibility", nullptr, nullptr)
OPTION(prefix_2, &"--no-merge-exidx-entries"[2], no_merge_exidx_entries, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable merging .ARM.exidx entries", nullptr, nullptr)
OPTION(prefix_3, &"--no-mmap-output-file"[2], no_mmap_output_file, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not mmap the output file for writing", nullptr, nullptr)
OPTION(prefix_2, &"--no-nmagic"[2], no_nmagic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Page align sections (default)", "<magic>", nullptr)
OPTION(prefix_2, &"--no-omagic"[2], no_omagic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not set the text data sections to be writable, page align sections (default)", "<magic>", nullptr)
OPTION(prefix_3, &"--no-optimize-bb-jumps"[2], no_optimize_bb_jumps, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove any direct jumps at the end to the next basic block (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-pcrel-optimize"[2], no_pcrel_optimize, Flag, INVALID, INVALID, nullptr, 0, 0,
       "(PowerPC64) Disable PC-relative optimizations", nullptr, nullptr)
OPTION(prefix_2, &"--no-pic-executable"[2], anonymous_19, Flag, INVALID, no_pie, nullptr, 0, 0,
       "Alias for --no-pie", nullptr, nullptr)
OPTION(prefix_2, &"--no-pie"[2], no_pie, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not create a position independent executable (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-pipeline-knowledge"[2], anonymous_72, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--no-print-gc-sections"[2], no_print_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not list removed unused sections (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-print-icf-sections"[2], no_print_icf_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not list identical folded sections (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-relax"[2], anonymous_73, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--no-rosegment"[2], no_rosegment, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not put read-only non-executable sections in their own segment", nullptr, nullptr)
OPTION(prefix_3, &"--no-toc-optimize"[2], no_toc_optimize, Flag, INVALID, INVALID, nullptr, 0, 0,
       "(PowerPC64) Disable TOC related optimizations", nullptr, nullptr)
OPTION(prefix_2, &"--no-undefined-version"[2], no_undefined_version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report version scripts that refer undefined symbols", nullptr, nullptr)
OPTION(prefix_2, &"--no-undefined"[2], no_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report unresolved symbols even if the linker is creating a shared library", nullptr, nullptr)
OPTION(prefix_3, &"--no-use-android-relr-tags"[2], no_use_android_relr_tags, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use SHT_RELR / DT_RELR* tags (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-warn-backrefs"[2], no_warn_backrefs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not warn about backward symbol references to fetch archive members (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-warn-common"[2], no_warn_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not warn about duplicate common symbols (default)", nullptr, nullptr)
OPTION(prefix_3, &"--no-warn-ifunc-textrel"[2], no_warn_ifunc_textrel, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not warn about using ifunc symbols with text relocations (default)", nullptr, nullptr)
OPTION(prefix_2, &"--no-warn-mismatch"[2], anonymous_74, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--no-warn-symbol-ordering"[2], no_warn_symbol_ordering, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not warn about problems with the symbol ordering file", nullptr, nullptr)
OPTION(prefix_2, &"--no-whole-archive"[2], no_whole_archive, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not force load of all members in a static library (default)", nullptr, nullptr)
OPTION(prefix_2, &"--noinhibit-exec"[2], noinhibit_exec, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Retain the executable output file whenever it is still usable", nullptr, nullptr)
OPTION(prefix_2, &"--non_shared"[2], anonymous_4, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_2, &"--nostdlib"[2], nostdlib, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Only search directories specified on the command line", nullptr, nullptr)
OPTION(prefix_1, &"-N"[1], anonymous_21, Flag, INVALID, omagic, nullptr, 0, 0,
       "Alias for --omagic", nullptr, nullptr)
OPTION(prefix_1, &"-n"[1], anonymous_20, Flag, INVALID, nmagic, nullptr, 0, 0,
       "Alias for --nmagic", nullptr, nullptr)
OPTION(prefix_3, &"--oformat"[2], oformat, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Specify the binary format for the output object file", "<format>", nullptr)
OPTION(prefix_3, &"--omagic"[2], omagic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Set the text and data sections to be readable and writable, do not page align sections, link against static libraries", "<magic>", nullptr)
OPTION(prefix_3, &"--opt-remarks-filename"[2], opt_remarks_filename, Separate, INVALID, INVALID, nullptr, 0, 0,
       "YAML output file for optimization remarks", nullptr, nullptr)
OPTION(prefix_3, &"--opt-remarks-format"[2], opt_remarks_format, Separate, INVALID, INVALID, nullptr, 0, 0,
       "The format used for serializing remarks (default: YAML)", nullptr, nullptr)
OPTION(prefix_3, &"--opt-remarks-hotness-threshold="[2], opt_remarks_hotness_threshold_eq, Joined, INVALID, opt_remarks_hotness_threshold, nullptr, 0, 0,
       "Minimum profile count required for an optimization remark to be output. Use 'auto' to apply the threshold from profile summary.", "<value>", nullptr)
OPTION(prefix_3, &"--opt-remarks-hotness-threshold"[2], opt_remarks_hotness_threshold, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<value>", nullptr)
OPTION(prefix_3, &"--opt-remarks-passes"[2], opt_remarks_passes, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Regex for the passes that need to be serialized to the output file", nullptr, nullptr)
OPTION(prefix_3, &"--opt-remarks-with-hotness"[2], opt_remarks_with_hotness, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Include hotness information in the optimization remarks file", nullptr, nullptr)
OPTION(prefix_3, &"--optimize-bb-jumps"[2], optimize_bb_jumps, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove direct jumps at the end to the next basic block", nullptr, nullptr)
OPTION(prefix_2, &"--orphan-handling="[2], orphan_handling_eq, Joined, INVALID, orphan_handling, nullptr, 0, 0,
       "Control how orphan sections are handled when linker script used", nullptr, nullptr)
OPTION(prefix_2, &"--orphan-handling"[2], orphan_handling, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--output="[2], anonymous_22, Joined, INVALID, o, nullptr, 0, 0,
       "Alias for -o", nullptr, nullptr)
OPTION(prefix_3, &"--output"[2], anonymous_23, Separate, INVALID, o, nullptr, 0, 0,
       "Alias for -o", nullptr, nullptr)
OPTION(prefix_1, &"-O"[1], O, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Optimize output file size", nullptr, nullptr)
OPTION(prefix_1, &"-o"[1], o, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Path to file to write output", "<path>", nullptr)
OPTION(prefix_2, &"--pack-dyn-relocs="[2], pack_dyn_relocs_eq, Joined, INVALID, pack_dyn_relocs, nullptr, 0, 0,
       "Pack dynamic relocations in the given format", "[none,android,relr,android+relr]", nullptr)
OPTION(prefix_2, &"--pack-dyn-relocs"[2], pack_dyn_relocs, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "[none,android,relr,android+relr]", nullptr)
OPTION(prefix_3, &"--pcrel-optimize"[2], pcrel_optimize, Flag, INVALID, INVALID, nullptr, 0, 0,
       "(PowerPC64) Enable PC-relative optimizations (default)", nullptr, nullptr)
OPTION(prefix_2, &"--pic-executable"[2], anonymous_24, Flag, INVALID, pie, nullptr, 0, 0,
       "Alias for --pie", nullptr, nullptr)
OPTION(prefix_2, &"--pic-veneer"[2], pic_veneer, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Always generate position independent thunks (veneers)", nullptr, nullptr)
OPTION(prefix_2, &"--pie"[2], pie, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create a position independent executable", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=-fresolution="[2], anonymous_63, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=-pass-through="[2], anonymous_64, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=-"[2], plugin_opt_eq_minus, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify an LLVM option for compatibility with LLVMgold.so", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=cs-profile-generate"[2], anonymous_46, Flag, INVALID, lto_cs_profile_generate, nullptr, 0, 0,
       "Alias for --lto-cs-profile-generate", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=cs-profile-path="[2], anonymous_47, Joined, INVALID, lto_cs_profile_file, nullptr, 0, 0,
       "Alias for --lto-cs-profile-file", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=debug-pass-manager"[2], anonymous_40, Flag, INVALID, lto_debug_pass_manager, nullptr, 0, 0,
       "Alias for --lto-debug-pass-manager", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=disable-verify"[2], anonymous_41, Flag, INVALID, disable_verify, nullptr, 0, 0,
       "Alias for --disable-verify", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=dwo_dir="[2], plugin_opt_dwo_dir_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Directory to store .dwo files when LTO and debug fission are used", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=emit-asm"[2], plugin_opt_emit_asm, Flag, INVALID, lto_emit_asm, nullptr, 0, 0,
       "Alias for --lto-emit-asm", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=emit-llvm"[2], plugin_opt_emit_llvm, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=jobs="[2], anonymous_42, Joined, INVALID, thinlto_jobs, nullptr, 0, 0,
       "Alias for --thinlto-jobs", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=legacy-pass-manager"[2], anonymous_45, Flag, INVALID, lto_legacy_pass_manager, nullptr, 0, 0,
       "Alias for --no-legacy-pass-manager", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=lto-partitions="[2], anonymous_43, Joined, INVALID, lto_partitions, nullptr, 0, 0,
       "Alias for --lto-partitions", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=mcpu="[2], plugin_opt_mcpu_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=new-pass-manager"[2], anonymous_44, Flag, INVALID, no_lto_legacy_pass_manager, nullptr, 0, 0,
       "Alias for --no-lto-legacy-pass-manager", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=obj-path="[2], anonymous_48, Joined, INVALID, lto_obj_path_eq, nullptr, 0, 0,
       "Alias for --lto-obj-path=", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=opt-remarks-filename="[2], anonymous_49, Joined, INVALID, opt_remarks_filename, nullptr, 0, 0,
       "Alias for --opt-remarks-filename", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=opt-remarks-format="[2], anonymous_51, Joined, INVALID, opt_remarks_format, nullptr, 0, 0,
       "Alias for --opt-remarks-format", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=opt-remarks-hotness-threshold="[2], anonymous_53, Joined, INVALID, opt_remarks_hotness_threshold, nullptr, 0, 0,
       "Alias for --opt-remarks-hotness-threshold", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=opt-remarks-passes="[2], anonymous_50, Joined, INVALID, opt_remarks_passes, nullptr, 0, 0,
       "Alias for --opt-remarks-passes", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=opt-remarks-with-hotness"[2], anonymous_52, Flag, INVALID, opt_remarks_with_hotness, nullptr, 0, 0,
       "Alias for --opt-remarks-with_hotness", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=O"[2], anonymous_39, Joined, INVALID, lto_O, nullptr, 0, 0,
       "Alias for --lto-O", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=pseudo-probe-for-profiling"[2], anonymous_54, Joined, INVALID, lto_pseudo_probe_for_profiling, nullptr, 0, 0,
       "Alias for --lto-pseudo-probe-for-profiling", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=sample-profile="[2], anonymous_55, Joined, INVALID, lto_sample_profile, nullptr, 0, 0,
       "Alias for --lto-sample-profile", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=save-temps"[2], anonymous_56, Flag, INVALID, save_temps, nullptr, 0, 0,
       "Alias for --save-temps", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto-emit-imports-files"[2], anonymous_57, Flag, INVALID, thinlto_emit_imports_files, nullptr, 0, 0,
       "Alias for --thinlto-emit-imports-files", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto-index-only="[2], anonymous_59, Joined, INVALID, thinlto_index_only_eq, nullptr, 0, 0,
       "Alias for --thinlto-index-only=", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto-index-only"[2], anonymous_58, Flag, INVALID, thinlto_index_only, nullptr, 0, 0,
       "Alias for --thinlto-index-only", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto-object-suffix-replace="[2], anonymous_60, Joined, INVALID, thinlto_object_suffix_replace_eq, nullptr, 0, 0,
       "Alias for --thinlto-object-suffix-replace=", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto-prefix-replace="[2], anonymous_61, Joined, INVALID, thinlto_prefix_replace_eq, nullptr, 0, 0,
       "Alias for --thinlto-prefix-replace=", nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt=thinlto"[2], anonymous_62, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin-opt="[2], plugin_opt_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--plugin="[2], plugin_eq, Joined, INVALID, plugin, nullptr, 0, 0,
       "Ignored for compatibility with GNU linkers", nullptr, nullptr)
OPTION(prefix_2, &"--plugin"[2], plugin, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--pop-state"[2], pop_state, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Undo the effect of -push-state", nullptr, nullptr)
OPTION(prefix_2, &"--print-archive-stats="[2], print_archive_stats, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Write archive usage statistics to the specified file. Print the numbers of members and fetched members for each archive", nullptr, nullptr)
OPTION(prefix_2, &"--print-gc-sections"[2], print_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "List removed unused sections", nullptr, nullptr)
OPTION(prefix_2, &"--print-icf-sections"[2], print_icf_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "List identical folded sections", nullptr, nullptr)
OPTION(prefix_2, &"--print-map"[2], print_map, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print a link map to the standard output", nullptr, nullptr)
OPTION(prefix_2, &"--print-symbol-order="[2], print_symbol_order_eq, Joined, INVALID, print_symbol_order, nullptr, 0, 0,
       "Print a symbol order specified by --call-graph-ordering-file into the specified file", nullptr, nullptr)
OPTION(prefix_2, &"--print-symbol-order"[2], print_symbol_order, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--push-state"[2], push_state, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Save the current state of -as-needed, -static and -whole-archive", nullptr, nullptr)
OPTION(prefix_1, &"-p"[1], anonymous_75, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--Qy"[2], anonymous_87, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-q"[1], anonymous_11, Flag, INVALID, emit_relocs, nullptr, 0, 0,
       "Alias for --emit-relocs", nullptr, nullptr)
OPTION(prefix_2, &"--relocatable"[2], relocatable, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create relocatable object file", nullptr, nullptr)
OPTION(prefix_2, &"--reproduce="[2], reproduce_eq, Joined, INVALID, reproduce, nullptr, 0, 0,
       "Write tar file containing inputs and command to reproduce link", nullptr, nullptr)
OPTION(prefix_2, &"--reproduce"[2], reproduce, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--retain-symbols-file="[2], retain_symbols_file_eq, Joined, INVALID, retain_symbols_file, nullptr, 0, 0,
       "Retain only the symbols listed in the file", "<file>", nullptr)
OPTION(prefix_2, &"--retain-symbols-file"[2], retain_symbols_file, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<file>", nullptr)
OPTION(prefix_3, &"--rosegment"[2], rosegment, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Put read-only non-executable sections in their own segment (default)", nullptr, nullptr)
OPTION(prefix_2, &"--rpath-link="[2], anonymous_77, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--rpath-link"[2], anonymous_76, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--rpath="[2], rpath_eq, Joined, INVALID, rpath, nullptr, 0, 0,
       "Add a DT_RUNPATH to the output", nullptr, nullptr)
OPTION(prefix_2, &"--rpath"[2], rpath, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--rsp-quoting="[2], rsp_quoting_eq, Joined, INVALID, rsp_quoting, nullptr, 0, 0,
       "Quoting style for response files", "[posix,windows]", nullptr)
OPTION(prefix_2, &"--rsp-quoting"[2], rsp_quoting, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "[posix,windows]", nullptr)
OPTION(prefix_1, &"-R"[1], anonymous_27, JoinedOrSeparate, INVALID, rpath, nullptr, 0, 0,
       "Alias for --rpath", nullptr, nullptr)
OPTION(prefix_1, &"-r"[1], anonymous_26, Flag, INVALID, relocatable, nullptr, 0, 0,
       "Alias for --relocatable", nullptr, nullptr)
OPTION(prefix_2, &"--save-temps"[2], save_temps, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Save intermediate LTO compilation results", nullptr, nullptr)
OPTION(prefix_2, &"--script="[2], script_eq, Joined, INVALID, script, nullptr, 0, 0,
       "Read linker script", nullptr, nullptr)
OPTION(prefix_2, &"--script"[2], script, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--section-start="[2], section_start_eq, Joined, INVALID, section_start, nullptr, 0, 0,
       "Set address of section", "<address>", nullptr)
OPTION(prefix_2, &"--section-start"[2], section_start, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<address>", nullptr)
OPTION(prefix_2, &"--secure-plt"[2], anonymous_78, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--shared"[2], shared, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Build a shared object", nullptr, nullptr)
OPTION(prefix_3, &"--shuffle-sections="[2], shuffle_sections, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Shuffle input sections using the given seed. If 0, use a random seed", "<seed>", nullptr)
OPTION(prefix_2, &"--soname="[2], soname_eq, Joined, INVALID, soname, nullptr, 0, 0,
       "Set DT_SONAME", nullptr, nullptr)
OPTION(prefix_2, &"--soname"[2], soname, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--sort-common"[2], anonymous_79, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--sort-section="[2], sort_section_eq, Joined, INVALID, sort_section, nullptr, 0, 0,
       "Specifies sections sorting rule when linkerscript is used", nullptr, nullptr)
OPTION(prefix_2, &"--sort-section"[2], sort_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--split-stack-adjust-size="[2], split_stack_adjust_size_eq, Joined, INVALID, split_stack_adjust_size, nullptr, 0, 0,
       "Specify adjustment to stack size when a split-stack function calls a non-split-stack function", "<value>", nullptr)
OPTION(prefix_2, &"--split-stack-adjust-size"[2], split_stack_adjust_size, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<value>", nullptr)
OPTION(prefix_2, &"--start-group"[2], start_group, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignored for compatibility with GNU unless you pass --warn-backrefs", nullptr, nullptr)
OPTION(prefix_2, &"--start-lib"[2], start_lib, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Start a grouping of objects that should be treated as if they were together in an archive", nullptr, nullptr)
OPTION(prefix_2, &"--static"[2], anonymous_5, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_2, &"--stats"[2], anonymous_80, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--strip-all"[2], strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip all symbols", nullptr, nullptr)
OPTION(prefix_2, &"--strip-debug"[2], strip_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip debugging information", nullptr, nullptr)
OPTION(prefix_2, &"--symbol-ordering-file="[2], symbol_ordering_file_eq, Joined, INVALID, symbol_ordering_file, nullptr, 0, 0,
       "Layout sections to place symbols in the order specified by symbol ordering file", nullptr, nullptr)
OPTION(prefix_2, &"--symbol-ordering-file"[2], symbol_ordering_file, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--sysroot="[2], sysroot_eq, Joined, INVALID, sysroot, nullptr, 0, 0,
       "Set the system root", nullptr, nullptr)
OPTION(prefix_2, &"--sysroot"[2], sysroot, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-S"[1], anonymous_33, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_1, &"-s"[1], anonymous_32, Flag, INVALID, strip_all, nullptr, 0, 0,
       "Alias for --strip-all", nullptr, nullptr)
OPTION(prefix_2, &"--target1-abs"[2], target1_abs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Interpret R_ARM_TARGET1 as R_ARM_ABS32 (default)", nullptr, nullptr)
OPTION(prefix_2, &"--target1-rel"[2], target1_rel, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Interpret R_ARM_TARGET1 as R_ARM_REL32", nullptr, nullptr)
OPTION(prefix_2, &"--target2="[2], target2_eq, Joined, INVALID, target2, nullptr, 0, 0,
       "Interpret R_ARM_TARGET2 as <type>, where <type> is one of rel, abs, or got-rel", "<type>", nullptr)
OPTION(prefix_2, &"--target2"[2], target2, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<type>", nullptr)
OPTION(prefix_2, &"--Tbss="[2], Tbss_eq, Joined, INVALID, Tbss, nullptr, 0, 0,
       "Same as --section-start with .bss as the sectionname", nullptr, nullptr)
OPTION(prefix_2, &"--Tbss"[2], Tbss, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--Tdata="[2], Tdata_eq, Joined, INVALID, Tdata, nullptr, 0, 0,
       "Same as --section-start with .data as the sectionname", nullptr, nullptr)
OPTION(prefix_2, &"--Tdata"[2], Tdata, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-cache-dir="[2], thinlto_cache_dir, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Path to ThinLTO cached object file directory", nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-cache-policy="[2], thinlto_cache_policy_eq, Joined, INVALID, thinlto_cache_policy, nullptr, 0, 0,
       "Pruning policy for the ThinLTO cache", nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-cache-policy"[2], thinlto_cache_policy, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-emit-imports-files"[2], thinlto_emit_imports_files, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-index-only="[2], thinlto_index_only_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-index-only"[2], thinlto_index_only, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-jobs="[2], thinlto_jobs, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Number of ThinLTO jobs. Default to --threads=", nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-object-suffix-replace="[2], thinlto_object_suffix_replace_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-prefix-replace="[2], thinlto_prefix_replace_eq, Joined, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--thinlto-single-module="[2], thinlto_single_module_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specific a single module to compile in ThinLTO mode, for debugging only", nullptr, nullptr)
OPTION(prefix_2, &"--threads="[2], threads_eq, Joined, INVALID, threads, nullptr, 0, 0,
       "Number of threads. '1' disables multi-threading. By default all available hardware threads are used", nullptr, nullptr)
OPTION(prefix_2, &"--threads"[2], threads, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--time-trace-file="[2], time_trace_file_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Specify time trace output file", nullptr, nullptr)
OPTION(prefix_3, &"--time-trace-granularity="[2], time_trace_granularity_eq, Joined, INVALID, time_trace_granularity, nullptr, 0, 0,
       "Minimum time granularity (in microseconds) traced by time profiler", nullptr, nullptr)
OPTION(prefix_3, &"--time-trace-granularity"[2], time_trace_granularity, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--time-trace"[2], time_trace, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Record time trace", nullptr, nullptr)
OPTION(prefix_3, &"--toc-optimize"[2], toc_optimize, Flag, INVALID, INVALID, nullptr, 0, 0,
       "(PowerPC64) Enable TOC related optimizations (default)", nullptr, nullptr)
OPTION(prefix_2, &"--trace-symbol="[2], trace_symbol_eq, Joined, INVALID, trace_symbol, nullptr, 0, 0,
       "Trace references to symbols", nullptr, nullptr)
OPTION(prefix_2, &"--trace-symbol"[2], trace_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--trace"[2], trace, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the names of the input files", nullptr, nullptr)
OPTION(prefix_4, &"-Ttext-segment="[1], anonymous_35, Joined, INVALID, Ttext_segment, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_4, &"-Ttext-segment"[1], Ttext_segment, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--Ttext="[2], Ttext_eq, Joined, INVALID, Ttext, nullptr, 0, 0,
       "Same as --section-start with .text as the sectionname", nullptr, nullptr)
OPTION(prefix_2, &"--Ttext"[2], Ttext, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, &"-T"[1], anonymous_28, JoinedOrSeparate, INVALID, script, nullptr, 0, 0,
       "Alias for --script", nullptr, nullptr)
OPTION(prefix_1, &"-t"[1], anonymous_34, Flag, INVALID, trace, nullptr, 0, 0,
       "Alias for --trace", nullptr, nullptr)
OPTION(prefix_3, &"--undefined-glob="[2], undefined_glob_eq, Joined, INVALID, undefined_glob, nullptr, 0, 0,
       "Force undefined symbol during linking", "<pattern>", nullptr)
OPTION(prefix_3, &"--undefined-glob"[2], undefined_glob, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<pattern>", nullptr)
OPTION(prefix_2, &"--undefined-version"[2], undefined_version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow unused version in version script (default)", nullptr, nullptr)
OPTION(prefix_2, &"--undefined="[2], undefined_eq, Joined, INVALID, undefined, nullptr, 0, 0,
       "Force undefined symbol during linking", "<symbol>", nullptr)
OPTION(prefix_2, &"--undefined"[2], undefined, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>", nullptr)
OPTION(prefix_2, &"--unique"[2], unique, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Creates a separate output section for every orphan input section", nullptr, nullptr)
OPTION(prefix_2, &"--unresolved-symbols="[2], unresolved_symbols_eq, Joined, INVALID, unresolved_symbols, nullptr, 0, 0,
       "Determine how to handle unresolved symbols", nullptr, nullptr)
OPTION(prefix_2, &"--unresolved-symbols"[2], unresolved_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--use-android-relr-tags"[2], use_android_relr_tags, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use SHT_ANDROID_RELR / DT_ANDROID_RELR* tags instead of SHT_RELR / DT_RELR*", nullptr, nullptr)
OPTION(prefix_1, &"-u"[1], anonymous_37, JoinedOrSeparate, INVALID, undefined, nullptr, 0, 0,
       "Alias for --undefined", nullptr, nullptr)
OPTION(prefix_2, &"--verbose"[2], verbose, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Verbose mode", nullptr, nullptr)
OPTION(prefix_2, &"--version-script="[2], version_script_eq, Joined, INVALID, version_script, nullptr, 0, 0,
       "Read a version script", nullptr, nullptr)
OPTION(prefix_2, &"--version-script"[2], version_script, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--version"[2], version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version number and exit", nullptr, nullptr)
OPTION(prefix_2, &"--vs-diagnostics"[2], visual_studio_diagnostics_format, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Format diagnostics for Visual Studio compatibility", nullptr, nullptr)
OPTION(prefix_1, &"-V"[1], anonymous_38, Flag, INVALID, version, nullptr, 0, 0,
       "Alias for --version", nullptr, nullptr)
OPTION(prefix_1, &"-v"[1], v, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version number", nullptr, nullptr)
OPTION(prefix_3, &"--warn-backrefs-exclude="[2], warn_backrefs_exclude_eq, Joined, INVALID, warn_backrefs_exclude, nullptr, 0, 0,
       "Glob describing an archive (or an object file within --start-lib) which should be ignored for --warn-backrefs.", "<glob>", nullptr)
OPTION(prefix_3, &"--warn-backrefs-exclude"[2], warn_backrefs_exclude, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<glob>", nullptr)
OPTION(prefix_3, &"--warn-backrefs"[2], warn_backrefs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Warn about backward symbol references to fetch archive members", nullptr, nullptr)
OPTION(prefix_2, &"--warn-common"[2], warn_common, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Warn about duplicate common symbols", nullptr, nullptr)
OPTION(prefix_2, &"--warn-execstack"[2], anonymous_81, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--warn-ifunc-textrel"[2], warn_ifunc_textrel, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Warn about using ifunc symbols with text relocations", nullptr, nullptr)
OPTION(prefix_2, &"--warn-once"[2], anonymous_82, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, &"--warn-shared-textrel"[2], anonymous_83, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, &"--warn-symbol-ordering"[2], warn_symbol_ordering, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Warn about problems with the symbol ordering file (default)", nullptr, nullptr)
OPTION(prefix_2, &"--warn-unresolved-symbols"[2], warn_unresolved_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report unresolved symbols as warnings", nullptr, nullptr)
OPTION(prefix_2, &"--whole-archive"[2], whole_archive, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Force load of all members in a static library", nullptr, nullptr)
OPTION(prefix_2, &"--wrap="[2], wrap_eq, Joined, INVALID, wrap, nullptr, 0, 0,
       "Redirect symbol references to __wrap_symbol and __real_symbol references to symbol", "<symbol>", nullptr)
OPTION(prefix_2, &"--wrap"[2], wrap, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>", nullptr)
OPTION(prefix_1, &"-X"[1], anonymous_10, Flag, INVALID, discard_locals, nullptr, 0, 0,
       "Alias for --discard-locals", nullptr, nullptr)
OPTION(prefix_1, &"-x"[1], anonymous_9, Flag, INVALID, discard_all, nullptr, 0, 0,
       "Alias for --discard-all", nullptr, nullptr)
OPTION(prefix_1, &"-y"[1], anonymous_36, JoinedOrSeparate, INVALID, trace_symbol, nullptr, 0, 0,
       "Alias for --trace-symbol", nullptr, nullptr)
OPTION(prefix_1, &"-z"[1], z, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Linker option extensions", "<option>", nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = sizeof(SimpleEnumValueTables) / sizeof(SimpleEnumValueTable);
#endif // SIMPLE_ENUM_VALUE_TABLE


#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
