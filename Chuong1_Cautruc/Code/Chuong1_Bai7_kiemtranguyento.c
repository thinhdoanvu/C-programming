//Bai7_ Kiem tra 1 so co phai la so ngyen to hay khong
#include<stdio.h>

//khai bao bien
int N;

//chuong trinh con
int is_nguyento(int k)
{
  //khai bao bien
  int i;
  int dem;
  
  for(i=1;i<=k;i++)
  {
    if(k%i==0)
    {
      dem++;
    }
  }
  return dem;
}

void ketqua()
{
  //khai bao bien
  
  printf("Nhap so can kiem tra = ");
  scanf("%d",&N); 
  
  while(N<0)
  {
    printf("Nhap so can kiem tra >0 = ");
    scanf("%d",&N); 
  }
  
  if(is_nguyento(N)==2)
  {
    printf("%d la so nguyen to",N);
  }  
  else
  {
    printf("%d khong phai la so nguyen to",N);
  }
}

//chuong trinh chinh
int main()
{
  ketqua();
  //ket thuc chuong trinh
  getch();
}
