// Problem_23.cpp :

#include <iostream>
#include <ctime>
#include <cmath>

template<int n>
void foo(int(&arr_1)[n], int(&arr_2)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr_1[size]{ 0 };
    int arr_2[size]{ 0 };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr_1[i] = rand() % 10+(1);
    } 
    for (int i = 0; i < size; ++i)
    {
        arr_2[i] = pow(arr_1[i],2)+0.3;
    }
    //cout
    std::cout << std::endl << "Array 1: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_1[i] << " ";
    } 
    std::cout << std::endl << "Array 2: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_2[i] << " ";
    }
    std::cout << std::endl;
    foo(arr_1, arr_2);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(int(&arr_1)[n], int(&arr_2)[n])
{
    int P = 0;
    int mul_even = 1;
    int mul_odd = 1;
    for (int i = 0; i < n; ++i)
    {
        if ((i % 2 ) == 0)
        {
            mul_even *= (arr_1[i] * arr_2[i]);
        }
        else
        {
            mul_odd  *= (arr_1[i] * arr_2[i]);
        }
    }
    std::cout << "mul_odd: " << mul_odd << '\n';
    std::cout << "mul_even: " << mul_even << '\n';
    P = mul_odd % mul_even;
    std::cout << "P: " << P << std::endl;
}
