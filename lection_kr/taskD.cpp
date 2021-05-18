
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


struct sud{
    long long s;
    long long u;
    long long d;
};
sud next(sud old){
    sud new_;
    new_.s = old.s+old.u+old.d;
    new_.u = old.s + old.d;
    new_.d = old.s + old.u;
    return new_;
}
int main()
{
    
sud first;
first.s = 1;
first.u = 1;
first.d = 1;
int n;
std::cin>>n;
    sud second;
for(int i=0; i<n-1; i++){
    second = next(first);
    first = second;
}
    std::cout<<first.s+first.u+first.d;
        return 0;
}
