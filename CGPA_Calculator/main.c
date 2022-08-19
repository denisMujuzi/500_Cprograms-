/* WELCOME TO MY CGPA CALCULATOR. CREATED BY MUJUZI DENIS 
*   FOLLOW CAREFULLY ALONG MY CODE 
*/

#include <stdio.h> 


int main() {
    
   
   int marks, creditUnit, finalCredit, semester, courseunits;
   float gpa1, grade, total, cgpa;
   
   float productG, productG1;
   int i = 1;
   int ii = 1;
   char name[20];
   
   int counter = 1;
   creditUnit = 0;
   finalCredit = 0;
   productG1 = 0;
   total = 0;
   
   	puts("...................................................................");
	puts("WELCOME TO MY CGPA CALCULATOR => => => CREATED BY MUJUZI DENIS");
	puts("....................................................................");
	
	
	printf("hello user, enter your name: ");
	scanf("%s", name);
	printf("\n\nWelcome %s....... ", name);
   
   printf("Enter number of semesters to compute: ");
   scanf("%d", &semester);
  
   for(i = 1; i <= semester; i++){
       
        printf("\n\nSEMESTER %d", i);
     
      printf( "\nEnter your marks for subject %d and credit unit (enter -1 -1 to end): ", ii); 
          scanf("%d%d", &marks, &creditUnit);
          ii++;
          
     while(marks != -1){
          
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
   
   finalCredit = finalCredit + creditUnit;
   productG = grade * creditUnit;
   productG1 = productG1 + productG;
   
   
        
        printf( "\nEnter your marks for subject %d and credit unit (enter -1 -1 to end): ", ii++); 
          scanf("%d%d", &marks, &creditUnit); 
          
     }
     
     gpa1 = productG1 / finalCredit; 
     printf("YOUR GPA FOR SEMESTER %d IS %.2f", i, gpa1);
     
     total = total + gpa1;
    
       creditUnit = 0;
       finalCredit = 0;
       productG1 = 0;
       ii = 1;
       
   }
   
   
  
  
  
  
  if(semester == 0){
      printf("YOU ENTERED NO SEMESTERS..");
  } else {
       cgpa = total / semester;
   
   printf("\n\nYOUR CGPA FOR THE %d SEMESTERS IS %.2f", semester, cgpa);
     
  }
  
return 0;
}

