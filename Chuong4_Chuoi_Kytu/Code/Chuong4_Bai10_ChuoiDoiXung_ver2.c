#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];

//chuong trinh con
//nhap chuoi tu ban phim
void nhapchuoi()
{
  //khai bao bien
  printf("\nNhap chuoi ky tu = ");
  gets(S);
}

//xac dinh chuoi doi xung
void is_doixung()
{
  int i;
  int j;
  int n;
  n=strlen(S);
  //printf("Chieu dai cua chuoi la: %d",n);
  i=0;
  j=n-1;
  while((i<=j)&&(S[i]==S[j]))
  {
  	i++;
  	j--;
  }
  if(i>j)
  {
  	printf("Chuoi da cho la chuoi doi xung");
  }
  else
  {
  	printf("Chuoi da cho khong la chuoi doi xung");
  }
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  is_doixung();
  //ket thuc chuong trinh
  //getch();
}
