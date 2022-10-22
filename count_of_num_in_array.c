#include<stdio.h>

int main()
{int a,num=0,arr[]={22,34,45,22,333,22,56,77,89,90};
    printf("enter the number\n");
    scanf("%d",&a);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
       if(a==arr[i]){
      num++;
    }
    }
    printf("count of number is %d",num);
    return 0;
}