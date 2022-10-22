#include<stdio.h>

int main()
{
    int a,c=0,res,rev=1,d;
    float num=1.0,denom=1.0;
    int b=0;
    int m1=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=1; i<=a; i++) {
        int d=1;
        for(int j=1; j<=i; j++) {
            b++;

            d=d*j;

        }
        arr[c]=d;
        c++;
        printf("%d/%d! ",rev,i);
        if(i!=a) {
            printf("+ ");
        }
        if(i!=1) {
            num=num*arr[i-1]+1*denom;
            float n= denom*arr[i-1];
            denom=n;
        }
    }
    for(; ((int)num)%2==0 && ((int)denom)%2==0;) {
        num=num/2;
        denom=denom/2;
    }
    printf("=%.0f/%.0f",num,denom);

    return 0;
}