#include <iostream>
#include <iomanip>
#include <cmath>

int Collatz(unsigned long long N)
{
    while (N != 1)
    {
        if (N % 2 == 0)
        {
            N /= 2;
        }
        else
        {
            N *= 3;
            N += 1;
        }
    }
    return 0;
}

int main()
{
    unsigned long long N = pow(2, 32);
    unsigned long long printDuty = pow(10, 6);
    for (unsigned long long i = 0; i < N; i+=printDuty)
    {
        std::cout << "Calculating " << i << " (" << std::fixed << std::setprecision(3) << (i * 1.0 / N * 100) << "%)\n";
        for (unsigned long long j = i; j < i+printDuty; j++)
        {
            Collatz(j);
        }
    }
    return 0;
}
