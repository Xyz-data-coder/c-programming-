#include<stdio.h>

int main()
{
    char c[50];
    printf("enter the string\n");
    gets(c);
    int a=0;
    for(int i=0; c[i]!='\0'; i++) {
        a++;
    }

    for(int i=0; i<a; i++) {
        int k1=1;
        for(int j=0; j<a-i-1; j++) {
            if(c[i]==c[i+j+1]) {
                k1++;
            }
        }
        int n=1;
        for(int k=0; k<i; k++) {
            if(c[k]==c[i]) {
                n=0;
            }
        }
        if(n && (int)c[i]!=32) {
            printf("%c : %d\n",c[i],k1);
        }
    }
    return 0;
}