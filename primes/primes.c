#include <stdio.h>

int main(){

int primesupto = 100;
int i,j;
int isprime = 1;

    for (i=2; i<primesupto; i++){
        for (j=2; j<i/2; j++){    
            if (i%j==0) isprime = 0;
        }
    if (isprime == 1)       printf("%i \n",i);
    isprime = 1;
    }
}
