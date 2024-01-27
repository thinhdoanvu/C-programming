#include<stdio.h>

//khai bao bien
int a;
int b;
int s;
int main(){
    //chuong trinh chinh
    //nhap so a,a
    printf("nhap so thu nhat:");
    scanf("%d",&a);
    printf("nhap so thu hai:");
    scanf("%d",&b);
    printf("%d ",a);
    printf("%d ",b);
    for(int i=1;i<=6;i++){
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
}