// Problem_20.cpp : Determine and display the indices of sequences of numbers that decrease monotonically 
// (each next number is less than the previous one). 

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
        arr[i] = rand() % 10;
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
    std::cout << "indices of sequences of numbers that decrease monotonically "
        "each next number is less than the previous one: " << std::endl;
    for (int i = 0; i < n-1; ++i)
    {
        if (arr[i + 1] < arr[i]) {
            while (arr[i + 1] < arr[i])
            {
                std::cout << i<<" ";
                ++i;
            }
            std::cout << i << " ";
            break;
        }
    }
}
