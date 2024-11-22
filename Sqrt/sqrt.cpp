#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
    unsigned long N = pow(10, 6);
    double output = 0;
    srand((unsigned long)time(0));
    for (unsigned long i = 0; i < N; i++)
    {
        output = sqrt(rand() % N);
        std::cout << output << std::endl;
    }
    return 0;
}
