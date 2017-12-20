#include<stdio.h>

//khai bao bien
int a,b,c;

//chuong trinh con
void nhap3so()
{
     //khai bao bien
     
     printf("Nhap so thu nhat = ");
     scanf("%d",&a);
     printf("Nhap so thu hai = ");
     scanf("%d",&b);
     printf("Nhap so thu ba = ");
     scanf("%d",&c);
     
     printf("a=%d\n",&a);
     printf("b=%d\n",&b);
     printf("c=%d\n",&c);
}

void timmax()
{
     //khai bao bien
     int max;
     
     max=a;
     if(max<b)
     {
       max=b;
     }
     if(max<c)
     {
       max=c;
     }
     
     //in ra so lon nhat
     printf("\nSo lon nhat la: %d",&max);
}

//chuong trinh chinh
int main()
{
    nhap3so();//nhap 3 so a b c tu ban phim
    timmax();//tim so lon nhat
    //ket thuc chuong trinh
    getch();
}
