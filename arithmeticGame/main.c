#include <stdio.h>
#include <stdlib.h>

unsigned int corr = 0, n;
int incorr = -1;
unsigned int response = 0;
unsigned int diffLev = 1;
unsigned int prompt = 1;
unsigned int want, answer, option;

void correct(void);
void incorrect(void);
void display(void);
void result(void);
void wanting(void);


int main(void){
	
	unsigned int i;
	
	for(i = 1; i <= 100; ++i){
	display();
	
	if(diffLev == 16){
		i = 111;
		printf("YOU HAVE COMPELETED ALL THE 15 DIFFICULT LEVEL...\n YOU'RE NOW A PRO\n WE APPRECIATE YOUR HARD WORK IN YOUR TRAINING AND TESTING USING THIS PROGRAM."); 


	}
}
		return 0;
}

void correct(void){
	
	unsigned int c = 1 + rand() % 4;
	
	switch(c){
		case 1:
			printf("Very good!");
			break;
		case 2:
			printf("Excellent!");
			break;
		case 3:
			printf("Nice work!");
			break;
		case 4:
			printf("Keep up the good work!");
			break;
	}
    
}

void incorrect(void){
	
	unsigned int k = 1 + rand() % 4;
	
	switch(k){
		case 1:
			printf("No. Please try again.");
			break;
		case 2:
			printf("Wrong. Try once more.");
			break;
		case 3:
			printf("Don't give up!");
			break;
		case 4:
			printf("No. Keep trying.");
			break;
	}
	//incorr++;
}

 void display(void){
 	
unsigned int a, b, input, input2; 	
 	
 if (diffLev == 1){	
 	a = 0 + rand() % 10;
	b = 0 + rand() % 10;
  } 
  		 			
	if (diffLev == 2){
	a = rand() % 20;
	b = rand() % 20;
  } 
  
  if(diffLev == 3){
	a = rand() % 30;
	b = rand() % 30;
  }
  
  if(diffLev == 4){
	a = rand() % 40;
	b = rand() % 40;
  }
  
  if(diffLev == 5){
	a = rand() % 50;
	b = rand() % 50;
  }
  if(diffLev == 6){
	a = rand() % 60;
	b = rand() % 60;
  }
  if(diffLev == 7){
	a = rand() % 70;
	b = rand() % 70;
  }
  if(diffLev == 8){
	a = rand() % 80;
	b = rand() % 80;
  }
  if(diffLev == 9){
	a = rand() % 90;
	b = rand() % 90;
  }
  if(diffLev == 10){
	a = rand() % 100;
	b = rand() % 100;
  }
  if(diffLev == 11){
	a = rand() % 200;
	b = rand() % 200;
  }
  if(diffLev == 12){
	a = rand() % 400;
	b = rand() % 400;
  }
  if(diffLev == 13){
	a = rand() % 600;
	b = rand() % 600;
  }
  if(diffLev == 14){
	a = rand() % 800;
	b = rand() % 800;
  }
  if(diffLev == 15){
	a = rand() % 1000;
	b = rand() % 1000;
  }
  
    
	if (prompt == 1){
		printf("Program created by, Denis Mujuzi\n");
    	printf("\nWelcome user, what would you want us to test you in? choose..\n 1. Addition\n 2. Substraction\n 3. Mutiplication\n 4. Or you want me to randomly choose for you\n");
    	printf("Enter your response here: ");
    	scanf("%u", &want);
    	
    	prompt++;
    	
	}
    
 	switch(want){
 		case 1:
 			answer = a + b;
 				printf("\n\nwhat is %u + %u\n ", a, b);
			 	printf("Enter your answer: ");
			 	scanf("%u", &input);
			 	++response;
 			break;
 		case 2:
 			answer = a - b;
 			printf("\n\nwhat is %u - %u\n ", a, b);
			printf("Enter your answer: ");
			scanf("%u", &input);
			++response;
 			break;
 		case 3:
 			answer = a * b;
 			printf("\n\nwhat is %u * %u\n ", a, b);
			printf("Enter your answer: ");
			scanf("%u", &input);
			++response;
 			break;
 		case 4:
			option = 1 + rand() % 3;
	
	switch(option){
 		case 1:
 			answer = a + b;
 				printf("\n\nwhat is %u + %u\n ", a, b);
			 	printf("Enter your answer: ");
			 	scanf("%u", &input);
			 	++response;
 			break;
 		case 2:
 			answer = a - b;
 			printf("\n\nwhat is %u - %u\n ", a, b);
			printf("Enter your answer: ");
			scanf("%u", &input);
			++response;
 			break;
 		case 3:
 			answer = a * b;
 			printf("\n\nwhat is %u * %u\n ", a, b);
			printf("Enter your answer: ");
			scanf("%u", &input);
			++response;
 			break;
 			
	 }   
}
    
 	
 	
 	if(answer == input){
 		correct();
 		printf(" You're correct, ");
 		wanting();
 		corr++;
 		 result();
 		 
	 } else {
	 		for (n = 101; n >= 10; --n){
	 				incorrect();
	 				printf(" \nyou are wrong, try again");
	 				//printf("\nwhat is %u times %u\n ", a, b);
 	                printf("\nEnter your answer: ");
 					scanf("%u", &input2);
 					++response;
 					
 					
 				if(answer == input2){
 					n = 3;
 					correct();
 					printf("  \nYou're correct, ");
 					wanting();
 					corr++;
 					result();
 					
				 } 
				 
	 		result();	
			 }
	 	
	 
	 }

 }

void result(void){
	float percentage;

	while (response == 10){
		   printf("incorrect is %u", incorr);
 		 	printf("\n\nYou have tried out %u times... You failed %u times", response, 10 - corr);
 		 	
 		 		if( (corr * 10) >= 75){
 		 			++diffLev;
 
 		 			printf("\nYou passed %u%% of the %u times", (corr * 10) , response);
 		 			printf("\nCongratulations, you are ready to go to the next level!. Difficult Level %u", diffLev);
				  } else{
				  	printf("\nYou got %u%% of the %u times", (corr * 10) , response);
				  	printf("\nYou're supposed to score 75%% to proceed to next level.. \nPlease ask your teacher for extra help.");
				  }
 				
 		 	n = 2;
 		 	response = 0;
 		 	
 		 		corr = 0;
 		 		incorr = 0;
 		 		
			  }
			  		  
	
	
}

void wanting(void){
	switch(want){
		case 1:
			printf("Let's try out other additions");
			break;
		case 2:
			printf("Let's try out other subtractions");
			break;
		case 3:
			printf("Let's try out other mutiplications");
			break;
		case 4:
			printf("Let's try out other Arithmetic");
			break;
	}
	
}

