#include <iostream>
#include <vector>
#include <string>
#include <map>

struct LongInt
{
    std::string value;
};

LongInt add(LongInt a, LongInt b)
{
    unsigned long index = 0;
    unsigned long maxIndex = (a.value.size() > b.value.size()) ? a.value.size() : b.value.size();
    LongInt c;
    int buf = 0;
    bool carry = false;
    c.value.push_back(0);
    std::map<char, int> numbers;
    for (int i = 48; i < 48+10; i++)
    {
        numbers.insert({(char)i, i-48});
    }
    
    while (index < maxIndex)
    {
        if (index >= a.value.size()) a.value += '0';
        if (index >= b.value.size()) b.value += '0';
        if (index >= c.value.size()) c.value += '0';

        buf = 0;
        buf = numbers[a.value[index]] + numbers[b.value[index]];

        if (carry)
        {
            buf++;
            carry = false;
        }

        if (buf > 9)
        {
            carry = true;
            buf -= 10;
        }

        c.value[index] = (char)(buf+48);

        if (index >= maxIndex-1 && carry)
        {
            if (c.value.size() < index+2)
            {
                c.value += '1';
            }
            else
            {
                c.value[index+1]++;
            }
            carry = false;
        }
        
        // std::cout << a.value[index] << '+' << b.value[index] << '=' << c.value[index] << "\n";

        index++;
    }
    return c;
}

void printLongInt(LongInt input, bool insertDots = false)
{
    for (unsigned long i = input.value.size(); i+1 >= 0+1; i--)
    {
        std::cout << input.value[i] << "";
        if (i % 3 == 0 && i != 0 && i != input.value.size() && insertDots) std::cout << '.';
    }
    std::cout << "\n";
}

// int main()
// {
//     LongInt a;
//     a.value.push_back(1);
//     // a.value.push_back(0);
//     LongInt b;
//     b.value.push_back(99);
//     b.value.push_back(99);
//     LongInt c = add(a, b);
//     printLongInt(c);
//     return 0;
// }
