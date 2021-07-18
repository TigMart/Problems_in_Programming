// Problem_12.cpp : Arrange items in descending order. Sum of the maximum and minimum elements of the array. 

#include <iostream>
#include <ctime>

float* InsertionSort(float* arr, int n);
void Sum_max_min(float* arr, int n);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float* arr = new float[size] { 0 };;
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90;
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; 
    float* sorted_arr = InsertionSort(arr, size);
    std::cout << std::endl << "Sorted array by Insertion sort: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << sorted_arr[i] << " ";
    }
    std::cout << std::endl;
    Sum_max_min(sorted_arr, size);
    delete[] arr;
    return 0;
}     

float* InsertionSort(float* arr, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        float key = arr[i];
        while ((arr[j] < key) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    return arr;
}

void Sum_max_min(float* arr, int n)
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
    int sum = arr[min_index] + arr[max_index];
    std::cout << std::endl << "Sum of the maximum and minimum elements of the array: " << sum << std::endl;
}
