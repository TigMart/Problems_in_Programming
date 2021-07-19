// Problem_17.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void foo(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 30;
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
    int count = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
            ++count;
    }
    std::cout << "Count: " << count << std::endl;
}
