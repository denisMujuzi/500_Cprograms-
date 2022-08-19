#include <stdio.h>

int main() {
    long int bin_value, i, mod;
    int val, dec_value;
    binary:
    
    printf("\nEnter the binary value: ");
    scanf("%ld", &bin_value);
    dec_value = 0;
    val = 1;
    
    for(i=bin_value; i!=0; i=i/10){
        mod = i % 10;
        if(mod == 1 || mod == 0){
            dec_value = dec_value + (mod*val);
            val = val * 2;
             } else{
        printf("wrong inputs");
        goto binary;
    }
    
   
    }
     printf("The decimal value: %d", dec_value);
    return 0;
}
