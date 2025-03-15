#include<iostream>
int main()
{
    int n = 3510;
    int digitSum = 0;

    while (n != 0)
    {
        int currentDigit = n % 10;
        digitSum = digitSum + currentDigit;
        n = n / 10;
    }

    std::cout << "digitSum " << digitSum;
}