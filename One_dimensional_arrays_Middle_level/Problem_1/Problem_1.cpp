// Problem_1.cpp :

#include <iostream>
#include <ctime>

template <int n>
void NewArray(int(&arr_1)[n], int(&arr_2)[n]);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr_1[size]{ 9,8,7,6,5,4,3,2,1,0 };
    int arr_2[size]{ 1,2,3,4,5,6,7,8,9,10 };
    //cout
    std::cout << "Array 1: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_1[i] << " ";
       
    }
    std::cout << std::endl<<"Array 2: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_2[i] << " ";
       
    }
    std::cout << std::endl;
    NewArray(arr_1, arr_2);
    return 0;
}

template<int n>
void NewArray(int(&arr_1)[n], int(&arr_2)[n])
{
    int newarr[n]{ 0 };
    int index_even = 0;
    int index_odd = 0;
    for (size_t i = 0; i < n; ++i)
    {
     
        if (i % 2 == 0) newarr[i] = arr_1[i + 1];
        else newarr[i] = arr_2[i - 1];
    }
    std::cout << std::endl << "New Array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << newarr[i] << " ";

    }
}
