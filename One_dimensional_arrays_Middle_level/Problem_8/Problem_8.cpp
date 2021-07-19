// Problem_8.cpp : Determine the index of the largest of the odd value positive elements. 


#include <iostream>
#include <ctime>

template<size_t n>
int Index(int(&arr)[n]);

int main()
{
    srand((int)time(0));
    const int size = 9;
    int arr[size]{ 0 };
    //cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 28 + (-9);
    }
    //cout
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "Index of the largest of the odd value positive elements: " << Index(arr) << std::endl;
    return 0;
}

template<size_t n>
int Index(int(&arr)[n])
{
    int max_odd_index = 0;
    int tmp[n]{ 0 };
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 != 0 && arr[i]>=0)
        {
            if (arr[max_odd_index] < arr[i])
                max_odd_index = i;
        }
    }
    return max_odd_index;
}
