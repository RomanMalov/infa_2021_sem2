


#include <iostream>
using std::cout;
using std::endl;


void rip_samurai(const Track *all_songs, unsigned int all_n, Track **in_memoriam_johnny, unsigned int* johnny_n){
    unsigned int count=0;
    for(unsigned int i = 0 ; i<all_n; i++){
        if (all_songs[i].author == 0){
            count++;
        }
    }
    Track *array = new Track[count];
    unsigned int j = 0;
    for(unsigned int i = 0; i<all_n; i++){
        if (all_songs[i].author == 0){
            array[j] = all_songs[i];
            j++;
        }
    
    }
    *johnny_n = count;
    *in_memoriam_johnny = array;
}
