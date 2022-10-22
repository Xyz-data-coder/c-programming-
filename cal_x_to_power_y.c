#include<stdio.h>

int main()
{
    int num1,num2,mul=1;
    printf("enter base and power\n");
    scanf("%d %d",&num1,&num2);
    for(int i=1; i<=num2; i++) {
        mul=mul*num1;
    }
    printf("%d",mul);
    return 0;
}