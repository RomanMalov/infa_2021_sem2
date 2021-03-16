#include <iostream>

int main() {
    int a;
    bool flag = true;
    std::cin >> a;
    while (a > 1) {
        flag = flag * (a % 2 == 0);
        a = a / 2;
    }
    if (flag) {
        std::cout << "YES";
    } else{
        std::cout << "NO";
    }
    return 0;
}