#include<stdio.h>

//khai bao bien
char S[255];

//chuong trinh con
void nhapchuoi()
{
  printf("Nhap chuoi ky tu: ");
  gets(S);
}

//in ra so luong cac nguyen am
void inketqua()
{
  //khai bao bien
  int i;
  int n_a=0;
  int n_e=0;
  int n_i=0;
  int n_o=0;
  int n_u=0;

  i=0;
  while(S[i]!='\0')//chua phai la ky tu cuoi cung
  {
    if(S[i]=='a' || S[i]=='A')
    {
      n_a++;
    }
    if(S[i]=='e' || S[i]=='E')
    {
      n_e++;
    }
    if(S[i]=='i' || S[i]=='I')
    {
      n_i++;
    }
    if(S[i]=='o' || S[i]=='O')
    {
      n_o++;
    }
    if(S[i]=='u' || S[i]=='U')
    {
      n_u++;
    }
    i++;
  }

  //in ra ket qua
  printf("\nSo luong nguyen am a/(A) la: %d",n_a);
  printf("\nSo luong nguyen am e/(E) la: %d",n_e);
  printf("\nSo luong nguyen am i/(I) la: %d",n_i);
  printf("\nSo luong nguyen am o/(O) la: %d",n_o);
  printf("\nSo luong nguyen am u/(U) la: %d",n_u);
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  inketqua();
  //ket thuc chuong trinh
  //getch();
}
