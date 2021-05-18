
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


struct Abonent{
    long int number;
    std::string name;
    int money;
};
bool Is_greater(Abonent a, Abonent b) {
    if(b.money == a.money){
        if(a.name.compare(b.name)== 0){
            return a.number<b.number;
        }
        return a.name.compare(b.name)<0;
    }
    
    return a.money>b.money;
}
int main()
{
    int n;
    
    std::cin>>n;
    std::vector <Abonent> v;
    for(int i =0; i<n; i++){
        Abonent x;
        std::cin>>x.name>>x.number>>x.money;
        v.push_back(x);
    }


    
    std::sort(v.begin(), v.end(), Is_greater);
    int k;
    k = (n>10)?10:n;
    for(int i=0; i<k; i++){
        Abonent x = v[i];
        std::cout<<x.name<<' '<<x.number<<' '<<x.money<<'\n';
    }
        return 0;
}
