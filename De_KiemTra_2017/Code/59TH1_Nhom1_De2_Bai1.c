#include<stdio.h>

//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  printf("\nNhap so toan hang can tinh = ");
  scanf("%d",&N);
}

long giaithua(int k)
{
  //khai bao bien
  int z;
  long gt;

  gt=1;
  for(z=1;z<=k;z++)
  {
    gt=gt*z;
  }
  return gt;
}

long luythua(int a, int b)
{
  //khai bao bien
  long lt;
  int t;

  lt=1;
  for(t=1;t<=b;t++)
  {
    lt=lt*a;
  }
  return lt;
}

//tinh tong
void tinhtong()
{
  //khai bao bien
  int i;
  long S;

  S=0;

  for(i=1;i<=N;i++)
  {
    S=S+luythua(-1,i)*giaithua(i);
  }

  //in ra ket qua
  printf("\nTong cua S = %ld\n",S);
}

//chuong trinh chinh
int main()
{
  nhapN();
  //printf("\nluy thua 2 cua N la %ld \n",luythua(2,N));
  tinhtong();
  //ket thuc chuong trinh
  //getch();
}

