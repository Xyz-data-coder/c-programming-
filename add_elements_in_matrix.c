#include<stdio.h>

int main()
{
    int arr[3][3]= {{22,7,365},{124,56,322},{12,77,43}};
    int sum =0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            sum=sum+arr[i][j];

        }
    }
    printf(" sum of elements in Matrix is: %d\n",sum);

    sum=0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        for(int j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++) {
            if(arr[i][j]%2==0) {
                sum=sum+arr[i][j];
            }
        }
    }
    printf(" sum of all even elements in Matrix is: %d\n",sum);

    return 0;
}