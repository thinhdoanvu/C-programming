#include<stdio.h>

//khai bao bien
int h;

//chuong trinh con
void nhapthongso()
{
  //khai bao bien
 
  printf("Nhap chieu cao cua tam giac = ");
  scanf("%d",&h);
}

//tinh giai thua
long giaithua(int k)
{
  //khai bao bien
  int gt;
  int i;

  gt=1;
  for(i=1;i<=k;i++)
  {
    gt=gt*i;
  }
  return gt;
}

void intamgiac()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<=h;i++)
  {
    //in dau cach
    for(j=0;j<=h-i;j++)
    {
      printf(" ");
    }
    //in cac he so
    for(j=0;j<=i;j++)
    {
      printf("%ld ",giaithua(i)/(giaithua(j)*giaithua(i-j)));
    }   
    //xuong hang
    printf("\n");
  }
}

//chuong trinh chinh
int main()
{
  nhapthongso();
  intamgiac();
  //ket thuc chuong trinh
  getch();
}
