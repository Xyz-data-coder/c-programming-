#include<stdio.h>

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int arr[a];
    printf("\nfibonacci series is:\n");
    for(int i=0; i<a; i++) {
        if(i==0) {
            arr[i]=0.0;
        }
        else if(i==1) {
            arr[i]=1.0;
        }
        else {
            arr[i]=arr[i-1]+arr[i-2];
        }
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}