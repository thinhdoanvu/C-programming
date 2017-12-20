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

//sap xep tang dam
void sapxeptang()
{
  //khai bao bien
  int i;
  int j;
  int tam;
  
  for(i=0;i<N-1;i++)
  {
    for(j=i+1;j<N;j++)
    {
      if(A[i]>A[j])
      {
        tam=A[i];
        A[i]=A[j];
        A[j]=tam;
      }
    }
  }
  printf("\nDay so sau khi sap xep tang dan: \n");
  inmang();
}

//chuong trinh chinh
int main()
{
  nhapN();
  nhapmang();
  inmang();
  sapxeptang();
  //ket thuc chuong trinh
  getch();
}
