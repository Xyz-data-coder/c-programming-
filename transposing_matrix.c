#include<stdio.h>

int main()
{
    int a[3][3]= {{22,7,365},{124,56,322},{12,77,43}};
    printf("original Matrix is \n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {

        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    printf("\ntransposed Matrix is \n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {

        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[j][i]);

        }
        printf("\n");
    }


    return 0;
}