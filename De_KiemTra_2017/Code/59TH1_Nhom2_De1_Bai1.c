#include<stdio.h>

//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  printf("\nSo toan hang = ");
  scanf("%d",&N);
  while(N<0 || N<7 || N>15)
  {
    printf("\nSo toan hang = ");
    scanf("%d",&N);
  }
}

//ham tinh luy thua
long luythua(int a, int b)
{
  //khai bao bien
  long lt;
  int z;

  lt=1;

  for(z=1;z<=b;z++)
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
    S=S+luythua(-1,i)*luythua(2,i);
  }

  //in ra tong tinh duoc
  printf("\nTong tim duoc la %ld\n",S);
}

//chuong trinh chinh
int main()
{
  nhapN();
  tinhtong();
  //ket thuc chuong
  //getch();
}
