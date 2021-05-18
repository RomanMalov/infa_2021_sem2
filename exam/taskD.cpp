

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

unsigned int is_an_invisible_bike(Vehicle* v, unsigned int n){
    unsigned int count = 0;
    for(unsigned int i=0; i<n; i++){
        if ((not v[i].is_visible) and (v[i].type == 1)){
            count++;
        }
    }
    return count;
}
