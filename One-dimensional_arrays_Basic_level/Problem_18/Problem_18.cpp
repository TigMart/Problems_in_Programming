// Problem_18.cpp : Range of elements

#include <iostream>
#include <ctime>

template <size_t n>
void Range_of_elem(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10 + (0.5f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    Range_of_elem(arr);
    return 0;
}

template<size_t n>
void Range_of_elem(float(&arr)[n])
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
    std::cout << "Range of elements: [" << arr[min_index] << ", " << arr[max_index] << "]" << std::endl;
}