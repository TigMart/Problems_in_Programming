// 2.cpp: Write a function that finds the greatest common divisors of two numbers.

#include <iostream>

 int gcd(int a, int b)
 {
     int d;
     if (a < b)  d = a;
     else d = b;
          
     while (a % d != 0 || b % d != 0)
     {
         d -= 1;
     }
     return d;
 }

 int main()
 {
     int a, b;
     std::cout << "Dear User enter  any digit, a = ";
     std::cin >> a;
     std::cout << "Dear User enter  any digit, b = ";
     std::cin >> b;
     std::cout << "Greatest common divisors of " << a << " and " << b << " is " << gcd(a,b);
     std::cout << std::endl;
     return 0;
 }
 /* Recursion method
 //Greatest common divisors
 int gcd(int a, int b) {
     if (b == 0) return a;
     return gcd(b, a % b);
     int main() 
     {
         std::cout << "Greatest common divisors" << std::endl;
         std::cout << "Dear User enter any integer a = ";
         std::cin >> a;
         std::cout << "Dear User enter any integer b = ";
         std::cin >> b;
         std::cout << "Greatest common divisors of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
     }*/
