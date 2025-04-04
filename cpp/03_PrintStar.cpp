#include<iostream>

void PrintStar(int n)
{
    int i;
    int j;
    for(i = n; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main()
{
    PrintStar(5);
}