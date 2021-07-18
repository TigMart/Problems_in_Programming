// Problem_23.cpp : Determine the sum of elements that are even by index and the multiply of elements that are odd by value. 
//

#include <iostream>
#include <ctime>

template <size_t n>
void SumMul(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 14;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 50;
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    SumMul(arr);
    return 0;
}

template<size_t n>
void SumMul(int(&arr)[n])
{
    int sum = 0;
    long long mul = 1;
    for (size_t i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
        if ((arr[i] & 1) != 0)
        {
            mul *= arr[i];
        }
    }
    std::cout << "Sum of elements that are even by index: " << sum << std::endl;
    std::cout << "Multiply of elements that are odd by value: " << mul << std::endl;
}
