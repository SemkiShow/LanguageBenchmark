#include <iostream>

int main()
{
    int answer = 0;
    for (int i = 0; i < 100000000; i++)
    {
        answer++;
    }
    std::cout << answer << "\n";
    return 0;
}
