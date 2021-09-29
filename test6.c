#include<stdio.h>

int main (void){
    int height,weight;
    printf("%s\n","Please enter your height(cm) and weight(kg)");
    scanf("%d%d" , &height , &weight);
    printf("%s","height(英吋)=");
    printf("%.4f\n", height/2.54);
    printf("%s","weight(磅)=");
    printf("%.4f\n", weight/0.454);
}