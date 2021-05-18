#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha;

bool rewrite_memories(int* begin, int* end, int* fake, unsigned int n){
    unsigned int diff = end - begin +1;
    if( diff == n){
        for(unsigned int i=0; i<n; i++){
                begin[i]=fake[i];
        }
    return true;
    } else {
        if (diff>n){
                for(unsigned int i=0; i<n; i++){
                    begin[i]=fake[i];
                }
            } else {
                for(unsigned int i=0; i<diff; i++){
                    begin[i]=fake[i];
                }
                
            }
        return false;
        }
        
    }


