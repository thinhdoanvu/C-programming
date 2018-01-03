#include<stdio.h>

//khai bao bien
int h;

//chuong trinh con
void nhapchieucao()
{
  printf("Chieu cao cua hinh can ve = ");
  scanf("%d",&h);
  while(h%2==0)
  {
    printf("\nChieu cao cua hinh phai la so le\n"); 
    printf("Chieu cao cua hinh can ve = ");
    scanf("%d",&h);
  }
}

void vehinhthoi()
{
  //khai bao bien
  int i;
  int j;
  int k;

  //ve nua tren cua hinh
  for(i=0;i<=h/2;i++)
  {
    //ve khoang trang
   for(j=0;j<h/2-i;j++)
   {
     printf(" ");
   }
    //ve dau *
    for(k=0;k<2*i+1;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }

  //ve nua duoi cua hinh
  for(i=h/2+1;i<=h;i++)
  {
    //ve khoang trang
    for(j=h/2+1;j<=i;j++)
    {
      printf(" ");
    }
    //ve dau *
    for(k=0;k<2*(h-i)-1;k++)
    {
      printf("*");
    }
    //xuong hang
    printf("\n");
  }
}

//chuong trinh chinh
int main()
{
  nhapchieucao();
  vehinhthoi();
  //ket thuc chuong trinh
  getch();
}
