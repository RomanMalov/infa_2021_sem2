#include <iostream>

int main() {
    int a;
    int b;
    int t;
    std::cin >> a >>b;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;

    };
    while ( a > b ){
        a = a - b;
            if (a < b)
            {
                t = a;
                a = b;
                b = t;

            };
    };
    std::cout << b;
return 0;
    }