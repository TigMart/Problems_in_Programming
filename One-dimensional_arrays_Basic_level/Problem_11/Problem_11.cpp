// Problem_11.cpp :  Calculate the count and sum of even positive elements by value. 

#include <iostream>
#include <ctime>

template <int n>
void even_positive(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 14;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 38 + (-9);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    even_positive(arr);
    return 0;
}

template<int n>
void even_positive(int(&arr)[n])
{
    int even_count = 0;
    int even_sum = 0;
    for (size_t i = 0; i < n; ++i)
    {
        if (arr[i] >= 0 && (arr[i] & 1) == 0)
        {
            ++even_count;
            even_sum += arr[i];
        }
    }
    std::cout << "Count of positive even numbers : " << even_count << std::endl;
    std::cout << "Sum of positive even numbers: " << even_sum << std::endl;
}
