#include <cmath>

#include <iostream>
using namespace std;
int main()
{   int n = 0;
    int m = 0;
    int m2 = 0;
    int x;
    std::cin >> x;
    
    while(x!=0){
        n++;
        m+=x;
        m2+=x*x;
        std::cin >> x;
    };
    float l = (float) round((float)m/n*1000)/1000;
    float l2 = (float) round((float)m2/n*1000)/1000;
    std::cout << l << '\n';
    std::cout << l2-l*l;
    return 0;
}
