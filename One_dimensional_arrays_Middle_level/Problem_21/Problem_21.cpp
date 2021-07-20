// Problem_21.cpp : In the given integer array, remove elements that occur more than two times. 

#include <iostream>
#include <ctime>
#include <unordered_map>


void foo(int* arr, int n);

int main()
{
    srand((int)time(0));
    const int size = 10;
    int arr[size]{ 0 };
    // cin
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10;
    } 
    //cout
    std::cout << std::endl << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    foo(arr, size);
    std::cout << std::endl;
    return 0;
}


void foo(int* arr, int n)
{
    int k = 2;
    std::unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[arr[i]]++;
    }
    std::cout << "Remove elements that occur more than two times: " << std::endl;
    for (int i = 0; i < n; ++i) {

        if (mp[arr[i]] <= k) {
            std::cout << arr[i] << " ";
        }
    }
}

