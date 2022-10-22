#include<stdio.h>

int main()
{   int sum=0,arr[]= {3,2,11,34,45,22,17,56,29,77,90};

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        int num=0;
        for(int j=2; j*j<=arr[i]; j++) {
            if(arr[i]%j==0) {
                num=1;
                break;
            }
        }
        if(num==0 && arr[i]!=1) {
            sum++;
        }

    }
    printf("prime number count  is %d",sum);
    return 0;
}