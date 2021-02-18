#include <iostream>;
#include <string>;

std::string transform(int x) {
    int d, e;
    std::string str;
    d = x / 10;
    e = x % 10;
    for (int i = 0; i < d; i++) {
        str = str + '<';
    }
    for (int j = 0; j < e; j++) {
        str = str + 'v';
    }
    return str;

};

int main() {
    int a;
    std::string fullstr;
    std::cin >> a;
    while (a != 0) {

            fullstr = transform(a % 60) + "." + fullstr;

        a = a / 60;
    }
    std::cout<<fullstr.substr(0, fullstr.size()-1);
    return 0;
};