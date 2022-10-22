#include<stdio.h>

int main()
{ int a,b;
    printf("enter two numbers as a range\n");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
     for(int j=1;j<=10;j++){
       printf("%d x %d= %d\n",i,j,i*j);
    }
    printf("\n\n");
    }
    return 0;
}