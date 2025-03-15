#include<iostream>

int ArraySum(int[], int);

int main()
{
    int N = 100;
    int arr[N];
    for (int i = 0; i < N; i = i + 1)
    {
        arr[i] = 1;
    }

    std::cout << "Vandana's Final Answer is: " << ArraySum(arr, N) << std::endl;
}

int ArraySum(int arr[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}