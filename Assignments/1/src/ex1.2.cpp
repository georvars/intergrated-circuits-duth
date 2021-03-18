#include <iostream>
using namespace std;

unsigned int checkSum(unsigned int x){
    unsigned int digits[10],sum=0;   // max value of an unsigned int is 4294967295, which has 10 digits
    int i;

    for(i=0; i<10; i++){
        digits[i] = x % 10;
        x = x/10; 
    }
    for(i=0; i<10; i++){
        if(i%2 == 1){
            if((2 * digits[i]) > 9){
                digits[i] = 2 * digits[i];
                while(digits[i]){
                    sum+= digits[i]%10;
                    digits[i] = digits[i]/10;
                }
            }else{
                sum+= 2 * digits[i];
            }
        }else{
            sum+= digits[i];
        }
    }
    return sum;    

}

int main() {
    unsigned int num = 3561;

    cout << "Number = " << num << " and the checksum is " << checkSum(num) << "\n" ;
    return 0;
}