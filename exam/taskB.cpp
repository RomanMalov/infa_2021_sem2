#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{   float k;
    float h_0;
    float m;
    std::cin >> k >> h_0 >> m;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << sqrt(2 * k * h_0 * h_0 / m);
return 0;
}