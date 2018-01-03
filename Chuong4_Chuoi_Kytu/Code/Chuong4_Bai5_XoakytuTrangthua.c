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

void xoatrang()
{
  //khai bao bien
  int i;
  int next;
  
  char C[255];//chuoi copy
  int dem;
  
		i=0;
		next=0;
		dem=0;
		
  while(S[i]!='\0') //chua phai la ky tu ket thuc chuoi
  {
  	 if(S[i]==' ')//ky tu trang thu nhat
  	 {
 	 	  next=i+1;
 	 	  //kiem tra ky tu ke tiep co phai la ky tu ket thuc khong
 	 	  if(S[next]!='\0')
 	 	  {
 	 	  	 while(S[next]==' ' && S[next]!='\0')
 	 	  	 {
 	 	  	 	 if(S[next]==' ')//ky tu trang thu ke tiep
 	 	  	 	 {
 	 	  	 	 	 i++;//tiep tuc xet phan tu tiep theo
										}
										next++;//next tang cho bang i
								}
						}
				}
				C[dem]=S[i];//copy ky tu thu i tu chuoi S sang chuoi C
				dem++;
    i++;	
		}
		
		//xoa bo ky tu trang dau chuoi C neu co
		if(C[0]!='\0' && C[0]==' ') //chua phai la ky tu ket thuc chuoi
		{
			 //dich toan bo chuoi sang trai
			 for(i=0;i<strlen(C)-1;i++)
			 {
		 	  C[i]=C[i+1];
				}
			 dem--;
		}
		
		//in ra chuoi sau khi xoa
		printf("\nChuoi sau khi xoa tat cac cac ky tu trang lien ke nhau :\n");
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
  xoatrang();
  //ket thuc chuong trinh
  getch();
}
