// Problem_21.cpp : For a given array M(12) of real numbers, increase the minimum element 
//three times and swap with the last one. 

#include <iostream>
#include <ctime>

template <size_t n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 16;
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
    std::cout << std::endl << "Increase the minimum element three times and swap with the last one: " << std::endl;
    NewArray(arr);
    return 0;
}

template<size_t n>
void NewArray(int(&arr)[n])
{
    int min_index = 0;
    for (size_t i = 1; i < n; ++i)
    {
        if (arr[min_index] > arr[i])
            min_index = i;
    }
    std::cout << "The smallest element: " << arr[min_index] << std::endl;
    arr[min_index] *= 3;
    std::swap(arr[min_index], arr[n - 1]);
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
}
