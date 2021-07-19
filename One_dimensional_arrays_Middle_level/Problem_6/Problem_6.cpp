// Problem_6.cpp :

#include <iostream>
#include <ctime>
#include <cmath>

template<int n>
void NewArray(double(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 12;
    double arr[size]{ 0.0f };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = pow(i,2)-(2.0*i)+(19.3*cos(i));
    }
    //cout
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    NewArray(arr);
    return 0;
}

template<int n>
void NewArray(double(&arr)[n])
{
    double average = 0;
    for (int i = 0; i < n; ++i)
    {
        average += arr[i];
    }
    average /= n;
    std::cout << "Average: "<< average << std::endl;
    double new_arr[n];
    int k = 0;
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        if (arr[i] < average)
        {
            new_arr[k] = arr[i];
            ++k;
        }
    }
    for (i=0; i < n; ++i)
    {
        if (arr[i] > average) {
            new_arr[k] = arr[i];
            ++k;
        }
    }
    std::cout << "New array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << new_arr[i] << " ";
    }
    std::cout << std::endl;
}
