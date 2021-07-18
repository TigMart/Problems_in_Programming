// Problem_17.cpp :   Determine the count of negative, multiply of positive and the number of zero elements. 

#include <iostream>
#include <ctime>

template <size_t n>
void Counts(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Count of negative, multiply of positive and the number of zero elements: " << std::endl;
    Counts(arr);
    return 0;
}

template<size_t n>
void Counts(int(&arr)[n])
{
    int count_neg = 0;
    long long mul = 1;
    int count_zero = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < 0) ++count_neg;
        if (arr[i] == 0) ++count_zero;
        else mul += arr[i];
    }
    std::cout << std::endl << "Count of Negative: " << count_neg << std::endl;
    std::cout << "Count of zero: " << count_zero << std::endl;
    std::cout << "Multiply of positive: " << mul << std::endl;
}
