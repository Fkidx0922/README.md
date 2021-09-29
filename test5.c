#include<stdio.h>

int main (void){
    int Chinese,English,math;
    printf("%s\n", "Please enter your Chinese,English,math score ");
    scanf("%d%d%d", &Chinese , &English , &math);
    printf("%s","sum=");
    printf("%d\n", Chinese+English+math);
    printf("%s","average=");
    printf("%d\n", (Chinese+English+math)/3);
}