#include<stdio.h>

int main()
{
    int arr[3][3]= {{22,7,365},{124,56,322},{12,77,43}};
    int a=0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=i; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            a=a+arr[i][j];
        }
    }

    printf("sum of upper triangular Matrix elements is: %d\n",a);
    a=0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=i; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            if(j==i) {
                a=a+arr[i][j];
            }
        }
    }

    printf("sum of diagonal elements of Matrix is: %d\n",a);
    return 0;
}