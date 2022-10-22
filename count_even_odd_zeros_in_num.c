#include<stdio.h>

int main()
{
    int a,rev;
    int even=0;
    int odd=0;
    int zero=0;
    printf("enter the number\n");
    scanf("%d",&a);
    for(; a>0; a/=10) {
        rev=a%10;

        if(rev%2==0 && rev!=0) {
            even++;
        }
        else if(rev%2!=0) {
            odd++;
        }
        else if(rev==0) {
            zero++;
        }
    }
    printf("cout of even numbers is %d \n",even);
    printf("cout of odd numbers is %d \n",odd);
    printf("cout of zero numbers is %d \n",zero);
    return 0;
}