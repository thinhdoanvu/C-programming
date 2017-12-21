#include<stdio.h>
#include<string.h>

//khai bao bien
char S[30];

//chuong trinh con
void nhapchuoi()
{
  //khai bao bien
  printf("\nNhap vao chuoi ky tu: \n");
  gets(S);
  //in ra chuoi vua nhap
  printf("\nChuoi vua nhap la: \n");
  puts(S);
}

void inchuoi_nguoc()
{
  //khai bao bien
  int i;
  int leng;

  leng=strlen(S);

  for(i=leng-1;i>=0;i--)
  {
    printf("%c",S[i]);
  }
}
//chuong trinh chinh
int main()
{
  nhapchuoi();
  inchuoi_nguoc();
  //ket thuc chuong trinh
  getch();
}
