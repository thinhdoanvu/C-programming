#include<stdio.h>
//Nhap danh sach cac phan tu cho mang 1 chieu va in ra cac phan tu da nhap

//khai bao bien
int N;
int A[10];

//chuong trinh con
void nhapN()
{
  //khai bao bien
  printf("Nhap so phan tu cua mang = ");
  scanf("%d",&N);
  while(N<0 || N>10)
  {
    printf("So phan tu cua mang nam trong khoang tu 1 den N");
    printf("Nhap so phan tu cua mang = ");
    scanf("%d",&N);
  }
}

//nhap cac phan tu cho mang
void nhapmang()
{
  //khai bao bien
  int i;
  
  for(i=0; i<N;i++)
  {
    printf("A[%d] = ",i);
    scanf("%d",&A[i]);
  }
}

//in ra cac phan tu cua mang da nhap
void inmang()
{
  //khai bao bien
  int i;
  
  printf("\nCac phan tu trong mang da nhap la: \n");
  for(i=0; i<N;i++)
  {
    printf("%4d",A[i]);
  }
}

//Tim so MAX
int is_MAX()
{
  //khai bao bien
  int MAX;
  int i;
  int vtriMAX;
  
  MAX=A[0];
  for(i=1;i<N;i++)
  {
    if(MAX<A[i])
    {
      MAX=A[i];
      vtriMAX=i;
    }
  }
  return vtriMAX;
}

//Tim so MIN
int is_MIN()
{
  //khai bao bien
  int MIN;
  int i;
  int vtriMIN;
  
  MIN=A[0];
  for(i=1;i<N;i++)
  {
    if(MIN>A[i])
    {
      MIN=A[i];
      vtriMIN=i;
    }
  }
  return vtriMIN;
}

//in ra so lon nhat va nho nhat

void inMIN_MAX()
{
  //khai bao bien
  
  printf("\nSo lon nhat trong day so la %d tai vi tri %d\n",A[is_MAX()],is_MAX());
  printf("\nSo nho nhat trong day so la %d tai vi tri %d\n",A[is_MIN()],is_MIN());
}

//chuong trinh chinh
int main()
{
  nhapN();
  nhapmang();
  inmang();
  inMIN_MAX();
  //ket thuc chuong trinh
  getch();
}
