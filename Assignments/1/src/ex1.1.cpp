#include <iostream>
#include <ctime>
using namespace std;

unsigned short int countOnes(unsigned int x) {
    unsigned short int ones = 0;

    while(x) {
        ones += x & 1; // AND operation with the last (least significant) bit 
        x >>= 1;  // right shift
    }
    return ones;
}

int main() {
    unsigned int x;
    int i;

    srand(time(NULL));  // so that rand() creates diffenrent numbers each time
    for(i = 0; i < 5; i++){
        x = rand() % 20;  // pseudo-random generator 0-19
        cout << "x = " << x << " and has " << countOnes(x) << " ones." "\n";
    }
    return 0;
}
