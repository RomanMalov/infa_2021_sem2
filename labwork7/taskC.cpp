#include <cmath>
#include <iomanip>
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
    float  l = round((float)m /n*1000)/1000 + 0.0;
    float l2 = (float)m2/n;
    float d = round((l2-l*l)*1000)/1000;
    std::cout <<fixed << setprecision(3) << l <<' ' << d;
    return 0;
}
