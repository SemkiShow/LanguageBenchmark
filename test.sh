#!/bin/bash

echo "What test do you want to run?"
echo "1) Print"
echo "2) Add"
echo "3) Sine"
echo "4) Prime numbers"
echo "5) Collatz conjecture"
echo "6) Naive fibonacci"
echo "7) Powers"
echo "8) Square roots"
echo -n "Your choice: "
read test

echo "What what language do you want to test?"
echo "1) Python"
echo "2) C++"
echo -n "Your choice: "
read language

if [ $test == 1 ]; then
    if [ $language == 1 ]; then
        time python3 Print/print.py
    elif [ $language == 2 ]; then
        g++ -o Print/printcpp -O3 Print/print.cpp && time ./Print/printcpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 2 ]; then
    if [ $language == 1 ]; then
        time python3 Add/add.py
    elif [ $language == 2 ]; then
        g++ -o Add/addcpp -O3 Add/add.cpp && time ./Add/addcpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 3 ]; then
    if [ $language == 1 ]; then
        time python3 Sin/sin.py
    elif [ $language == 2 ]; then
        g++ -o Sin/sincpp -O3 Sin/sin.cpp && time ./Sin/sincpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 4 ]; then
    if [ $language == 1 ]; then
        time python3 Prime/prime.py
    elif [ $language == 2 ]; then
        g++ -o Prime/primecpp -O3 Prime/prime.cpp && time ./Prime/primecpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 5 ]; then
    if [ $language == 1 ]; then
        time python3 Collatz/collatz.py
    elif [ $language == 2 ]; then
        g++ -o Collatz/collatzcpp -O3 Collatz/collatz.cpp && time ./Collatz/collatzcpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 6 ]; then
    if [ $language == 1 ]; then
        time python3 Fibonacci/fibonacci.py
    elif [ $language == 2 ]; then
        g++ -o Fibonacci/fibonaccicpp -O3 Fibonacci/fibonacci.cpp && time ./Fibonacci/fibonaccicpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 7 ]; then
    if [ $language == 1 ]; then
        time python3 Power/power.py
    elif [ $language == 2 ]; then
        g++ -o Power/powercpp -O3 Power/power.cpp && time ./Power/powercpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 8 ]; then
    if [ $language == 1 ]; then
        time python3 Sqrt/sqrt.py
    elif [ $language == 2 ]; then
        g++ -o Sqrt/sqrtcpp -O3 Sqrt/sqrt.cpp && time ./Sqrt/sqrtcpp
    else
        echo "Test language error!"
        exit 1
    fi
else
    echo "Test number error!"
    exit 1
fi
