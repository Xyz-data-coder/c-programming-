#include<stdio.h>

int main()
{   int a,rem,j=0;
    printf("enter the number\n");
    scanf("%d",&a);
    for(; a/10!=0;) {
        int sum =0;
        j++;
        for(; a>0; a/=10) {

            rem=a%10;
            sum=sum+rem;
        }
        printf(" sum in %d pass completed is: %d\n",j,sum);
        a=sum;
    }

    return 0;
}