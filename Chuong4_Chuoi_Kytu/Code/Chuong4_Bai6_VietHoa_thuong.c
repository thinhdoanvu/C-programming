#include<stdio.h>
#include<string.h>

//khai bao bien
char S[255];

//chuong trinh con
void nhapchuoi()
{
  //khai bao bien
  printf("Nhap vao chuoi ky tu: \n");
  gets(S);
  printf("\nChuoi ky tu vua nhap la: \n");
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

//in chuoi viet HOA
void INHOA()
{
  //khai bao bien
  int i;
  
  i=0;
  while(S[i]!='\0') //chua phai la ky tu ket thuc
  {
    if(S[i]>='a' && S[i]<='z')
				{
					 S[i]=S[i]-32;//chuyen ma ASCII tu thuong sang hoa (A=56 , a=97 => thuong sang hoa co khoang cach la 32 ky tu trang
				}	
				i++;
		}
		
		printf("\nChuoi sau khi in hoa la \n%s",S);
}

//in thuong chuoi ky tu
void inthuong()
{
	 //khai bao bien
	 int i;
	 
	 i=0;
	 while(S[i]!='\0')
	 {
	   if(S[i]>='A' && S[i]<='Z')	
	   {
	   	 S[i]=S[i]+32;
	     	
				}
				i++;
		}
		
		printf("\nChuoi sau khi viet thuong la \n%s",S);
}


//chuong trinh chinh
int main()
{
  nhapchuoi();
  inchuoi();
  INHOA();
  inthuong();
  //ket thuc chuong trinh
  getch();
}
