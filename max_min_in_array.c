#include<stdio.h>

int main()
{   int j;

    int a[]= {45,4890,7,15600,34,16,567,98004,20,75,2234,22};
    int num=sizeof(a)/sizeof(a[0]);
    int b[num];
    for(int i =0; i<num; i++) {
        b[i]=a[i];
    }
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        if(a[i]>a[i+1]) {
            a[i+1]=a[i];
            j=a[i+1];
        }
    }
    printf("%d\n",j);
    for(int i=0; i<num; i++) {
        if(b[i]<b[i+1]) {
            b[i+1]=b[i];
            j=b[i+1];
        }
    }
    printf("%d",j);

    return 0;
}