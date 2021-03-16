#include <iostream>

int main() {
    int a;
    int k = 1;
    int max = 0;
    std::cin>>a;
    while (a != 0)
    {
        if (a>max)
        {
            k = 1;
            max = a;
        }
        else
        {
            k = k + (a == max);
        }
        std::cin>>a;
    }
    std::cout << k;
    return 0;
}