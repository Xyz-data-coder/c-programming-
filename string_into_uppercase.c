#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]="Hyderabad";
    int n=strlen(arr);
    for(int i=0; i<n; i++) {
        int a=arr[i];
        if(a>96 && a<123) {
            char c=a-32;
            arr[i]=c;
        }

    }
    printf("%s",arr);
    return 0;
}