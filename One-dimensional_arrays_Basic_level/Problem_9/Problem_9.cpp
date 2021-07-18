// Problem_9.cpp : Get a new array as the difference between the elements of the original array and its arithmetic mean.

#include <iostream>
#include <ctime>

template <size_t n>
void new_array(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
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
    std::cout << std::endl << "new array as the difference between the elements of the original array and its arithmetic mean. " << std::endl;
    new_array(arr);
    return 0;
}

template<size_t n>
void new_array(int(&arr)[n])
{
    int average = 0;
    for (size_t i = 0; i < n; ++i)
    {
        average += arr[i];
    }
    average /= n; 
    std::cout << std::endl << "Average: " << average << std::endl;
    int newarr[n]{ 0 };
    for (size_t i = 0; i < n; i++)
    {
        newarr[i] = arr[i] - average;
        std::cout << newarr[i]<<" ";
    }
}
