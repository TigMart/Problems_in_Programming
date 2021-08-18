// SQRT.cpp : 

#include <iostream>

int Sqrt(int x);
float squareRoot(float number, int precision);

int main()
{
    float x = 0.001f;
    std::cout << Sqrt(x) << std::endl;
    std::cout << squareRoot(x,6) << std::endl; 
    return 0;
}


int Sqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
    int i = 1;
    int result = 1;
    while (result <= x)
    {
        i++;
        result = i * i;
    }
    return i - 1;
}

float squareRoot(float number, int precision)
{
    int start = 0;
    int end = number;
    float result{};
    while (start <= end) {
        float mid = (start + end) / 2;
        if (mid * mid == number) {
            result = mid;
            break;
        }
        if (mid * mid < number) {
            start = mid + 1;
            result = mid;
        }
        else {
            end = mid - 1;
        }
    }
    float increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (result * result <= number) {
            result += increment;
        }
        result = result - increment;
        increment = increment / 10;
    }
    return result;
}
