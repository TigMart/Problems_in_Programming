// Problem_20.cpp : Replace all multiples of three with zeros. Determine the count of replacements. 

#include <iostream>
#include <ctime>

template <size_t n>
void Count_rep(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 16;
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
    std::cout << std::endl << "Count of replacements: ";
    Count_rep(arr);
    return 0;
}

template<size_t n>
void Count_rep(int(&arr)[n])
{
    int count = 0;
    for (size_t i = 0; i < n; ++i)
    {
        if ((arr[i] % 3) == 0)
        {
            arr[i] = 0;
            ++count;
        }
    }
    std::cout << count;
}
