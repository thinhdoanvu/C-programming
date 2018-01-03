#include<stdio.h>
//khai bao bien
int a,b,c;

//chuong trinh con
void nhapheso()
{
  //khai bao bien
  printf("Nhap he so a = ");
  scanf("%d",&a);
  printf("Nhap he so b = ");
  scanf("%d",&b);
  printf("Nhap he so c = ");
  scanf("%d",&c);
}
//giai pt bac 1
void ptb1(int n1, int n2)
{
  //khai bao bien
  if(n1==0)
  {
    printf("\npt vo nghiem\n");
  }
  else
  {
    printf("\nNghiem cua pt la: x= %d / %d \n",n2,n1);
  }
}
//giai phuong trinh bac 2
void ptb2(int n1, int n2, int n3)
{
  //khai bao bien
  int delta;
  
  printf("\nPhuong trinh co dang %dx^2 + %dx + %d = 0\n",n1,n2,n3);
    
  delta=pow(n2,2)-4*n1*n3;
  if(delta<0)
  {
    printf("\npt vo nghiem\n");
  }
  else
  {
    if(delta==0)
    {
      printf("\npt co nghiem kep x = -%d / 2*%d\n",n2,n1);
    }
    else
    {
      printf("\npt co doi nghiem phan biet \nx1 = -%d+sqrt(%d)/2*%d \nx2 = -%d-sqrt(%d)/2*%d\n",n2,delta,n1,n2,delta,n1);
    }
  }
}

//kiem tra dang phuong trinh
int is_bac2()
{
  //khai bao bien
  
  if(a==0)
  {
    ptb1(b,c);
  }
  else
  {
    ptb2(a,b,c);
  }
}
//chuong trinh chinh
int main()
{
  nhapheso();
  is_bac2();
  
  //ket thuc chuong trinh
  getch();
}
