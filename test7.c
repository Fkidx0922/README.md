#include<stdio.h>

int main (void){
    float liter;
    printf("%s\n","Please enter a number");
    scanf("%f", &liter);
    printf("%s","Gallon=");
    printf("%.1f",liter*0.26418);
}