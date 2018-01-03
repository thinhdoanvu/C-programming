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

//tim 1 so co trong day so
int search(int k)
{
  //khai bao bien
  int j;
  int pos;

  for(j=0;j<N;j++)
  {
    if(A[j]==k)
    {
      pos=j;
      break;
    }
  }
  return pos;
}

void hoanvi_X_MIN()
{
  //khai bao bien
  int tam;
  int X;
  
  printf("\nNhap X= ");
  scanf("%d",&X);
  
  //hoan vi MIN cho X 
  tam=A[is_MIN()];
  A[is_MIN()]=X;
  A[search(X)]=tam;

  //in lai danh sach
  printf("\nDay so sau khi hoan doi X va MIN la \n");
  inmang();
}

//chuong trinh chinh
int main()
{
  nhapN();
  nhapmang();
  inmang();
  hoanvi_X_MIN();
  //ket thuc chuong trinh
  //getch();
}
