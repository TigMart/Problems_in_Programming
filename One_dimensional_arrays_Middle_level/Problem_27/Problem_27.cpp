// Problem_27.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void Monoton(int(&arr)[n]);

template<size_t n>
void PrintArray(int(&arr)[n]);

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
    PrintArray(arr);
    std::cout << std::endl;
    Monoton(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void Monoton(int(&arr)[n])
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i + 1] > arr[i]) { 
            ++count;
            while (arr[i + 1] > arr[i])
            {
                ++i;
            } 
        }
    }
    std::cout<<"Determine the number of sections of the array on which the elements monotonically increase: " << count;
}

template<size_t n>
void PrintArray(int(&arr)[n])
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}