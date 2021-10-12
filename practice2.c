#include<stdio.h>

int main(void){
int n,i =1,m=1;
scanf("%d", &n);
while(i < n){
    m=m * i;
    i ++;
}
printf ("%d\n",m);
}