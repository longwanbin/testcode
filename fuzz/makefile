all:
	clang++ -shared -fPIC -fsanitize=address vulnerable_functions.cc -o libvulnerable_functions.so
	clang++ -fsanitize=address,fuzzer first_fuzzer.cc -o first_fuzzer -lvulnerable_functions -L.
	clang++ -fno-omit-frame-pointer -g -fsanitize=address -fsanitize-coverage=trace-cmp,trace-gep,trace-div -c -o vulnerable_functions.o vulnerable_functions.cc
	ar rcs libvulnerable_functions.a vulnerable_functions.o
	clang++ -fsanitize=address,fuzzer first_fuzzer.cc libvulnerable_functions.a -o first_fuzzer_a
