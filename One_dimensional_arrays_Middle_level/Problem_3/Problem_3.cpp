// Problem_3.cpp : Calculate the sum of the digits of this array.

#include <iostream>
#include <ctime>

template<int n>
int Sum(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 17;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Sum of the digits of this array:" << Sum(arr) << std::endl;
    return 0;
}

template<int n>
int Sum(int(&arr)[n])
{
    int sum = 0; 
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i]%10;
        sum += arr[i] / 10;
    }
    return sum;
}
