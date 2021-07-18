// Problem_15.cpp : Arrange items 1 through 7 in ascending order and items 8 through 14 in descending order. 

#include <iostream>
#include <ctime>

template <size_t n>
void BubbleSort(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 14;
    float arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 20+(0.2f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Arrange items 1 through 7 in ascending order and items 8 "
        "through 14 in descending order.  " << std::endl;
    BubbleSort(arr);
    return 0;
}

template<size_t n>
void BubbleSort(float(&arr)[n])
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n/2; ++i)
    {
        for (j = 0; j < (n - i)/2; ++j)
        {
            if (arr[j] > arr[j + 1])
            {   
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (i = n/2; i < n ; ++i)
    {
        for (j = n/2; j < n; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    //cout
    std::cout << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
}
