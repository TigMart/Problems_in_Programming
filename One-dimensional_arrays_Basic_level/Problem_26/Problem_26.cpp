// Problem_26.cpp : the difference between the product of all positive elements and the product of the absolute values of all negative ones. 
//

#include <iostream>
#include <ctime>

template <size_t n>
void Array(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10 + (-4.2f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "difference between the product of all positive elements and the product of the absolute values of all negative ones: " << std::endl;
    Array(arr);
    return 0;
}

template<size_t n>
void Array(float(&arr)[n])
{
    long long mul_positive = 1;
    long long mul_negative = 1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0) mul_positive *= arr[i];
        if (arr[i] < 0) mul_negative *= (arr[i]);
    }
    std::cout << std::endl << "Product of all positive elements: " << mul_positive << std::endl;;
    std::cout << "Product of the absolute values of all negative elements: " << abs(mul_negative) << std::endl;
    std::cout << "Difference between: " << mul_positive - abs(mul_negative) << std::endl;
}
