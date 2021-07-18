// Problem_2.cpp : Get a new array by replacing the value of the fifth element with the arithmetic average of the original array. 

#include <iostream>

template <size_t n>
void NewArray(int(&arr)[n]);


int main()
{
    const int size = 12;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90;
    }
    //cout
    std::cout << "Old Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
    NewArray(arr);
    return 0;
}

template <size_t n>
void NewArray(int(&arr)[n])
{
    int average = 0;
    for (int i = 0; i < n; ++i)
    {
        average += arr[i];
    }
    average /= n;
    std::cout << std::endl << "Average: " << average;
    int newarr[n]{ 0 };
    for (int i = 0; i < n; ++i)
    {
        newarr[i] = arr[i];
    }
    newarr[5] = average;
    //cout newarr
    std::cout << std::endl<<"New Array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << newarr[i]<<" ";
    }
}
