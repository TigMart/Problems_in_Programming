// Problem_29.cpp : Determine the quotient of the division of the product of all 
// positive elements and the sum of the modules of all negative ones 

#include <iostream>
#include <ctime>

template <size_t n>
void quotient(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 18;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-8.2f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl << "Quotient of the division of the product of all "
        "positive elements and the sum of the modules of all negative ones"<< std::endl;
    quotient(arr);
    return 0;
}

template<size_t n>
void quotient(float(&arr)[n])
{
    int mul_positive = 1;
    int sum_negative = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0) mul_positive *= arr[i];
        if (arr[i] < 0) sum_negative += abs(arr[i]);
    }
    if (sum_negative != 0)
    {
        std::cout << std::endl << "Mul positive: " << mul_positive << std::endl;
        std::cout << "Sum negative: " << sum_negative << std::endl;
        std::cout << "Quotient of division: " << mul_positive / sum_negative << std::endl;
    }
}
