// Problem_13.cpp : Determine the sum and difference of the maximum and minimum elements. 

#include <iostream>
#include <ctime>

template <size_t n>
void MinMax(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90;
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    MinMax(arr);
    return 0;
}

template<size_t n>
void MinMax(int(&arr)[n])
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
    std::cout << "The largest element index: " << arr[max_index] << std::endl;
    std::cout << "The smallest element index: " << arr[min_index] << std::endl;
    std::cout << "Max + Min = " << arr[max_index] + arr[min_index] << std::endl;
    std::cout << "Max - Min = " << arr[max_index] - arr[min_index] << std::endl;
}
