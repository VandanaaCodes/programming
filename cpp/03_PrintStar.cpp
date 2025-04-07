#include<iostream>

void print1DStar(int n)
{
    for(int i = 1; i <= n; i++)
    {
        std::cout << '*';
    }
}

void Print2DStar(int n)
{
    for(int i = n; i >= 1; i--)
    {
        print1DStar(i);
        std::cout << std::endl;
    }
}



int main()
{
    Print2DStar(5);
}