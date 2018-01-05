#include<stdio.h>

//khai bao bien
int hang;
int cot;
int M[5][5];

//chuong trinh con
void nhap_hangcot()
{
  printf("So hang = ");
  scanf("%d",&hang);
  printf("So cot = ");
  scanf("%d",&cot);
  while(hang <0 || cot <0 || hang!=cot)
  {
    printf("So hang = ");
    scanf("%d",&hang);
    printf("So cot = ");
    scanf("%d",&cot);
  }
}

//nhap cac phan tu
void nhap_matran()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      printf("M[%d,%d] = ",i,j);
      scanf("%d",&M[i][j]);
    }
  }
  printf("\nCac phan tu trong ma tran vua nhap la: \n");
}

//in cac phan tu
void in_matran()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      printf("%5d",M[i][j]);
    }
    //xuong hang
    printf("\n");
  }
}

//Tinh tong cua 1 cot bat ky
void tong_cot()
{
  //khai bao bien
  int i;
  int j;
  int c;
  int tong;

  printf("\nNhap cot can tinh tong = ");
  scanf("%d",&c);

  tong=0;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if(j==c)
      {
        tong=tong+M[i][j];
      }
    }
  }
  //in ra tong
  printf("\nTong cua cot thu %d la %d \n",c,tong);
}

//ham tim so nguyen to
int is_nguyento(int k)
{
  //khai bao bien
  int z;
  int dem;

  dem=0;
  for(z=1;z<=k;z++)
  {
    if(k%z==0)
    {
      dem++;
    }
  }
  return dem;
}

//in ra cac so nguyen to
void in_nguyento()
{
  //khai bao bien
  int i;
  int j;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if(is_nguyento(M[i][j])==2)
      {
       printf("%5d",M[i][j]);
      }
      else
      {
        printf("    *");
      }
    }
    //xuong hang
    printf("\n");
  }
}

//chuong trinh chinh
int main()
{
  nhap_hangcot();
  nhap_matran();
  in_matran();
  tong_cot();
  in_nguyento();
  //ket thuc chuong trinh
  //getch();
}
