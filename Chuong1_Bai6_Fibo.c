#include<stdio.h>

//khai bao bien
int N;
int num1;
int num2;

//chuong trinh con
void nhapthamso()
{
  printf("Nhap so phan tu cua day Fibonaccy = ");
  scanf("%d",&N);
  while(N<2)
  {
    printf("Nhap so phan tu cua day Fibonaccy phai >2 ");
    printf("Nhap so phan tu cua day Fibonaccy = ");
    scanf("%d",&N);
  }
  printf("Nhap phan tu thu 1 = ");
  scanf("%d",&num1);
  printf("Nhap phan tu thu 2 = ");
  scanf("%d",&num2);
}

void indayFibonaccy()
{
  //khai bao bien
  int i;
  int sum;
  
  printf("%3d%3d",num1,num2);
  
  for(i=2;i<N;i++)
  {
    sum=num1+num2;
    printf("%3d",sum);
    num1=num2;
    num2=sum;;
  }
}
//chuong trinh chinh
int main()
{
  nhapthamso();
  indayFibonaccy();
  getch();
}
