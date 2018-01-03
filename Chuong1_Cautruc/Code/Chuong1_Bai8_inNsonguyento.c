//Bai7_ Kiem tra 1 so co phai la so ngyen to hay khong
#include<stdio.h>

//khai bao bien
int N;

void nhapN()
{
  //khai bao bien
  
  printf("Nhap so can kiem tra = ");
  scanf("%d",&N); 
  
  while(N<0 || N<20 || N>100)
  {
    printf("Nhap so can kiem tra >0 = ");
    scanf("%d",&N); 
  }
} 

//chuong trinh con
int is_nguyento(int k)
{
  //khai bao bien
  int i;
  int dem;
  
  dem=0;
  
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
  int j;
  printf("\nCac so nguyen to co trong day so tu 1 - N la: \n");
  
  for(j=1;j<=N;j++)
  {
    if(is_nguyento(j)==2)
    {
      printf("%d\t",j);
    }  
    else
    {
      //khong lam gi ca
    }  
  }
}

//chuong trinh chinh
int main()
{
  nhapN();
  ketqua();
  //ket thuc chuong trinh
  getch();
}
