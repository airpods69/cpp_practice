#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    float r1, r2;
    std::cin >> a >> b >> c;
    if (b*b - 4*a*c>0)
    {
        r1 = (-b + sqrt(b*b - 4*a*c>0))/2*a;
        r2 = (-b - sqrt(b*b - 4*a*c>0))/2*a;
        std::cout << r1 << "\n" << r2 << "\n";
    }
    else if (b*b - 4*a*c ==0)
    {
        r1 = (-b + sqrt(b*b - 4*a*c>0))/2*a;
        std::cout << r1;
    }
    else
    {
        std::cout << "Imaginary Roots\n";
    }
}
