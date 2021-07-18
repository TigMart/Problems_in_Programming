// Problem_10.cpp : Find the sum of elements, the absolute value of which is greater than the 
// arithmetic mean of the absolute value of negative elements. 

#include <iostream>
#include <ctime>

template <int n>
int sum_array(int(&arr)[n]);  

int main()
{
    srand((int)time(0));
    const int size = 17;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 38 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Find the sum of elements, the absolute value of "
    "which is greater than the arithmetic mean of " 
    "the absolute value of negative elements: " << sum_array(arr) <<std::endl; 
    return 0;
}

template<int n>
int sum_array(int(&arr)[n])
{
    int negative_average = 0;
    int count_negative = 0;
    int sum = 0;
    for (size_t i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            ++count_negative;
            negative_average += arr[i];
        }
    }
    negative_average /= count_negative;
    for (size_t i = 0; i < n; ++i)
    {
        if (abs(arr[i]) > abs(negative_average))
            sum += arr[i];
    }
    return sum;     
}    

