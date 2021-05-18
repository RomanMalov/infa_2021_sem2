
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int x;
    int mark;
    int count= 0;
    std::cin >>a;
    std::cin >>b;
    std::cin >>c;
    std::cin >>d;
    std::cin >>x;
    if(x == b - a){
        count ++;
    }
    if(x == d / c){
        count ++;
    }
    mark = 3 + count;
    if(count == 0){
        if(x == 1024){
            mark = 3;
        } else { 
            mark = 2;
        }
    }
    std::cout << mark;
    return 0;
}
