// Problem_27.cpp : Determine the maximum number and replace all even-valued elements with it.

#include <iostream>
#include <ctime>

template <size_t n>
void Array(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 19;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90;
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "The maximum number and replace all even-valued elements with it: " << std::endl;
    Array(arr);
    return 0;
}

template<size_t n>
void Array(int(&arr)[n])
{
    int max_index = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[max_index] < arr[i])
            max_index = i;
       
    }
    std::cout << std::endl << "Maximum number: " << arr[max_index] << std::endl;
    for (int i = 0; i < n; ++i)
    {
        if ((arr[i] & 1) == 0) arr[i] = arr[max_index];
        std::cout << arr[i] << " ";
    }
}
