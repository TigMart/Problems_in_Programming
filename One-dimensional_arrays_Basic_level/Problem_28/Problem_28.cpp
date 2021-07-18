// Problem_28.cpp : Find the sum and number of elements whose absolute value is 
// greater than the arithmetic mean of positive elements.

#include <iostream>
#include <ctime>

template <size_t n>
void CountSum(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 17;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28+(-8);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    CountSum(arr);
    return 0;
}

template<size_t n>
void CountSum(int(&arr)[n])
{
    int count = 0;
    int sum = 0;
    int average = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0) average += arr[i];
    }
    average /= n;
    for (int i = 0; i < n; ++i)
    {
        if (abs(arr[i]) > average)
        {
             ++count;
             sum += arr[i];
        }
    }
    std::cout << std::endl << "Sum of elements whose absolute value is greater than the arithmetic mean of positive elements: " << sum << std::endl;
    std::cout << "Count of elements whose absolute value is greater than the arithmetic mean of positive elements: " << count << std::endl;
}
