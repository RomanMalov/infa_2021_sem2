#include <iostream>

int main() {
    int a;
    int max = 0;
    std::cin>>a;
    while (a != 0)
    {
        max = (a%2==0 and a>max)?a:max;
        std::cin>>a;
    }
    std::cout << max;
    return 0;
}