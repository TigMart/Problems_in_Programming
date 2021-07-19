// Problem_16.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 30 + (-8);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    NewArray(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void NewArray(int(&arr)[n])
{
    int sum = 0;
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            k = i;
            break;
        }
    }
    for (int i = 0; i < k; ++i)
    {
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Count: " << k << std::endl;
}
