#include<stdio.h>

int main()
{   int sum =0;
    int arr[]= {1,34,53,57,56,688,8856,97564,667,233};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++) {
        if(arr[i]%2!=0) {
            sum=sum+arr[i];
        }
    }
    printf("sum of odd elements is %d",sum);
    return 0;
}