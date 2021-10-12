#include<stdio.h>

int main (void){
    int n,i,k=0;
    scanf("%d",&n);
    i = 2;
    while (i-1 <= n/2)//程式中13除以2=6 包含13質數的質數之前有6個 又i從2開始加 加6次會變7 所以i要減1//
    {
        k++;
        if(n % i == 0){
            printf("NO, ");
            break;
        }
        if(i-1 == n/2){
            printf("YES, ");            
        }
        i++;        
    }
    if(n < 2){
        printf("NO, ");
    }
    printf("%d\n",k);
}