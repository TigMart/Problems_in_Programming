// Problem_25.cpp : 

#include <iostream>
#include <ctime>

template <size_t n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 20 + (-8);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "New array: " << std::endl;
    NewArray(arr);
    return 0;
}

template<size_t n>
void NewArray(int(&arr)[n])
{
    int newarr[n];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)sum += arr[i];
    }
    std::cout << "Sum of positive numbers: " << sum << std::endl;
    for (int i = 0; i < n; ++i)
    {
        newarr[i] = arr[i] - sum;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << newarr[i] << " ";
    }
}
