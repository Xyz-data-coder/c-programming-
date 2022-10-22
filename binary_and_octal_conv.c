#include<stdio.h>

int main()
{ int a,b,rem,num=1;
    printf("enter decimal number\n");
    scanf("%d",&a);
    b=a;
    for(;a>0;a/=2){
      rem=a%2;
    num=(num*10)+rem;
    }
    int sum=0;
    for(;num>1;num/=10){
      rem=num%10;
    sum=sum*10+rem;
    }
    printf("binary number is: %d\n",sum);
    
    for(;b>0;b/=8){
      rem=b%8;
    num=num*10+rem;
    }
     sum=0;
    for(;num>0;num/=10){
      rem=num%10;
    sum=sum*10+rem;
    }
    printf("octal number is: %d\n",sum);
    
    return 0;
}