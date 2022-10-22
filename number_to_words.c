#include<stdio.h>

int main()
{   int a,sum=0,rem;
    printf("enter the number\n");
    scanf("%d",&a);
    for(; a>0; a/=10) {
        rem=a%10;
        sum=sum*10+rem;
    }
    for(; sum>0; sum/=10) {
        rem=sum%10;
        switch(rem) {
        case 0:
            printf("zero-");
            break;
        case 1:
            printf("one-");
            break;
        case 2:
            printf("two-");
            break;
        case 3:
            printf("three-");
            break;
        case 4:
            printf("four-");
            break;
        case 5:
            printf("five-");
            break;
        case 6:
            printf("six-");
            break;
        case 7:
            printf("seven-");
            break;
        case 8:
            printf("eight-");
            break;
        case 9:
            printf("nine-");

        }
    }

    return 0;
}