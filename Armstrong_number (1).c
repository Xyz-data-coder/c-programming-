#include<stdio.h>

int main()
{
    int a,c,d,num=0,rem,sum=0;
    printf("enter the number\n");
    scanf("%d",&a);
    c=a;
    d=a;

    for(; a>0; a/=10) {
        num+=1;
    }

    for(; c>0; c/=10) {
        int mul =1;
        for(int i=1; i<=num; i++) {
            rem=c%10;
            mul=mul*rem;

            printf("rem %d\n",rem);
            printf("mul %d\n",mul);

        }
        sum =sum+mul;
        printf("sum %d\n",sum);
    }
    printf("%d\n",sum);
    if(d==sum) {
        printf("it is a Armstrong number");
    }
    else {
        printf("it is not a Armstrong number ");
    }
    return 0;
}