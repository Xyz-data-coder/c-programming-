#include<stdio.h>

int main()
{ int a;
  int rem=0;
    printf("enter the number\n");
    scanf("%d",&a);
    
    for(;a>0;a/=10){
     int mod=a%10;
     rem=rem+mod;
    }
    printf("%d",rem);
    return 0;
}