// Problem_2.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 8;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    NewArray(arr);
    return 0;
}

template<int n>
void NewArray(int(&arr)[n])
{
    int newarr[n]{ 0 };
    for (int i = 0; i < n; ++i)
    {
        newarr[i] = arr[i] % 10;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << newarr[i] << " ";
    }
}
