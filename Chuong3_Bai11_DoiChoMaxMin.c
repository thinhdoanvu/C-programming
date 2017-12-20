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

//tim vi tri hang va cot cua MAX
int MAX()
{
  //khai bao bien
  int max;
  int i;
  int j;

  max=A[0][0];
  vtmax_hang=0;
  vtmax_cot=0;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if(A[i][j]>max)
      {
        max=A[i][j];
        vtmax_hang=i;
        vtmax_cot=j;
      }
    }
  }
  return max;
}


//tim vi tri hang va cot cua MIN
int MIN()
{
  //khai bao bien
  int min;
  int i;
  int j;

  min=A[0][0];
  vtmin_hang=0;
  vtmin_cot=0;

  for(i=0;i<hang;i++)
  {
    for(j=0;j<cot;j++)
    {
      if(A[i][j]<min)
      {
        min=A[i][j];
        vtmin_hang=i;
        vtmin_cot=j;
      }
    }
  }
  return min;
}

//doi cho max va min
void doichoMAX_MIN()
{
  //khai bao bien
  int tam;
  MAX();
  MIN();
  tam=A[vtmax_hang][vtmax_cot];
  A[vtmax_hang][vtmax_cot]=A[vtmin_hang][vtmin_cot];
  A[vtmin_hang][vtmin_cot]=tam;

  printf("\nMang 2 chieu sau khi doi cho phan tu MAX = %d va phan tu MIN = %d la\n",MAX(),MIN());
  inphantu();
}


//chuong trinh chinh
int main()
{
  nhapso_hang_cot();
  nhapphantu();
  printf("\nCac phan tu co trong mang 2 chieu la: \n");
  inphantu();
  doichoMAX_MIN();
  //ket thuc chuong trinh
  //getch();
}
