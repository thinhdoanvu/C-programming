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

int is_nguyenam(char c)
{
  //khai bao bien
  
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

void xoanguyenam()
{
  //khai bao bien
  int i;
  int dem;
  char C[255];
  
  i=0;
  dem=0;
  while(S[i]!='\0') //chua phai la ky hieu ket thuc chuoi
  {
  	 //Tim cac ky tu khong phai la nguyen am
				if(is_nguyenam(S[i])==0)
				{
      //copy cac ky tu tu chuoi S sang chuoi C
      C[dem]=S[i];
      dem++;
				} 
 	  i++;
		}
		
		printf("\nChuoi moi sau khi xoa tat cac cac nguyen am la: \n");
		//in lai chuoi C
		for(i=0;i<dem;i++)
		{
		  printf("%c",C[i]);
		}
}


//chuong trinh chinh
int main()
{
  nhapchuoi();
  inchuoi();
  xoanguyenam();
  //ket thuc chuong trinh
  getch();
}
