#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];

//chuong trinh con
void nhapchuoi()
{
  printf("\nNhap vao chuoi van ban, ket thuc bang phim Enter \n");
  gets(S);
}

//dem so tu trong chuoi
void demkytutrang()
{
  int dem;
  int i;

  dem=1;
  i=0;

  while(S[i]!='\0') //chua phai la ky tu ket thuc
  {
    if(S[i]==' ')
    {
      dem++;
    }
    i++;//duyet qua ky tu tiep theo
  }

  //in ra ket qua
  printf("\nSo tu co trong chuoi vua nhap la: %d\n",dem);
}

int is_nguyenam(char c)
{
  switch(c)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      return 1;
    default:
      return 0;
  }
}

//Xoa cac nguyen am trong chuoi
void xoanguyenam()
{
  //khai bao bien
  int i;
  int count;
  char NA[255];

  i=0;
  while(S[i]!='\0')
  {
    if(is_nguyenam(S[i])==0)
    {
      NA[count]=S[i];
      count++;
    }
    i++;
  }

  //in ra day khong phai la nguyen am
   for(i=0;i<strlen(NA);)
  {
    printf("%c",NA[i]);
    i++;
  }
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  demkytutrang();
  xoanguyenam();
  //ket thuc chuong trinh
  //getch();
}
