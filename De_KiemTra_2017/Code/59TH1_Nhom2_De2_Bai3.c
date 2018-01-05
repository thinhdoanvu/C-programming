#include<stdio.h>

//khai bao bien
int h;
int begin;

//chuong trinh con
void nhapthamso()
{
  printf("Chieu cao = ");
  scanf("%d",&h);
  printf("So bat dau = ");
  scanf("%d",&begin);
}

//ve tam giac Floyd
void in_tamgiac()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<h;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%4d",begin++);
    }
    //xuong hang
    printf("\n");
  }
}

//chuong trinh chinh
int main()
{
  nhapthamso();
  in_tamgiac();
  //ket thuc chuong trinh
  //getch();
}
