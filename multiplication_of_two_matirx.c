#include<stdio.h>

int main()
{
    int a[2][2]= {{22,7},{322,10}};
    int b[2][6]= {{12,5,32,41,4,9},{89,33,90,55,92,13}};

    printf("Matrix 1 is \n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    printf("\nmatrix 2 is\n");
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++) {
        for(int j=0; j<sizeof(b[0])/sizeof(b[0][0]); j++) {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }
    if((sizeof(a[0])/sizeof(a[0][0]))==(sizeof(b)/sizeof(b[0]))) {
        printf("\nmultiplication of Matrix 1 and Matrix 2 is\n");

        for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
            for(int c=0; c<sizeof(b[0])/sizeof(b[0][0]); c++) {
                int sum =0;
                for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
                    int num=a[i][j]*b[j][c];
                    sum=sum+num;
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else {
        printf("\ndimensions mismatch\n");
    }
    return 0;
}