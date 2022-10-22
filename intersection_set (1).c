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
    printf("\n");
    printf("array 1 is :");
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
    int arr[add];
    int var =0;
    for(int i=0; i<num1; var++ ) {
        int c=0;
        for(int j=0; j<num; j++) {
            if(b[var]==a[j]) {
                c=1;
                break;
            }
        }
        if(c==1) {

            arr[i]=b[var];

            i++;
        }
    }
    printf("\nintersection is = ");
    for(int i=0; i<add; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}