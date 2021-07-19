// Problem_4.cpp : 

#include <iostream>
#include <ctime>

template<int n, int m>
void Merge(float(&arr_1)[n], float(&arr_2)[m]);

int main()
{
    srand((int)time(0));
    const int size_1 = 9;
    const int size_2 = 7;
    float arr_1[size_1]{ 0.0f };
    float arr_2[size_2]{ 0.0f };
    //cin
    for (int i = 0; i < size_1; ++i)
    {
        arr_1[i] = rand() % 90 + (0.5);
    }  
    for (int i = 0; i < size_2; ++i)
    {
        arr_2[i] = rand() % 90 + (0.5);
    }
    //cout
    std::cout << "Array 1: ";
    for (int i = 0; i < size_1; ++i)
    {
        std::cout << arr_1[i] << " ";
    }  
    std::cout << std::endl << "Array 2: ";
    for (int i = 0; i < size_2; ++i)
    {
        std::cout << arr_2[i] << " ";
    }
    std::cout << std::endl;
    Merge(arr_1, arr_2);
    return 0;
}

template<int n>
void InsertionSort(float(&arr)[n])
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        float key = arr[i];
        while ((arr[j] > key) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

template<int n,int m>
void Merge(float(&arr_1)[n], float(&arr_2)[m])
{
    const int new_size = n + m;
    float new_arr[new_size]{ 0.0f };
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        new_arr[i] = arr_1[i];
    }
    for (; i < new_size; ++i)
    {
        new_arr[i] = arr_2[i-n];
    }
    InsertionSort(new_arr);
}
