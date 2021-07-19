// Problem_12.cpp : 

#include <iostream>
#include <ctime>

template<size_t n>
int BubbleSort(float(&arr)[n]);

template<size_t n>
void PrintArray(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90 + (0.5f);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Count of swap: " << BubbleSort(arr) << std::endl;
    PrintArray(arr);
    std::cout << std::endl;
    return 0;
}  

template<size_t n>
int BubbleSort(float(&arr)[n])
{
    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = n-1; j >= i + 1; --j)
        {
            if (arr[j] > arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]);
                ++count;
            }
        }
    }
    return count;
}

template<size_t n>
void PrintArray(float(&arr)[n])
{
    for (int i = 0; i < n; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}