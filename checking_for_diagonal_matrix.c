#include<stdio.h>

int main()
{   int a,b;
    printf("enter the size of square matrix\n");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int num;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {

        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            printf("enter value for matrix[%d][%d]): \n",i,j);
            scanf("%d",&arr[i][j]);

        }
        printf("\n");
    }

    printf("Matrix is\n");
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {

        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {

        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {


            if(j!=i) {
                if(arr[i][j]==0) {
                    num=1;
                }
                else {
                    num=0;
                    break;
                }
            }

        }
        if(num==0) {
            break;
        }
    }
    if(num) {
        printf("\nit is a diagonal matrix\n");
    }
    else {
        printf("\nit is not a diagonal matrix\n");
    }
    return 0;
}