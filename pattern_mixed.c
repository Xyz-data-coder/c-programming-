#include<stdio.h>

int main()
{   int n;
    printf("enter column number\n");
    scanf("%d",&n);
    for(int i =1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n\n\n");
//*************************** //***************************
    int a=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            a++;
            printf("%d ",a);
        }
        printf("\n");
    }
    printf("\n\n\n");
//***************************//*****************************

    int num=64;
    for(int i=n; i>0; i--) {
        for(int j=1; j<=i; j++) {
            num++;

            if(num>90) {
                break;
            }
            printf("%c ",num);
        }
        printf("\n");
    }
    printf("\n\n\n");
//*************************//*******************************

    int rev=n;
    for(int i =0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            printf("%d ",rev+j);
        }
        rev--;
        printf("\n");
    }
    printf("\n\n\n");
//***************************//*****************************

    int alpha=64;
    int low=96;
    for(int i=1; i<=n; i++) {
        for(int j =1; j<=i; j++) {
            alpha++;
            low++;
            printf("%c%c ",alpha,low);
        }
        alpha=64;
        low=96;
        printf("\n");
    }
    printf("\n\n\n");
//**************************//******************************


    for(int i=1; i<=n; i++) {
        for(int j =1; j<=i; j++) {
            alpha++;
            low++;
            if(alpha>90 ||low>122) {
                break;
            }
            printf("%c%c ",alpha,low);
        }
        printf("\n");
    }
    printf("\n\n\n");
//**************************//*****************************

    return 0;
}