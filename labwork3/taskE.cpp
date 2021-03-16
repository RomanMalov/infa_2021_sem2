//
// Created by rmnmlv on 02.03.2021.
//
#include <iostream>;


int main() {
    int x;
    int y;
    int out;
    std::cin >> x >> y;
    out = do_some_awesome_work(&x, &y);
    std::cout << out;
    return 0;
}

