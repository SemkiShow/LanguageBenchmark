#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "LongInt.hpp"

LongInt NextFibonacci(LongInt a, LongInt b)
{
    return add(a, b);
}

int main()
{
    LongInt a;
    a.value = '0';
    LongInt b;
    b.value = '1';
    LongInt c;
    c.value = '0';
    std::ofstream file;
    std::remove("Fibonacci/fibonaccicpp.txt");
    file.open("Fibonacci/fibonaccicpp.txt");
    file << "1\n";
    unsigned long N = pow(10, 4)-1;
    unsigned long printDuty = 1000;
    for (unsigned long i = 0; i < N; i+=printDuty)
    {
        std::cout << "Calculating " << i << " (" << std::fixed << std::setprecision(3) << (i * 1.0 / N * 100) << "%)\n";
        for (unsigned long j = i; j < i+printDuty; j++)
        {
            c = NextFibonacci(a, b);
            for (unsigned long k = c.value.size()-1; k+1 >= 0+1; k--)
            {
                file << c.value[k] << "";
            }
            file << '\n';
            a = b;
            b = c;
        }
    }
    std::cout << "Calculating " << N << " (" << std::fixed << std::setprecision(3) << (N * 1.0 / N * 100) << "%)\n";
    file.close();
    std::cout << "The last calculated Fibonacci number is ";
    printLongInt(c);
    return 0;
}
