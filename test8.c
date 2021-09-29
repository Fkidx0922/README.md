#include<stdio.h>

int main (void){
    float Gram;
    printf("%s\n","Please enter a number");
    scanf("%f", &Gram);
    printf("%s","台斤=");
    printf("%.1f",Gram/600);
}