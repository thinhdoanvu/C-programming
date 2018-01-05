#include<stdio.h>
//khai bao bien
int N;

//chuong trinh con
void nhapN()
{
  printf("Nhap so toan hang =");
  scanf("%d",&N);
  while(N<10 || N>30)
  {
    printf("Nhap so toan hang =");
    scanf("%d",&N);
  }
}

//tinh tong fibonacy
void tongFibo()
{
  //khai bao bien
  int n1;
  int n2;
  int sum;
  long TONG;
  int i;

  printf("\nNhap so thu nhat = ");
  scanf("%d",&n1);
  printf("\nNhap so thu 2 = ");
  scanf("%d",&n2);

  sum=n1+n2;
  TONG=sum;//tong ban dau khi chua co day Fibonacy

  for(i=2;i<N;i++)
  {
    sum=n1+n2;
    TONG=TONG+sum;
    n1=n2;
    n2=sum;
  }

  printf("\nTong cua day so la %ld\n",TONG);
}

//chuong trinh chinh
int main()
{
  nhapN();
  tongFibo();
  //ket thuc chuong trinh
  //getch();
}
