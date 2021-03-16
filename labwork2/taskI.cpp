#include <iostream>
#include <string>
int main() {
    std::string a;
    int v;
    int sum = 0;
    std::cin >> v >> a;

    while (a != "A999AA") {
        if (v > 60) {
            if (a[1] == a[2] and a[2] == a[3]) {
                sum = sum + 1000;
            } else {
                if (a[1] == a[2] or a[1] == a[3] or a[2] == a[3]) {
                    sum = sum + 500;

                } else {
                    sum = sum + 100;

                }
            }

        }
        std::cin >> v >> a;

    }
    std::cout << sum;
    return 0;
}