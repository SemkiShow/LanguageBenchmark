#!/bin/bash

echo "What test do you want to run?"
echo "1) Print"
echo "2) Add"
echo "3) Sine"
echo "4) Naive fibonacci (coming soon)"
echo "5) Prime numbers"
echo -n "Your choice: "
read test

echo "What what language do you want to test?"
echo "1) Python"
echo "2) C++"
echo -n "Your choice: "
read language

if [ $test == 1 ]; then
    if [ $language == 1 ]; then
        time python3 print.py
    elif [ $language == 2 ]; then
        g++ -o printcpp print.cpp && time ./printcpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 2 ]; then
    if [ $language == 1 ]; then
        time python3 add.py
    elif [ $language == 2 ]; then
        g++ -o addcpp add.cpp && time ./addcpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 3 ]; then
    if [ $language == 1 ]; then
        time python3 sin.py
    elif [ $language == 2 ]; then
        g++ -o sincpp sin.cpp && time ./sincpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 4 ]; then
    if [ $language == 1 ]; then
        time python3 Fibonacci/fibonacci.py
    elif [ $language == 2 ]; then
        g++ -o Fibonacci/fibonaccicpp Fibonacci/fibonacci.cpp && time ./Fibonacci/fibonaccicpp
    else
        echo "Test language error!"
        exit 1
    fi
elif [ $test == 5 ]; then
    if [ $language == 1 ]; then
        time python3 prime.py
    elif [ $language == 2 ]; then
        g++ -o primecpp -O3 prime.cpp && time ./primecpp
    else
        echo "Test language error!"
        exit 1
    fi
else
    echo "Test number error!"
    exit 1
fi
