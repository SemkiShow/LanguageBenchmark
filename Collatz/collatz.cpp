#include <iostream>
#include <iomanip>
#include <cmath>

unsigned long long Collatz(unsigned long long N)
{
    while (N != 1 && N != 0)
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
    return N;
}

int main()
{
    unsigned long long N = pow(10, 6);
    unsigned long long printDuty = pow(10, 3);
    for (unsigned long long i = 0; i < N; i+=printDuty)
    {
        std::cout << "Calculating " << i << " (" << std::fixed << std::setprecision(3) << (i * 1.0 / N * 100) << "%)\n";
        for (unsigned long long j = i; j < i+printDuty; j++)
        {
            if (Collatz(j) != 1) std::cout << "Number " << j << " doesn't converge to 1!" << std::endl;
        }
    }
    return 0;
}
