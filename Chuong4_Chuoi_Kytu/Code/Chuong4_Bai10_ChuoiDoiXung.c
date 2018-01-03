#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];

//chuong trinh con
//nhap chuoi tu ban phim
void nhapchuoi()
{
  //khai bao bien
  printf("\nNhap chuoi ky tu = \n");
  gets(S);
}

//xac dinh chuoi doi xung
void is_doixung()
{
  //khai bao bien
  int dau, giua, cuoi, chieudai;

  chieudai=0;
  while(S[chieudai]!='\0') //chua phai la ky tu ket thuc
  {
    chieudai++;
  }

  cuoi=chieudai-1;
  giua=chieudai/2;
  
  //kiem tra lan luot tung ky tu, dau vs cuoi, dau+1 vs cuoi-1
  for(dau=0;dau<giua;dau++)
  {
    if(S[dau]!=S[cuoi])
    {
      printf("\nChuoi vua nhap khong phai la chuoi doi xung\n");
      break;
    }
    else
    {
      cuoi--;
    }
  }

  //khi nao thi ket luan chuoi co doi xung hay khong
  if(dau==giua)//neu dau tang den khi = giua
  {
    printf("\nChuoi vua nhap la chuoi doi xung\n");
  }
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  is_doixung();
  //ket thuc chuong trinh
  getch();
}
