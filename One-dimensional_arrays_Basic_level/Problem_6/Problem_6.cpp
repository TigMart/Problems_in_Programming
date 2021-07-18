// Problem_6.cpp : Determine which elements are more even or odd in value

#include <iostream>
#include <ctime>

template <size_t n>
void EvenOdd(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 20;
    int arr[size];
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10;
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    EvenOdd(arr);
    return 0;
}

template<size_t n>
void EvenOdd(int(&arr)[n])
{
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((arr[i] & 1) == 0)
            ++count_even;
        else
            ++count_odd;
    }
    std::cout << std::endl;
    if (count_even > count_odd)
        std::cout << "count of evens are bigger than odds: " << count_even << std::endl;
    else
        std::cout << "count of odds are bigger than evens: " << count_odd << std::endl;
}