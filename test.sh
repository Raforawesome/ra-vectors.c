#!/opt/homebrew/bin/fish
clang -c -o ravectors.o lib/ravectors.c
clang -c -o test.o monolith_test.c
clang -o test test.o ravectors.o
./test
rm *.o
rm test
