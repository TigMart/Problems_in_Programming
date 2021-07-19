// Problem_7.cpp : 

#include <iostream>
#include <ctime>

template<size_t n>
int foo(double(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 16;
    double arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90+ (0.5);
    }
    //cout
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Difference between: " << foo(arr) << std::endl;
    return 0;
}

template<size_t n>
int foo(double(&arr)[n])
{
    int sum_even_index = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)sum_even_index += arr[i];
        if (i % 3 == 0)  sum += arr[i];
    }
    std::cout << std::endl << "Sum of elements with even indices: " << sum_even_index << std::endl;
    std::cout << "Sum of elements whose indices are multiples of three: " << sum << std::endl;
    return sum_even_index - sum;
}
