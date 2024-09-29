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
4) Naive fibonacci (coming soon)
5) Prime numbers
Your choice: 5
What what language do you want to test?
1) Python
2) C++
Your choice: 1

real    0m0.803s
user    0m0.751s
sys     0m0.034s
```
```
$ ./test.sh 
What test do you want to run?
1) Print
2) Add
3) Sine
4) Naive fibonacci (coming soon)
5) Prime numbers
Your choice: 5
What what language do you want to test?
1) Python
2) C++
Your choice: 2

real    0m0.124s
user    0m0.111s
sys     0m0.013s
```
