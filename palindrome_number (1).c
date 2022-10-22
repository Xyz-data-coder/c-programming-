#include<stdio.h>

int main()
{   int a,c,rem,num=0;
    printf("enter the number\n");
    scanf("%d",&a);
    c=a;
    for(; a>0; a/=10) {
        rem=a%10;
        num=num*10+rem;
    }
    if(c==num) {
        printf("it is a palindrome number");
    }
    else {
        printf("it is not a palindrome number");
    }
    return 0;
}