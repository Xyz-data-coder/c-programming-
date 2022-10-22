#include<stdio.h>

int main()
{
    int arr[]= {12,22,34,45,78,122,56};
    printf("given array is:\n");
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ",arr[i]);
    }
    printf("\nreversed array is:\n");
    for(int i=(sizeof(arr)/sizeof(arr[0]))-1; i>=0; i--) {
        printf("%d ",arr[i]);
    }
    return 0;
}