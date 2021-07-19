// Problem_10.cpp :


#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


void NewArray(int* arr_1, int* arr_2, int n);
int* InsertionSortAscending(int* arr, int n);
int* InsertionSortDescending(int* arr, int n);

int main()
{
    const int size = 17;
    int* arr_1 = new int[size]{ 0 };
    int* arr_2 = new int[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Please enter element: " << i << " ";
        std::cin >> arr_1[i];
    }
    for (int i = 0; i < size; ++i)
    {
        if (cos(arr_1[i]) > 0) arr_2[i] = pow(arr_1[i], 3) - 7.5;
        if (cos(arr_1[i] <= 0)) arr_2[i] = pow(arr_1[i], 2) - 5 * pow(M_E, sin(arr_1[i]));
    }
    //Sorting
    int* sorted_arr_Y = InsertionSortAscending(arr_2, size);
    int* sorted_arr_X = InsertionSortDescending(arr_1, size);
    //cout
    std::cout << std::endl << "Array 1: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << sorted_arr_X[i] << " ";
    }
    std::cout << std::endl << "Array 2: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << sorted_arr_Y[i] << " ";
    }
    std::cout << std::endl << "New sorted Array: ";
    NewArray(arr_1, arr_2, size);
    std::cout << std::endl;
    return 0;
}

int* InsertionSortAscending(int* arr, int n)
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
    return arr;
}

int* InsertionSortDescending(int* arr, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        int key = arr[i];
        while ((arr[j] < key) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    return arr;
}

void NewArray(int* arr_1, int* arr_2, int n)
{
    int* new_arr_R = new int[n] { 0 };
    for (int i = 0, j = 0; j < n/2; ++i)
    {
        if (i % 2 == 0)
        {
            new_arr_R[j] = arr_1[i];
            ++j;
        }
        
    }    
    for (int i = 0, j = n/2; j < n; ++i)
    {
        if (i % 2 == 0)
        {
            new_arr_R[j] = arr_2[i];
            ++j;
        }
        
    } 
    //cout
    for (int i = 0; i < n; ++i)
    {
        std::cout<<new_arr_R[i]<<" ";
    }
}

