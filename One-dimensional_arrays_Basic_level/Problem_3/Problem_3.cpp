// Problem_3.cpp : Find the number of elements whose absolute value is greater than the arithmetic average. 

#include <iostream>
#include <ctime>

template <int n>
int Find(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 11;
    int arr[size];
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 18 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl << "The number of elements whose absolute value is greater than the arithmetic average: " << Find(arr);
    return 0;
}

template<int n>
int Find(int(&arr)[n])
{
    int average = 0;
    for (int i = 0; i < n; ++i)
    {
        average += arr[i];
    }
    average /= n;
    std::cout << std::endl << "Average: " << average;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (abs(arr[i]) > average)
            ++count;
    }
    return count;
}
