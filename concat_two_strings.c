#include<stdio.h>

int main()
{
    char arr1[]="Rufus";
    char arr2[]="dgfjd";
    int num1=0;
    int num2=0;
    for(int i=0; arr1[i]!='\0'; i++) {
        num1++;
    }

    for(int i=0; arr2[i]!='\0'; i++) {
        num2++;
    }

    char arr[num1+num2+1];
    int j;
    for(j=0; arr1[j]!='\0'; j++) {
        arr[j]=arr1[j];
    }
    for(int i=0; arr2[i]!='\0'; i++) {
        arr[j]=arr2[i];
        j++;
    }
    printf("%s",arr);
    return 0;
}