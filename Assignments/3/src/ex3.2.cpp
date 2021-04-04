#include <iostream>
#include <ctime>

void prefix_sum(const short a[16], short x[16]){
    int i,j;
    for(i = 0; i < 16; i++){
        x[i] = 0;
        for(j = 0; j< 16; j++){
            if(j <= i){
                x[i] += a[j];
            }
        } 
    }
}

int main(){
    int i;
    short a[16],x[16];

    srand(time(NULL));
    for(i = 0; i< 16; i++){
        a[i] = rand() % 20; 
    } 

    prefix_sum(a,x);

    return 0;
}