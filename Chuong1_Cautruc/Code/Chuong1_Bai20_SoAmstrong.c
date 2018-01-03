#include<stdio.h>

//khai bao bien
int batdau;
int ketthuc;

//chuong trinh con
void nhapthongso()
{
  //khai bao bien
 
  printf("Nhap so bat dau tim kiem = ");
  scanf("%d",&batdau);
  printf("Nhap so ket thuc tim kiem = ");
  scanf("%d",&ketthuc);
}

//ham luy thua
int luythua(int coso, int somu)
{
  //khai bao bien
  int lt;
  int z;

  lt=1;

  for(z=0;z<somu;z++)
  {
    lt=lt*coso;
  }
  return lt;
}

//kiem tra 1 so co phai la so Amstrong
int is_Amstrong(int a)
{
  //khai bao bien

  int sokytu;
  int tam;

  tam=a;
  vitri=0;

  //dem xem co bao nhieu ky tu so trong so n. vi du: n=1234 thi so kytu =4
  while (tam!=0) 
  {
    sokytu++;
    tam=tam/10;
  }
  //tinh tong cua tung ky tu voi luy thua la so ky tu
  long tong;
  int du;

  tam=a;

  tong=0;
  while (tam!=0) //tinh tong cua cac ky so voi luy thua tai vi tri tim duoc
  {
    du=tam%10;
    tong=tong+luythua(du,sokytu);
    tam=tam/10;
    //printf("\n\n\ntong= %ld",tong);
   }

  if(a==tong)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void in_Amstrong()
{
  //khai bao bien
  int i;

  for(i=batdau;i<=ketthuc;i++)
  {
    if(is_Amstrong(i)==1)
    {
      printf("%d\n",i);
   }
  }
}

//chuong trinh chinh
int main()
{
  nhapthongso();
  in_Amstrong();
  //ket thuc chuong trinh
  getch();
}
