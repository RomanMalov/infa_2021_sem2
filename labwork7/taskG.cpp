#include <iostream>
#include <cmath>
using namespace std;
float func(float x){
    return x;
}
float find_root( float (*f) (float), float a, float b, float tol)
{   
    float left;
    float right;
    float x;
    float d=fabs(a-b);
    left = a;
    right = b;
    while(d>tol/2){
        x = (left+right)/2;
        if(f(x)>0){
            if (f(left)>f(right)){
                left = x;
            } else {
                right = x;
            }
        } else {
            if (f(left)>f(right)){
                right = x;
            } else {
                left = x;
            }
        }
        d = fabs(left - right);
    }
    
    
    return (float)round(x/tol)*tol;
}

int main(){
    std::cout << find_root(func, -1, 1, 0.001);
    return 0;
}