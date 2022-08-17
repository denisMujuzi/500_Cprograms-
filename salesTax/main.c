#include <stdio.h>

/* (Sales Tax) Sales tax is collected from buyers and remitted to the government. A retailer
has to file a monthly sales tax report which lists the sales for the month and the amount of sales
tax collected, at both the county and state levels. Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state
taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax.
**** Created by Denis Mujuzi
*/

int main(){
	float Total_amount_collected, countytax, statetax, sales;
	char month[20];
	unsigned int counter;
	
	counter = 0;
	
	printf("Enter total amount collected (-1 to quit): ");
	scanf("%f", &Total_amount_collected);
	
	while(Total_amount_collected != -1){
		counter = counter + 1;
	printf("Enter name of Month: ");
	scanf("%s", month);
	printf("Total Collections: $ %.2f", Total_amount_collected);
	
	sales = 0.9172 * Total_amount_collected;
	printf("\nSales: $ %.2f", sales);
	countytax = 0.04 * sales;
	printf("\nCounty Sales Tax: $ %.2f", countytax);
	statetax = 0.05 * sales;
	printf("\nState Sales Tax: %.2f", statetax);
	printf("\nTotal Sales Tax Collected: $ %.2f", countytax + statetax);
	
	printf("\n\nEnter total amount collected (-1 to quit): ");
	scanf("%f", &Total_amount_collected);
		
	}
	
	return 0;
}



