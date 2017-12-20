#include<stdio.h>
#include<math.h>

//Bài 2. T=sqrt(2+sqrt(4+sqrt(8+sqrt(…+sqrt(n))))) 

//khai bao bien
int N;

//chuong trinh con nhap N
void nhapN()
{
  printf("So toan hang can thuc hien = ");
  scanf("%d",&N);
}

//chuong trinh con tinh tong S
void tinhtongT()
{
  //khai bao bien
  int i;
  float T;
  T=0;
  
  for(i=N;i>=1;i--)
  {
      T=sqrt(pow(2,i)+T);
  }
  printf("Tong cua day so la: %f",T);
}

//chuong trinh chinh
int main()
{
  nhapN();
  tinhtongT();
  getch();
}
