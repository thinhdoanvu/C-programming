#include<stdio.h>
//khai bao bien
int k;
int n;

//chuong trinh con
void nhapthamso()
{
  printf("Nhap he so n = ");
  scanf("%d",&n);
  printf("Nhap he so k = ");
  scanf("%d",&k);
}

//tinh giai thua cua 1 so
long giaithua(int z)
{
  //khai bao bien
  int i;
  long giaithua;

  giaithua=1; 

  for(i=1;i<=z;i++)
  {
    giaithua=giaithua*i;
  }
  return giaithua;
}

//Tinh to hop n chap k
long Tohop_n_chap_k(int a, int b)
{
  //khai bao bien
   
  return giaithua(a)/(giaithua(b)*giaithua(a-b));
}

//in ra ket qua
void inketqua()
{
  //khai bao bien
  printf("\nTo hop cua %d chap %d la: %ld\n",n,k,Tohop_n_chap_k(n,k));
}

//chuong trinh chinh
int main()
{
  nhapthamso();
  inketqua();
  //ket thuc chuong trinh
  getch();
}
