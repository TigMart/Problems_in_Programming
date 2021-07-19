// Problem_9.cpp :

#include <iostream>
#include <cmath>

template<int n>
void NewArray(int(&arr_1)[n], int(&arr_2)[n]);

template<int n>
void InsertionSort(int(&arr)[n]);

int main()
{
    const int size = 15;
    int arr_1[size]{ 0 };
    int arr_2[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Please enter element: "<<i<<" ";
        std::cin >> arr_1[i];
    }
    for (int i = 0; i < size; ++i)
    {
        arr_2[i] = (cos(pow(arr_1[i], 2))) + (2.97 * (pow(log(pow(i, 2)), 2)));
    }
    //cout
    std::cout << std::endl << "Array 1: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_1[i] << " ";
    }   
    std::cout << std::endl << "Array 2: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_2[i] << " ";
    }
    std::cout << std::endl << "New sorted Array: " ;
    NewArray(arr_1, arr_2);
    std::cout << std::endl;
    return 0;
}

template<int n>
void InsertionSort(int(&arr)[n])
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        int key = arr[i];
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

template<int n>
void NewArray(int(&arr_1)[n], int(&arr_2)[n])
{
    const int new_size = n + n;
    int new_arr[new_size]{ 0 };
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        new_arr[i] = arr_1[i];
    }
    for (; i < new_size; ++i)
    {
        new_arr[i] = arr_2[i - n];
    }
    InsertionSort(new_arr);
}
