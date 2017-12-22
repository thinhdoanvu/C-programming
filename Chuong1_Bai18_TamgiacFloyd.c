#include<stdio.h>

//khai bao bien
int h;
int batdau;

//chuong trinh con
void nhapthongso()
{
  //khai bao bien
 
  printf("Nhap chieu cao cua tam giac = ");
  scanf("%d",&h);
  printf("Nhap so bat dau =  ");
  scanf("%d",&batdau);
}

void intamgiac()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<=h;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%3d",batdau);
      batdau++;
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
