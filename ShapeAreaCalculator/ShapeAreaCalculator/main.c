// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

float square(float);
float rectangle(float, float);
float circle(float a);
float triangle(float b, float h);


int main() {
    int response;
    float a, l, w, r, b, h;
    
   printf("\nWelcome user, choose the shape you would want to calculate its area: \n1. square \n2. Rectangle \n3. Circle \n4. Triangle \n\n");
   scanf("%d", &response);
   
   switch(response){
       case 1:
       printf("Enter your length of the side: ");
       scanf("%f", &a);
        printf("Area of your square is %.3f ", square(a));
  
        break;
        
       case 2:
       
        printf("Enter your length and width of the shape: ");
       scanf("%f%f", &l, &w);
        printf("Area of your Triangle is %.3f ", rectangle(l,w));
      
        break;
       case 3:
        printf("Enter the radius of your Circle: ");
       scanf("%f", &r);
        printf("Area of your circle is %.3f ", circle(r));
      
        break;
       case 4:
        printf("Enter your base length and height of the triangle: ");
       scanf("%f%f", &b, &h);
        printf("Area of your Triangle is %.3f ", triangle(b,h));
      
        break;
        
   }
   
   
   
    return 0;
}

float square(float a){
    
    return a * a;
}

float rectangle(float l, float w){
    return l * w;
}

float circle(float a){
    return 3.14 * pow(a, 2);
    
}

float triangle(float b, float h){
    return 0.5 * b * h;
    
}
