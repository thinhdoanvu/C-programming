#include<stdio.h>

//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  //khai bao bien

  printf("Nhap so toan hang = ");
  scanf("%d",&N);
  while(N<7 || N>10)
  {
    printf("\nSo toan hang 7<=N<=10\n");
    printf("Nhap so toan hang = ");
    scanf("%d",&N);
  }
}

//tinh giai thua
int giaithua(int k)
{
  //khai bao bien
  int i;
  int giaithua;
  
  giaithua=1;

  for(i=1; i<=k; i++)
  {
    giaithua=giaithua*i;
  }
  return giaithua;
}

//in ket qua
void ketqua()
{
  //khai bao bien
  int j;
  long int tong;

  tong=0;

  for(j=1;j<=N;j++)
  {
    tong=tong+giaithua(j);
  }
  printf("\nTong cua N giai thua la: %ld \n",tong);
}

//chuong trinh chinh
int main()
{
  nhapN();
  ketqua();
  //printf("%d",giaithua(10));
  //getch();
}
