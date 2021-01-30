/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float mang[40];
int N;

void nhapmang()
{
    do
    {
        printf("Nhap so phan tu N: ");
        scanf("%d",&N);
    }while(N<4 || N>40);
    
    int i;
    for(i=0; i<N; i++)
    {
        printf("mang[%d]= ",i);
        scanf("%f",&mang[i]);
    }
}

void inmang()
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%.3f\t",mang[i]);
    }
}

void cuctri()
{
    int i;
    float tong;
    
    tong=0.0;
    
    for(i=1;i<N;i++)
    {
        if((mang[i]<mang[i-1]&& mang[i]<mang[i+1]) || (mang[i]>mang[i-1]&& mang[i]>mang[i+1]))
        {
            printf("\n%.3f",mang[i]);
            tong=tong+mang[i];
        }
    }
    printf("\nTong cac phan tu cuc tri la: %.3f",tong);
}

int main()
{
    nhapmang();
    printf("Cac phan tu co trong mang vua nhap la: ");
    inmang();
    cuctri();
    return 0;
}
