#include<stdio.h>

int main()
{   int lower,upper;
    printf("enter lower and upper range of numbers\n");
    scanf("%d %d",&lower,&upper);
    for(int a=lower; a<=upper; a++) {
        int c,d,num=0,rem,sum=0;
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
            }
            sum =sum+mul;
        }
        a=d;
        if(d==sum) {
            printf("%d ",d);
        }
    }
    return 0;
}