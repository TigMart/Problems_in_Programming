// Problem_30.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void foo(float(&arr_1)[n], float(&arr_2)[n]);

template<size_t n>
void PrintArray(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    float arr_1[size]{ 0.0f };
    float arr_2[size]{ 0.0f };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr_1[i] = rand() % 10 + (0.5);
        arr_2[i] = rand() % 10 + (0.5);
    }
    //cout
    std::cout << std::endl << "Array 1: ";
    PrintArray(arr_1);  
    std::cout << std::endl << "Array 2: ";
    PrintArray(arr_2);
    std::cout << std::endl;
    foo(arr_1, arr_2);
    std::cout << "After changing: " << std::endl;
    std::cout << std::endl << "Array 1: ";
    PrintArray(arr_1);
    std::cout << std::endl << "Array 2: ";
    PrintArray(arr_2);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(float(&arr_1)[n], float(&arr_2)[n])
{
    int max_index_1 = 0;
    int max_index_2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr_1[max_index_1] < arr_1[i])
        {
            max_index_1 = i;
        }
        if (arr_2[max_index_2] < arr_2[i])
        {
            max_index_2 = i;
        }
    }
    std::swap(arr_1[max_index_1], arr_2[max_index_2]);
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
