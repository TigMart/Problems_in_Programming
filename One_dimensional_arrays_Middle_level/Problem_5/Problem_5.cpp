// Problem_5.cpp :

#include <iostream>
#include <ctime>

void NewArray(int * arr_1, int * arr_2, int n);
int* InsertionSort(int* arr, int n);

int main()
{
    srand((int)time(0));
    const int size = 6;
    int* arr_1 = new int[size]{0};
    int* arr_2 = new int[size]{0};
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr_1[i] = rand() % 90;
    }
    for (int i = 0; i < size; ++i)
    {
        arr_2[i] = rand() % 90;
    } 
    //Sort
    int* sorted_arr_1 = InsertionSort(arr_1,size);
    int* sorted_arr_2 = InsertionSort(arr_2,size);    
    //cout
    std::cout << "Array 1: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << sorted_arr_1[i] << " ";
    }
    std::cout << std::endl << "Array 2: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << sorted_arr_2[i] << " ";
    }
    std::cout << std::endl << "New Array: ";
    NewArray(arr_1, arr_2, size);
    std::cout << std::endl;
    delete[] arr_1;
    delete[] arr_2;
    sorted_arr_1 = nullptr;
    sorted_arr_2 = nullptr;
    return 0;
}

void NewArray(int* arr_1, int* arr_2, int n)
{
    int* new_arr = new int[n] {0};
    int count = 0;
    for (int index_arr_1 = 0, index_arr_2 = 0; index_arr_1 < n;)
    {
        if (arr_1[index_arr_1] == arr_2[index_arr_2]) {
            new_arr[count] = arr_1[index_arr_1];
            ++index_arr_1;
            ++index_arr_2;
            ++count;
        }
        else if (arr_1[index_arr_1] < arr_2[index_arr_2]) {
            ++index_arr_1;
        }
        else {
            ++index_arr_2;
        }
    }
    for (int i = 0; i < count; ++i)
    {
        std::cout << new_arr[i] << " ";
    }
    delete[] new_arr;
}

int* InsertionSort(int *arr, int n)
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