// Problem_5.cpp : Swap the maximum and minimum elements of an array. 

#include <iostream>
#include <ctime>

template <size_t n>
void Swap_max_min(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
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
    Swap_max_min(arr);
    std::cout << std::endl << "Swap the maximum and first elements: " << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

template<size_t n>
void Swap_max_min(int(&arr)[n])
{
    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[max_index] < arr[i])
            max_index = i;
        else if (arr[min_index] > arr[i])
            min_index = i;
    }
    std::cout << "Max Value: " << arr[max_index] << std::endl;
    std::cout << "Min Value: " << arr[min_index] << std::endl;
    std::swap(arr[max_index], arr[min_index]);
}

