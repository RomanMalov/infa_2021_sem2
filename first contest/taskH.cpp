#include <iostream>

int main() {
    int a;
    int i = 2;
    std::cin >> a;
    while (a > 1) {
        if (a % i == 0){
        a = a / i;
        std::cout<< i << '\n';
        i = 2;
        } else {
            i++;
        }
    };
    return 0;
}