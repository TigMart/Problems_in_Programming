// Problem_22.cpp : Arrange the elements in reverse order. 

#include <iostream>
#include <ctime>

template <size_t n>
void Reverse(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 15;
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
    std::cout << std::endl << "Arrange the elements in reverse order: " << std::endl;
    Reverse(arr);
    return 0;
}

template<size_t n>
void Reverse(int(&arr)[n])
{
    for (int i = n-1; i >= 0; --i)
    {
        std::cout << arr[i]<< " ";
    }
}