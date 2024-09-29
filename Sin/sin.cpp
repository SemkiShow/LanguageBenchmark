#include <iostream>
#include <cmath>

int main()
{
    double answer = 0;
    for (int i = 0; i < 100000; i++)
    {
        answer = sin(i);
        std::cout << answer << "\n";
    }
    return 0;
}
