// Problem_14.cpp :

#include <iostream>
#include <ctime>

template<int n>
void NewArray(float(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 14;
    float arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28  +(0.5);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "New Array: ";
    NewArray(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void NewArray(float(&arr)[n])
{
    int count = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        std::swap(arr[i], arr[i+n/2]);
        ++count;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Number of permutations made in this case: " << count;
}
