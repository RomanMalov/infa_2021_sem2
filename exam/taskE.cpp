
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;



void dismissal(Employee* e){
    unsigned int n = e -> n_implants;
    for(unsigned int i = 0; i<n; i++){
        if (e->implant_type[i] == 'c'){
            e->implant_on[i] = false;
        }
    }
}