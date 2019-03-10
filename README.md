# Primes-C
Primes in C


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


`isprime` is an `int` as no Boolean in C \
 \
`i/2` could be replaced by `sqrt(i)` but: \
* needs `#include <math.h>` \
* `i,j` as `double` \
* `i%j` becomes `fmod(i,j)` \
* `printf("%i \n",(int)i);`
