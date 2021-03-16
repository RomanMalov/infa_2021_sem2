//
// Created by rmnmlv on 27.02.2021.
//
#include <iostream>;

int main() {
    int n;
    float avg=0;
    int sum=0;
    std::cin >> n;
    int list[10000];
    for (int i = 0; i < n; i++) {
        std::cin >> list[i];
        avg += (float)list[i];
    }
    avg =  avg / n;
    for (int i = 0; i < n; i++) {
    sum+=(list[i]>avg)?list[i]:0;
    }
    std::cout<<sum;
    return 0;
}

