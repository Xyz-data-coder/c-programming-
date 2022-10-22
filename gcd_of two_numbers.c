#include<stdio.h>

int main()
{
    int a,b;
    int c=0;
    int d=0;
    int num=0;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    for(int i=0; i<=a; i++) {
        if(a%i==0) {
            c++;

        }
    }
    for(int i=0; i<=b; i++) {
        if(b%i==0) {
            d++;
        }
    }
    int arr1[c];
    int arr2[d];

    for(int i=0; i<=a; i++) {
        if(a%i==0 ) {
            arr1[num]=i;

            num++;
        }
    }
    num=0;
    for(int i=0; i<=b; i++) {
        if(b%i==0 ) {
            arr2[num]=i;

            num++;
        }
    }
    printf("factors of %d is :\n",a);
    for(int i=0; i<c; i++) {

        printf("%d ",arr1[i]);

    }
    printf("\n");
    printf("\nfactors of %d is :\n",b);
    for(int i=0; i<d; i++) {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    for(int i =0; i<=c; i++) {
        for(int j=0; j<=d; j++) {
            if(arr1[i]==arr2[j]) {
                num=arr1[i];
            }
        }
    }

    printf("\ngcd of %d and %d is : %d\n",a,b,num);
    return 0;
}