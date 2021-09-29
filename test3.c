#include<stdio.h>

int main (void){
    float Celsius;
    printf("%s\n","Please enter a temperature");
    scanf("%f", &Celsius);
    printf("%s","Fahrenheit is ");
    printf("%.2f\n",Celsius*9/5+32);
}