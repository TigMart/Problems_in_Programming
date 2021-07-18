// Problem_16.cpp : Determine the count of numbers between the maximum and minimum elements. 

#include <iostream>
#include <ctime>

template <size_t n>
int Count(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 20+(0.5f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Count of numbers between the maximum and minimum elements. " << Count(arr) << std::endl;
    return 0;
}

template<size_t n>
int Count(float(&arr)[n])
{
    int max_index = 0;
    int min_index = 0;
    for (size_t i = 1; i < n; ++i)
    {
        if (arr[max_index] < arr[i])
            max_index = i;
        if (arr[min_index] > arr[i])
            min_index = i;
    }
    std::cout << std::endl << "The largest element index: " << arr[max_index] << std::endl;
    std::cout << "The smallest element index: " << arr[min_index] << std::endl;
    return abs(max_index - min_index)-1;
}