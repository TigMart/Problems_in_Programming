// Problem_13.cpp :

#include <iostream>
#include <ctime>

template<int n>
void NewArray(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 11;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Please enter element: " << i << " ";
        std::cin>>arr[i];
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
void NewArray(int(&arr)[n])
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0 && arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
        if (arr[i] % 3 == 0)
        {
            arr[i] = sum;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
}