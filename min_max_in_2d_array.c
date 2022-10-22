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
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            if(arr[i][j]>a) {
                a=arr[i][j];
            }
        }
    }

    printf("max value is %d\n",a);
    a=2147483647;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            if(arr[i][j]<a) {
                a=arr[i][j];
            }
        }
    }
    printf("min value is %d\n",a);
    return 0;
}