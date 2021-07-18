// Problem_1.cpp : count of even numbers

#include <iostream>

template <size_t n>
int Count_of_even(int(&arr)[n]);

int main()
{
    const int size = 14;
    int arr[size]{0};
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90;
    }
    //cout
    for (int i = 0; i < 14; ++i)
    {
        std::cout << arr[i]<<" ";
    }
    std::cout << std::endl << "Count of even number is: " << Count_of_even(arr);
    return 0;
}

template <size_t n>
int Count_of_even(int(&arr)[n])
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
            ++count;
    }
    return count;
}
