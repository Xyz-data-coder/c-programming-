#include<stdio.h>

int main()
{
    int a[3][3]= {{22,123,7},{456,322,10},{344667,67,10}};
    int b[3][6]= {{1234,486,98,78,34,5},{123,5,32,41,4444,9},{89,33,90,55,92,13}};

    printf("Matrix 1 is \n");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
        for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
            int ab=a[i][j],num=0;
            for(; ab>0; ab/=10) {
                num++;
            }
            if(num==10) {
                printf("%d ",a[i][j]);
            }
            else if(num==9) {
                printf("%d  ",a[i][j]);
            }
            else if(num==8) {
                printf("%d   ",a[i][j]);
            }
            else if(num==7) {
                printf("%d    ",a[i][j]);
            }
            else if(num==6) {
                printf("%d     ",a[i][j]);
            }
            else if(num==5) {
                printf("%d      ",a[i][j]);
            }
            else if(num==4) {
                printf("%d       ",a[i][j]);
            }
            else if(num==3) {
                printf("%d        ",a[i][j]);
            }
            else if(num==2) {
                printf("%d         ",a[i][j]);
            }
            else if(num==1) {
                printf("%d          ",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\nmatrix 2 is\n");
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++) {
        for(int j=0; j<sizeof(b[0])/sizeof(b[0][0]); j++) {
            int ab=b[i][j],num=0;
            for(; ab>0; ab/=10) {
                num++;
            }
            if(num==10) {
                printf("%d ",a[i][j]);
            }
            else if(num==9) {
                printf("%d  ",a[i][j]);
            }
            else if(num==8) {
                printf("%d   ",a[i][j]);
            }
            else if(num==7) {
                printf("%d    ",a[i][j]);
            }
            else if(num==6) {
                printf("%d     ",a[i][j]);
            }
            else if(num==5) {
                printf("%d      ",b[i][j]);
            }
            else if(num==4) {
                printf("%d       ",b[i][j]);
            }
            else if(num==3) {
                printf("%d        ",b[i][j]);
            }
            else if(num==2) {
                printf("%d         ",b[i][j]);
            }
            else if(num==1) {
                printf("%d          ",b[i][j]);
            }

        }
        printf("\n");
    }
    if((sizeof(a[0])/sizeof(a[0][0]))==(sizeof(b)/sizeof(b[0]))) {
        printf("\nmultiplication of Matrix 1 and Matrix 2 is\n");

        for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) {
            for(int c=0; c<sizeof(b[0])/sizeof(b[0][0]); c++) {
                int sum =0;
                for(int j=0; j<sizeof(a[0])/sizeof(a[0][0]); j++) {
                    int num=a[i][j]*b[j][c];
                    sum=sum+num;
                }
                int ab=sum,num1=0;
                for(; ab>0; ab/=10) {
                    num1++;
                }
                if(num1==10) {
                    printf("%d ",sum);
                }
                else if(num1==9) {
                    printf("%d  ",sum);
                }
                else if(num1==8) {
                    printf("%d   ",sum);
                }
                else if(num1==7) {
                    printf("%d    ",sum);
                }
                else if(num1==6) {
                    printf("%d     ",sum);
                }
                else if(num1==5) {
                    printf("%d      ",sum);
                }
                else if(num1==4) {
                    printf("%d       ",sum);
                }
                else if(num1==3) {
                    printf("%d        ",sum);
                }
                else if(num1==2) {
                    printf("%d         ",sum);
                }
                else if(num1==1) {
                    printf("%d          ",sum);
                }

            }
            printf("\n");
        }
    }
    else {
        printf("\ndimensions mismatch\n");
    }
    return 0;
}