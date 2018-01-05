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

//in 4 goc cua ma tran
void in_4goc()
{
  //khai bao bien
  int i;
  int j;

  printf("\nCac phan tu nam tren 4 goc cua ma tran la: \n");

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if((j==0||j==cot-1)&&(i==0 || i==hang-1))
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


//tinh tong cac phan tu tren duong cheo chinh
void tong_cheochinh()
{
  //khai bao bien
  int i;
  int j;

  int tong;
  tong=0;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if(i<=j)
      {
        tong=tong+M[i][j];
      }
    }
  }
  printf("\nTong cac phan tu tren duong cheo chinh la %d \n",tong);
}
//chuong trinh chinh
int main()
{
  nhap_hangcot();
  nhap_matran();
  in_matran();
  in_4goc();
  tong_cheochinh();
  //ket thuc chuong trinh
  //getch();
}
