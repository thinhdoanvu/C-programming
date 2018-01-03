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

//kiem tra 1 so co la boi cua 3
int is_sochan(int k)
{
  //khai bao bien
  if(k%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

//in ra day so la so chan
void insochan()
{
  //khai bao bien
  int i;
  
    printf("\nDay so chan la tru so 0: \n");
  for(i=0;i<N;i++)
  {
    if(is_sochan(A[i])==0 && A[i]!=0)
    {
      printf("%4d",A[i]);
    }
  }
}

//chuong trinh chinh
int main()
{
  nhapN();
  nhapmang();
  inmang();
  insochan();
  //ket thuc chuong trinh
  getch();
}
