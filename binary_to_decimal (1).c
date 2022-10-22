#include<stdio.h>


int main()
{
    int a,j=0, rem,mul=1,n,sum=0;
    printf("enter binary number\n");
    scanf("%d",&a);
    for(; a>0; a/=10) {
        for(int i=0; i<=j; i++) {
            rem=a%10;
            if(i==0) {
                mul=1;
            }
            else {
                mul=mul*2;
            }
        }
        n=rem*mul;
        sum=sum+n;
        j+=1;
    }
    printf("%d",sum);
    return 0;
}