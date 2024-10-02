# Language benchmark

This repo was created to test the speed difference between Python and C++. To run the testing script (test.sh), you need to use Linux, Mac (all the g++ calls need to be replaced with clang++ calls) or WSL on Windows(all the g++ calls need to be replaced with mingw64-g++ calls).

---
Examples:
```
$ ./test.sh 
What test do you want to run?
1) Print
2) Add
3) Sine
4) Prime numbers
5) Collatz conjecture
6) Naive fibonacci
Your choice: 4
What what language do you want to test?
1) Python
2) C++
Your choice: 1

real    0m0.790s
user    0m0.766s
sys     0m0.023s
```
```
$ ./test.sh 
What test do you want to run?
1) Print
2) Add
3) Sine
4) Prime numbers
5) Collatz conjecture
6) Naive fibonacci
Your choice: 4
What what language do you want to test?
1) Python
2) C++
Your choice: 2

real    0m0.122s
user    0m0.108s
sys     0m0.013s
```
