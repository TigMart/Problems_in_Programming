// Problem_14.cpp : Replace elements that are multiples of three with the sum of elements that are odd in value. 

#include <iostream>
#include <ctime>

template <size_t n>
void Replace(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 17;
    int arr[size]{ 0 };
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
    std::cout << std::endl << "Replace elements that are multiples of three with the" 
    "sum of elements that are odd in value: " << std::endl;
    Replace(arr);
    return 0;
}

template<size_t n>
void Replace(int(&arr)[n])
{
    int sum_odd = 0;
    for (size_t i = 0; i < n; ++i)
    {
        if ((arr[i] & 1) == 1)
            sum_odd += arr[i];
    }
    for (size_t i = 0; i < n; ++i)
    {
        if (arr[i] % 3 == 0)
        {
            arr[i] = sum_odd;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
}
