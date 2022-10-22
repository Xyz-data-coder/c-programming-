#include<stdio.h>
int main() {
    int arr[]= {2,3,41,5};
    int i1;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        i1=1;
        for(int num=0; num<n-i-1; num++) {
            int c;
            if(arr[num]>arr[num+1]) {
                c=arr[num];
                arr[num]=arr[num+1];
                arr[num+1]=c;
                i1=0;

            }

        }

        if(i1==1) {
            break;
        }
        printf("pass number %d\n",i+1);
    }
    for(int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }


    return 0;
}

