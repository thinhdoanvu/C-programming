#include<stdio.h>

//Doi so he 10 sang he 2x
//khai bao bien
long int N;
int du[16];
int dem;

//chuong trinh con
void nhap()
{
     //khai bao bien
     printf("Nhap so nguyen duong: ");
     scanf("%d",&N);
}

void chau()
{
     //khai bao bien
     
     dem=0;
     
     while(N>0)
     {
       du[dem]=N%2;
       N=N/2;
       dem++;
     }
}

void kq()
{
     //khai bao bien
     int i;
     
     for(i=dem-1;i>=0;i--)
     {
       printf("%d",du[i]);     
     }
}

//chuong trinh chinh
int main()
{
  nhap();
  chau();
  kq();
  getch();
}
