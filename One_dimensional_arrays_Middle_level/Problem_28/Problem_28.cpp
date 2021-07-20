// Problem_28.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void foo(int(&arr)[n]);

template<size_t n>
void PrintArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10+1;
    }
    //cout
    std::cout << std::endl << "Array: ";
    PrintArray(arr);
    std::cout << std::endl;
    foo(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(int(&arr)[n])
{
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
    }
    std::cout << "Remainder of dividing the sum of elements with even indices by the sum of elements with odd indices: " << sum_even % sum_odd;
}

template<size_t n>
void PrintArray(int(&arr)[n])
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
