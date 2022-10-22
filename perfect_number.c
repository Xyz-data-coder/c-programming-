#include<stdio.h>

int main()
{   int a,sum=0;
    printf("enter the number\n");
    scanf("%d",&a);
    for(int i=1; i<a; i++) {
        if(a%i==0) {
            printf("factor is %d\n",i);
            sum+=i;
            printf("sum is %d\n",sum);
        }
    }
    if(sum==a) {
        printf("it is a perfect number");
    }
    else {
        printf("it is not a perfect number");
    }
    return 0;
}