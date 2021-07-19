// Problem_15.cpp :

#include <iostream>
#include <ctime>

template<int n>
void NewArray(double(&arr)[n], int num);

int main()
{
    srand((int)time(0));
    const int size = 6;
    double arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 9 + (0.5);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "New Array: ";
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    NewArray(arr, num);
    std::cout << std::endl;
    return 0;
}

template<int n>
void NewArray(double(&arr)[n], int num)
{
    double new_arr[n]{ 0 };
    for (int i = 0; i < n; ++i)
    {
        new_arr[i] = arr[i] - num;
    }
    int max_index = 0;
    for (int i = 0; i < n; ++i)
    {
        if (new_arr[max_index] < new_arr[i])
            max_index = i;
    }
    std::cout << "Value: " << arr[max_index] << std::endl;
    std::cout << "Index: " << max_index << std::endl;
}
