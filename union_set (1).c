#include<stdio.h>

int main()
{   int num,num1;

    printf("enter size for array 1\n");
    scanf("%d",&num);
    int a[num];
    for(int i=0; i<num; i++) {
        printf("enter value in array 1[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter size for array 2\n");
    scanf("%d",&num1);
    int b[num1];
    for(int i=0; i<num1; i++) {
        printf("enter value in array 2[%d]: ",i);
        scanf("%d",&b[i]);
    }
    printf("\narray 1 is :");
    for(int i =0; i<num; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("array 2 is :");
    for(int i =0; i<num1; i++) {
        printf("%d ",b[i]);
    }
    int add=0;
    for(int i=0; i<num1; i++) {
        for(int j=0; j<num; j++) {
            if(b[i]==a[j]) {
                add++;
                break;
            }
        }
    }
    int arr[num+(num1-add)];
    for(int i=0; i<num; i++) {
        arr[i]=a[i];
    }
    int ab=num;
    for(int i=0; i<num1; i++) {
        int c=0;
        for(int j=0; j<num; j++) {
            if(b[i]==a[j]) {
                c=1;
                break;
            }
        }
        if(c==0) {

            arr[ab]=b[i];
            ab++;

        }
    }
    printf("\nunion is = ");
    for(int i=0; i<num+(num1-add); i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}