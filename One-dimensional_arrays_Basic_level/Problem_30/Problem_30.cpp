// Problem_30.cpp : Determine the sum of the minimum element and its index:

#include <iostream>
#include <ctime>

template <size_t n>
void Sum(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-8.2f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl << "Determine the sum of the minimum element and its index: " << std::endl;
    Sum(arr);
    return 0;
}

template<size_t n>
void Sum(float(&arr)[n])
{
    int min_index = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[min_index] > arr[i])
            min_index = i;
    }
    std::cout << std::endl << "Minimum element: " << arr[min_index] << std::endl;
    std::cout << "Index of minimum element: " << min_index << std::endl;
    std::cout << "Sum of the minimum element and its index:" << arr[min_index] + min_index << std::endl;
}
