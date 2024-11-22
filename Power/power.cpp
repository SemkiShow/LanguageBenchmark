#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
    unsigned long N = pow(10, 6);
    unsigned long output = 0;
    srand((unsigned long)time(0));
    for (unsigned long i = 0; i < N; i++)
    {
        output = pow(rand() % 100, rand() % 10);
        std::cout << output << std::endl;
    }
    return 0;
}
