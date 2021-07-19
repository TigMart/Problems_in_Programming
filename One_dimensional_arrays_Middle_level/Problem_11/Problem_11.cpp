// Problem_11.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 9;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90 + 10;
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "New Array: ";
    NewArray(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void NewArray(int(&arr)[n])
{
   
    int new_arr[n]{ 0 };
    for (size_t i = 0; i < n; ++i)
    {
        int sum_digit = 0;
        sum_digit += arr[i] % 10;
        sum_digit += arr[i] / 10;
        new_arr[i] = sum_digit;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << new_arr[i] << " ";
    }
}
