// Problem_24.cpp : determine the count and sum of numbers whose values are less than the value of the last element. 

#include <iostream>
#include <ctime>

template <size_t n>
void CountSum(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 50 + (0.5f);
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
void CountSum(float(&arr)[n])
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < arr[n - 1])
        {
            ++count;
            sum += arr[i];
        }
    }
    std::cout << "Count of elments whose values are less than the value of the last element : " << count << std::endl;
    std::cout << "Sum of elements whose values are less than the value of the last element: " << sum << std::endl;
}