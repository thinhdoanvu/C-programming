#include<stdio.h>

//khai bao bien
int N;
int n1;
int n2;

void nhap()
{
  //khai bao bien
  //nhap so phan tu cua day
  printf("So phan tu cua day = ");
  scanf("%d",&N);
  while(N<7 || N<=2 || N>20)
  {
    printf("\nN phai thoa dieu kien 7<=N<=20\n");
    printf("So phan tu cua day = ");
    scanf("%d",&N);
  }
  printf("\nPhan tu thu nhat cua day so = ");
  scanf("%d",&n1);
  printf("\nPhan tu thu hai cua day so = ");
  scanf("%d",&n2);
}

void tinhtong()
{
  //khai bao bien
  int i;
  int tong;
  int sum;

  tong=n1+n2;

  for(i=0;i<=N-2;i++)
  {
    sum=n1+n2;
    n1=n2;
    n2=sum;
    tong=tong+sum;
    printf("tong = %d\n",tong);
  }

  printf("\nTong cua day so la: %d \n",tong);
}

//chuong trinh chinh
int main()
{
  nhap();
  tinhtong();
  //getch();
}
