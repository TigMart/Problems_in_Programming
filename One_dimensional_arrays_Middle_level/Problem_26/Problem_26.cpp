// Problem_26.cpp : 

#include <iostream>
#include <ctime>

template<size_t n>
void foo(float(&arr_1)[n], float(&arr_2)[n]);

template<size_t n>
void PrintArray(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr_1[size]{ 0 };
    float arr_2[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr_1[i] = rand() % 10 + (0.5f);
        arr_2[i] = rand() % 10 + (0.5f);
    }
    //cout
    std::cout << "Array 1: ";
    PrintArray(arr_1);
    std::cout << std::endl << "Array 2: ";
    PrintArray(arr_2);
    std::cout << std::endl;
    foo(arr_1, arr_2);
    std::cout << std::endl << "After changing Array 1: ";
    PrintArray(arr_1);
    std::cout << std::endl;
    return 0;
}

template<size_t n>
void foo(float(&arr_1)[n], float(&arr_2)[n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr_1[i] == arr_2[j]) 
            {
                arr_1[i] = 0;
            }
        }
    }
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
