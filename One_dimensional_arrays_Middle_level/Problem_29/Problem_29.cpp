// Problem_29.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void foo(int(&arr)[n]);

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
    foo(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(int(&arr)[n])
{
    int average = 0;
    for (int i = 0; i < n; ++i)
    {
        average += arr[i];
    }
    average /= n;
    std::cout << "Average: " << average << std::endl;
    float count = 0.0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > average)
            ++count;
    }
    float Precentage = (count / n) * 100.0;
    std::cout << "Percentage of elements that exceed the arithmetic average of all elements in the array:" << Precentage << "%" << std::endl;
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
