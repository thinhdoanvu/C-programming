#include<stdio.h>
//khai bao bien
int hang, cot;
int A[4][4];

int vtmin_hang;
int vtmin_cot;
int vtmax_hang;
int vtmax_cot;

//chuong trinh con
void nhapso_hang_cot()
{
  //khai bao bien
  printf("Nhap so hang cua ma tran = ");
  scanf("%d",&hang);
  printf("Nhap so cot cua ma tran = ");
  scanf("%d",&cot);
  while(hang<0 || cot<0 || hang>4 || cot >4 || hang!=cot)
  {
    printf("Nhap so hang cua ma tran = ");
    scanf("%d",&hang);
    printf("Nhap so cot cua ma tran = ");
    scanf("%d",&cot);
  }
}

//nhap vao cac phan tu cho ma tran
void nhapphantu()
{
  //khai bao bien
  int i;
  int j;
  for(i=0; i<hang; i++)
  {
    for(j=0; j<cot; j++)
    {
      printf("A[%d,%d] = ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
}

//in ra cac phan tu cua ma tran
void inphantu()
{
  //khai bao bien
  int i;
  int j;
  for(i=0; i<hang; i++)
  {
    for(j=0; j<cot; j++)
    {
      printf("%5d",A[i][j]);
    }
    //xuong hang ke tiep
    printf("\n");
  }
}

//in ra ma tran chuyen vi
//doi cho hang va cot
//00 01 02              00  10  20
//10 11 12         ==>  01  11  21
//20 21 22              02  12  22
void chuyenvi()
{
  //khai bao bien
  int i;
  int j;
  int tam;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<i;j++)
    {
      //doi cho 2 phan tu
      tam=A[i][j];
      A[i][j]=A[j][i];
      A[j][i]=tam;
    }
  }
  printf("\nMa tran chuyen vi tu ma tran dau vao la: \n");
  inphantu();
}
//chuong trinh chinh
int main()
{
  nhapso_hang_cot();
  nhapphantu();
  printf("\nCac phan tu co trong mang 2 chieu la: \n");
  inphantu();
  chuyenvi();
  //ket thuc chuong trinh
  //getch();
}
