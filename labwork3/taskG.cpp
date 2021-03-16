//
// Created by rmnmlv on 02.03.2021.
//
#include <iostream>;

unsigned int count_total_mice_amount(Cat* cats, unsigned int n){
    unsigned int total=0;
    for (unsigned int i = 0 ; i<n; i++){
        total += cats[i].mice_caught;
    }
    return total;
}
