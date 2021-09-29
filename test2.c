#include<stdio.h>

int main (void){
    float miles;
    printf("%s\n","Please enter a number");
    scanf("%f", &miles);
    printf("%s","kilometer=");
    printf("%.2f\n",1.6*miles);
}