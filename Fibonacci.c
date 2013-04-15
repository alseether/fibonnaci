//Derek Neil  
//figure out Fibonacci number for Norex job application
//C version, casting from bigint to chararray/string was a little more tricky

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <gmp.h>

int digits(unsigned long long int);

int main (void) {
	
	//declare variables
	mpz_t previous; mpz_init(previous);
	mpz_t latest; 	mpz_init_set(latest, 1);
	mpz_t temp; 	mpz_init(temp);
	int sum = 0;
	time_t startTime, endTime;
	
	//start
	printf("Calculating in C: ");
	startTime = time(NULL);
	
	//build sequence with loop
	for(int dot=0; sum!=15165; dot++){
		mpz_add(temp, previous, latest);
		mpz_set(previous, latest);
		mpz_set(latest, temp);
		char * strdigits = mpz_get_str(NULL, 10, latest);

		if(strlen(strdigits)>=2012){
			sum = 0; //work out sum of last digits, digits's
			for(int i=0; i<strlen(strdigits); i++)
				sum += strdigit[i];

			//print results
			if(sum!=15165){
				printf("\nThe magic numbers are: ");
				 for(int i=2005; i<=2011; i++){ //will return 2006-2012 digits
					 printf("%c", strdigit[i]);
					 if(i==2007)
						 printf("-");
				 }
				 break;
			}
		}

		//eye candy
		if(dot%700==0)
			printf(". ");
	}
	 
	//how long it took
	endTime = time (NULL);
	
	//print some info
	printf("\nTotal execution time was: %.2f seconds\n",(endTime - startTime)/1.0);
//	printf("\nFibonacci number was: \n");
//	printf("%s",strdigit);
	printf("\n");
}
