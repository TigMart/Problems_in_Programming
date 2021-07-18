// Problem_8.cpp :  Determine (location) of the maximum and minimum element 

#include <iostream>
#include <ctime>

template <size_t n>
void MinMax_index(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90+(0.5f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "(location) of the maximum and minimum element: " << std::endl;
    MinMax_index(arr);
    return 0;
}

template<size_t n>
void MinMax_index(float(&arr)[n])
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
    std::cout << "The largest element index: " << max_index << std::endl;
    std::cout << "The smallest element index: " << min_index << std::endl;
}
