/* Program that inputs two numbers and prints the sum, difference, product, quotient and remainder

* CREATED BY MUJUZI DENIS
       Follow along..............................
 */
 
 // start of your code
 #include <stdio.h> // insert the header file
 
int main(){ // start of the main function 

	int x; // declare the first input variable
	int y; // declare the second input variable
	
	printf("Enter your first number and second number: ");
	scanf("%d%d", &x, &y); // prompt the user to input and store the values
	
	// declare the formulas to be used in the calculations
	int sum = x + y;
	int product = x * y;
	int difference = x - y;
	int quotient = x / y;
	float remainder = x % y;
	
	// print the results
	printf("sum of %d and %d is %d ", x, y, sum);
	printf("\nproduct of %d and %d is %d ", x, y, product);
	printf("\ndifference of %d from %d is %d ", y, x, difference);
	printf("\nquotient of %d on %d is %d ", y, x, quotient);
	printf("\nremainder of %d on %d is %f ", y, x, remainder);
	
	
	return 0;
} // end of main function
