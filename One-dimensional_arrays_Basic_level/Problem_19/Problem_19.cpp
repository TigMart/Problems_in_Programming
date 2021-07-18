// Problem_19.cpp : Find the sum of the items before the first negative item. If there are no negative elements, then issue an appropriate message. 

#include <iostream>
#include <ctime>

template <size_t n>
void Sum(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 19;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-3);
    }
    //cout
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    Sum(arr);
    return 0;
}

template<size_t n>
void Sum(int(&arr)[n])
{
    int sum = 0;
    size_t i = 0;
    for (i = 0; i < n; ++i)
    {
       
        if (arr[i] < 0)
        {   
            std::cout << sum;
            break;
        }
        sum += arr[i];
    } 
    if (i == n) std::cout << "No negative number! ";
}
