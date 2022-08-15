/* WELCOME TO MY CGPA CALCULATOR. CREATED BY MUJUZI DENIS 
*   FOLLOW CAREFULLY ALONG MY CODE 
*/

#include <stdio.h> // header file

//start of the main function
int main() {
    
    //declare variables to be used
   int marks, creditUnit, finalCredit;
   float cgpa, grade;
   
   float productG, productG1;
   int i = 1;
   char name[20];
   
   int counter = 1;
   creditUnit = 0;
   finalCredit = 0;
   productG1 = 0;// end of the variables
   
   	puts("...................................................................");
	puts("WELCOME TO MY CGPA CALCULATOR => => => CREATED BY MUJUZI DENIS");
	puts("....................................................................");
	
	//welcome the user and save the name....
	printf("hello user, enter your name: ");
	scanf("%s", name);
	printf("\n\nWelcome %s...................................................\n", name); //call the saved name of the user
   
   //here i start working on my while loop, it helps me design a templete which is prompted.
   while(counter <= 3){
      
      //prompt the user to start entering marks. MARKS<space>CREDIT UNIT
      printf( "Enter your marks for subject %d and credit unit: ", i); // this also allows me to inceament the subject number.
          scanf("%d%d", &marks, &creditUnit);
       
       i++; //increment the subjects
    //this is grading of the input marks to get the grade
        if (marks >= 80){
       grade = 5;
   } else if(marks >= 75){
       grade = 4.5;
   }else if(marks >= 70){
       grade = 4;
   }else if(marks >= 65){
       grade = 3.5;
   }else if(marks >= 60){
       grade = 3;
   }else if(marks >= 50){
       grade = 2;
   }else{
       grade = 0;
   }
        
    // here is where i pass aguements to get me the sum of all the specific input
       counter = counter +1;
       finalCredit = finalCredit + creditUnit;
       productG = grade * creditUnit;
       productG1 = productG1 + productG;
     
   } // END OD WHILE LOOP
   
  cgpa = productG1 / finalCredit; // calculate cgpa
  
  
  printf("YOUR CGPA IS %.2f", cgpa); // print out the result.
  
return 0;
} // end of the main function


