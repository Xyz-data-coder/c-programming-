#include<stdio.h>

int main()
{   int a,b,num=0,rev,sum=0;

    printf("enter the number\n");
    scanf("%d",&a);
    b=a;
    for(; a>0; a/=10) {
        num+=1;
    }

    for( int i=1; b>0; b/=10) {
        rev=b%10;
        if(i==1 || i==num) {
            sum=sum+rev;
        }
        i++;
    }
    printf("%d",sum);

    return 0;
}