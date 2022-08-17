// Recursive factorial function

#include <stdio.h>

unsigned long long factorial(unsigned int);

int main(void){
	
	// during each iteration, calculate
// factorial(i) and display result
 unsigned int i;
	for(i = 0; i <=21; ++i){
		
		printf("%u! = %llu\n", i, factorial(i));
	}
	return 0;
}

// recursive definition of function factorial
unsigned long long factorial(unsigned int number){
	
	// base case
	if(number <=1){
		
		return 1;
	} else {  // recursive step
		
		return (number * factorial(number - 1));
	}
}
