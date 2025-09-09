// Example program
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int a, b;
    long long n;
    int s, v, t;
    std::cout << "Enter 2 numbers:\n";
    std::cin >> a >> b;
    std::cout << " Summ output: " << (a + b) << " The difference output: " << (a - b) << "\n" " The multiplication output: " << (a * b) << " Division output: " << (a / b);
    std::cout << " Hypotenuse output: " << std::sqrt (a * a + b * b);
    std::cout << " Enter the speed needed: \n";
    std::cin >> s >> v;
    if (s > 109)
    {
        std::cout << "your time is: " << (s / v) << " also you are out from the road ";
    }
    else
    {
        std::cout << "your time is: " << (s / v) << " also you are still on the road, congrats!";
    }
    std::cin >> n;
    int h = n / 3600;
    int m = (n % 3600) / 60;
    int ss = n % 60;
    std::cout << h << ":";
    if (m < 10)
    {
        std::cout << "0" << m << ":";
    }
    else
    {
        std::cout << m << ":";
        
    }
    if (s < 10)
    {
        std::cout << "0" << ss;
    }
    else
    {
        std::cout << ss;  
    }
}