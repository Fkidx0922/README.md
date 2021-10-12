#include<stdio.h>

int main (void){
    int n = 0,i = 0,m = 0;
    scanf("%d",&n);
    while ( i < n ){
        m = 0;
        while ( m < n ){
            printf("%s","#");
            m++;
        }
        i++;
        printf("%s","\n");  
    }    
}