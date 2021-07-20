// Problem_19.cpp : 

#include <iostream>
#include <ctime>

template<int n>
void foo(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 13;
    int arr[size]{ 0 };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-9);
    }
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    foo(arr);
    std::cout << std::endl;
    return 0;
}

template<int n>
void foo(int(&arr)[n])
{
    int sum = 0;
    int k = 0;
    int j = 0;
    bool x = true;
    bool y = true;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (arr[i] == 0 && x)
        {
            k = i;
            x = false;
        }
        if (arr[i] < 0 && y)
        {
            j = i;
            y = false;
        }

    }
    std::cout << "Sum of elements: " << sum << std::endl;
    std::cout <<"Sequence of element values that are located between the first negative and zero elements: " << std::endl;
    for (int i = j+1; i < k; ++i)
    {
        if (j < k && j != 0) std::cout << arr[i]<<" ";
    }
}
