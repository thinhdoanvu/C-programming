#include<stdio.h>

//khai bao bien
int a1,a2,b1,b2,c1,c2;

//chuong trinh con
void nhapheso()
{
  //khai bao bien
  printf("nhap cac he so cho he phuong trinh co dang nhu sau: \n");
  printf("a1x + b1y =c1\n");
  printf("a2x + b2y =c2\n");
  
  printf("nhap a1 = ");
  scanf("%d",&a1);
  printf("nhap b1 = ");
  scanf("%d",&b1);
  printf("nhap c1 = ");
  scanf("%d",&c1);
  printf("nhap a2 = ");
  scanf("%d",&a2);
  printf("nhap b2 = ");
  scanf("%d",&b2);
  printf("nhap c2 = ");
  scanf("%d",&c2);
}

//tinh delta
int delta(int x1, int x2, int y1, int y2)
{
  //khai bao bien
  return x1*y2-x2*y1;
}

//giai he phuong trinh
void ketqua()
{
  //khai bao bien
  float x,y;
  float d, dx, dy;
  
  printf("\nHe phuong trinh co dang: \n");
  printf("%dx + %dy = %d\n",a1,b1,c1);
  printf("%dx + %dy = %d\n",a2,b2,c2);
  
  d=delta(a1,a2,b1,b2);
  dx=delta(c1,c2,b1,b2);
  dy=delta(a1,a2,c1,c2);
  
  if(d==0)
  {
    printf("\nHe phuong trinh vo nghiem\n");
  }
  else
  {
    if(dx==0 && dy==0)
    {
      printf("\nHe phuong trinh vo so nghiem\n");
    }
    else
    {
      x=dx/d;
      y=dy/d;
      printf("\nNghiem cua he phuong trinh la (%f, %f)\n",x,y);
    }
  }
}

//chuong trinh chinh
int main()
{
  nhapheso();
  ketqua();
  //ket thuc chuong trinh
  getch();
}
