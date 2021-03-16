#include <iostream>

int main() {
    int a;
    int k = 0;
    std::cin>>a;
    while (a != 0)
    {
        k = k + (a % 2 == 0);
        std::cin>>a;
    }
    std::cout << k;
    return 0;
}