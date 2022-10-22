#include<stdio.h>

int main()
{
    int a[4][5]= {{4,5,33,21,3},{34,44,7,365,2},{124,2,12,56,322},{12,41,31,77,43}};
    printf("Matrix is\n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {

        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    int sum =0;
    printf("\nsum of each row is \n");

    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        sum =0;
        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[i][j]);
            int ab =a[i][j];
            sum =sum+ab;
        }

        printf("= %d\n",sum);
    }
    sum=0;
    printf("\nsum of each column is \n");

    for(int i=0; i<sizeof(a[0])/sizeof(a[0][0]); i++) {
        sum=0;
        for(int j=0; j<sizeof(a)/sizeof(a[0]); j++) {
            printf("%d ",a[j][i]);
            int ab =a[j][i];
            sum =sum+ab;
        }

        printf("= %d\n",sum);
    }

    return 0;
}