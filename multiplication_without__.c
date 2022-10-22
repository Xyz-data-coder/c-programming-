#include<stdio.h>

int main()
{   int a,b,sum=0;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=b; i++) {
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}