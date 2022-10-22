#include<stdio.h>
#include<string.h>

int main()
{ char c[50];
    scanf("%s",c);
    int j=1;
    for(int i=0;c[i]!='\0';i++){
     j++;
    }
    
    //printf("%d\n",strlen(c));
    //printf("%s\n",c);

    char temp;

    int n=strlen(c);
    int num=n-1;
    for(int i=0; i<j/2; i++) {

        temp= c[i];
        c[i]=c[num];
        c[num]=temp;
        num--;
    }
    for(int i=0; i<=n; i++) {
        printf("%c",c[i]);
    }




    return 0;
}