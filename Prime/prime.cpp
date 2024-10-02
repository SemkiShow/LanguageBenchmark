#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>

bool* SieveOfEratosthenes(unsigned long n)
{
    bool* A = new bool[n+1];
    // std::fill(std::begin(A), std::end(A), true);
    for (unsigned long i = 0; i < n; i++)
    {
        A[i] = true;
    }
    
    for (unsigned long i = 2; i < sqrt(n); i++)
    {
        if (A[i] == true)
        {
            unsigned long j = pow(i, 2);
            while (j <= n)
            {
                A[j] = false;
                j+=i;
            }
        }
    }
    return A;
}

int main()
{
    unsigned long N = pow(10, 6);
    bool* A = SieveOfEratosthenes(N);
    A[0] = false;
    A[1] = false;    
    std::ofstream outputFile;
    outputFile.open("Prime/primecpp.txt");
    for (unsigned long i = 0; i < N; i++)
    {
        if (A[i] == true) outputFile << i << "\n";
    }
    outputFile.close();
    return 0;
}
