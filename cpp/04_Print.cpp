#include<iostream>

void PrintStar(int n)
{
    int i;
    int j;
    int a = 0;
    int x = (n * 2) - 1;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(j <= i)
            {
            std::cout << '$';
            }
            else if(j >= x-a)
            {
            std::cout << '$';
            a++;
            }
            else 
            {
                std::cout << ' ';
            }

        }

        std::cout << std::endl;
    }
}
int main()
{
    PrintStar(3);
    
}