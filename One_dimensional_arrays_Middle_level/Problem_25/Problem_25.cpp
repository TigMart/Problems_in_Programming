// Problem_25.cpp : 
 
#include <iostream>
#include <ctime>

template<size_t n>
void Sort(int(&arr)[n]);

template<size_t n>
void PrintArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 20+(-9);
    }  
    //cout
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    Sort(arr);
    std::cout << std::endl;
    return 0;
}

template<size_t n>
void Sort(int(&arr)[n])
{
    int key;
    int j;
    for (int i = 1; i < n; ++i)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    int first_positive = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= 0)
        {
            first_positive = i;
            break;
        }
    }
    for (int i = first_positive; i < n-1 ; ++i)
    {
        for (int j = n - 1; j >= i + 1; --j)
        {
            if (arr[j] > arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
    std::cout << "Sorted array: ";
    PrintArray(arr);
}

template<size_t n>
void PrintArray(int(&arr)[n])
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


