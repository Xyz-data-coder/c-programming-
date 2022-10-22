#include<stdio.h>

int main()
{
    int a=100000;
    int flag;
    for(int i=1; i<=a; i++) {
        flag=1;
        for(int i1=2; i1<i; i1++) {
            if(i%i1==0) {
                flag=0;
                break;
            }

        }
        if(flag==1 && i!=1) {
            printf("%d ",i);
        }
    }
    return 0;
}