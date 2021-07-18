// Problem_7.cpp : Determine the number of elements whose values are greater than the first element 

#include <iostream>
#include <ctime>

template <size_t n>
int Find(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    float arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 90+(0.5f);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "number of elements whose values are greater than the first element: " << Find(arr)<<std::endl;
    return 0;
}

template<size_t n>
int Find(float(&arr)[n])
{
    int count = 0;
    for (size_t i = 1; i < n; ++i)
    {
        if (arr[i] > arr[0])
            ++count;
    }
    return count;
}
