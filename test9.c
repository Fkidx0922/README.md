#include<stdio.h>

int main (void){
    int integer;
    printf("%s\n","Please enter a number");
    scanf("%d", &integer);
    int v1 = (((integer/1000)+7)%10);
    int v2 = (((integer%1000/100)+7)%10);
    int v3 = (((integer%100/10)+7)%10);
    int v4 = (((integer%10)+7)%10);
    printf("%d%d%d%d\n",v3,v4,v1,v2);
}