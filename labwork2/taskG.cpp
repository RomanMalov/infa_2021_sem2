#include <iostream>

int main() {
    int a;
    int i=2;
    bool flag = true;
    std::cin >> a;
    while (i < a/2 + 1)
    {
        flag=flag * (a % i != 0);
        i++;
    }
    std::cout << flag;
    return 0;
}