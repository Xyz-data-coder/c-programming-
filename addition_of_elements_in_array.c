#include<stdio.h>

int main()
{   int num,sum=0;
    printf("enter number as a size of array\n");
    scanf("%d",&num);
    int a[num];
    for(int i=0; i<num; i++) {
        printf("enter number at a[%d]\n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<num; i++) {
        sum =sum+a[i];
    }
    printf("sum of elements is %d\n",sum);
    return 0;
}