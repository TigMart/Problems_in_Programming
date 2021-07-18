// Problem_4.cpp: Swap the maximum and first elements 

#include <iostream>
#include <ctime>

template <size_t n>
void Swap(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
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
    Swap(arr);
    std::cout << std::endl << "Swap the maximum and first elements: " << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

template<size_t n>
void Swap(int(&arr)[n])
{
    int max_index = 0;
    int i = 1;
    for (; i < n; ++i)
    {
        if (arr[max_index] < arr[i])
        {
            max_index = i;
        }
    }
    std::cout << std::endl << "Maximum Value: " << arr[max_index];
    std::swap(arr[0], arr[max_index]);
}