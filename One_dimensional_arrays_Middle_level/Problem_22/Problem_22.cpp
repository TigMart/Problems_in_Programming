// Problem_22.cpp : Form a new one by placing all negative elements and zeros first, 
// after which - positive ones, keeping their order.

#include <iostream>
#include <ctime>

template<int n>
void foo(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 15 + (-9);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    foo(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(int(&arr)[n])
{
    int new_arr[n]{ 0 };
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 1)
        {
            new_arr[count++] = arr[i];
        }
    }  
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
        {
            new_arr[count++] = arr[i];
        }
    }
    std::cout << std::endl << "New array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << new_arr[i] << " ";
    }
}
