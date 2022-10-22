#include<stdio.h>

int main()
{
    int a[3][2]= {{124,56},{77,43},{34,55}};
    int b[2][3]= {{23,2,47},{1,22,5}};
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
    if(sizeof(a[0])==sizeof(b[0]) && (sizeof(a)/sizeof(a[0]))==(sizeof(b)/sizeof(b[0]))){
    printf("\nsum of Matrix 1 and Matrix 2 is\n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            printf("%d ",a[i][j]+b[i][j]);

        }
        printf("\n");
    }
    }
    else{
     printf("\ndimensions mismatch\n"); 
    }
    return 0;
}