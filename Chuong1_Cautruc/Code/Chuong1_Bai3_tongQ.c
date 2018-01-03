//Bai 3. Q=1/2+2/3+3/4+...+(n-1)/n

#include<stdio.h>

//khai bao bien
int n;

//chuong trinh con
void nhapn()
{
  //khai bao bien
  printf("Nhap vao so N = ");
  scanf("%d",&n);
}
//tim ucln cua 2 so
int ucln(int n1, int n2)
{
  //khai bao bien
  while(n1!=n2)
  {
    if(n1>n2)
    {
      n1=n1-n2;
    }
    else
    {
      n2=n2-n1;
    }
  }
  return n1;
}

//tinh tong cua Q 
void tinhtong()
{
  //khai bao bien
  float Q;
  float i;
  
  Q=0;
  for(i=1;i<=n;i++)
  {
    Q=Q+i/(i+1);
  }
  printf("\nTong cua day so la %f \n",Q);
}

//chuong trinh chinh
int main()
{
  nhapn();
  tinhtong();
  //ket thuc chuong trinh
  getch();
}
