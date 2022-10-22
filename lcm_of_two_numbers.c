#include<stdio.h>

int main()
{
    int a,b;
    int c=0;
    int d=0;
    int num=1,mul=1;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    for(int i=1; mul<=a*b; i++) {
        mul=a*i;
        c++;


    }
    mul=1;
    for(int i=1; mul<=a*b; i++) {

        mul=b*i;
        d++;

    }

    int arr1[c];
    int arr2[d];

    for(int i=0; a*i<=a*b; i++) {

        arr1[i]=a*num;

        num++;

    }
    num=1;
    for(int i=0; b*i<=a*b; i++) {

        arr2[i]=b*num;

        num++;
    }

    printf("multiples of %d is :\n",a);
    for(int i=0; i<c; i++) {

        printf("%d ",arr1[i]);

    }
    printf("....\n");
    printf("\nmultiples of %d is :\n",b);
    for(int i=0; i<d; i++) {
        printf("%d ",arr2[i]);
    }
    printf("....\n");

    for(int i =0; i<=c; i++) {
        for(int j=0; j<=d; j++) {
            if(arr1[i]==arr2[j]) {
                num=arr1[i];
                break;
            }
        }
        if(num==arr1[i]) {
            break;
        }
    }

    printf("\nlcm of %d and %d is : %d\n",a,b,num);
    return 0;
}