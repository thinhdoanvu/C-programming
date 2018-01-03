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
  printf("\nChuoi vua nhap la: \n");
}  
  //in ra chuoi vua nhap
void inchuoi()  
{
  //khai bao bien
  int i;
  
  for(i=0;i<strlen(S);i++)
  {
 	  printf("%c",S[i]);
		}
}

void demtu()
{
  //khai bao bien
  int i;
  int word;
  
  word=1;
  
  i=0;
  while(S[i]!='\0') //chua phai la ky tu ket thuc chuoi
  {
  	if(S[i]==' ')
  	{
 		  word++;
			}
    i++;	
		}
		printf("\nSo tu cua chuoi la: %d\n",word);
}
//chuong trinh chinh
int main()
{
  nhapchuoi();
  inchuoi();
  demtu();
  //ket thuc chuong trinh
  getch();
}
