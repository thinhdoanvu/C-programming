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

void substring()
{
	 //khai bao bien
	 char s[255];
	 int batdau;
	 int chieudai;
	 int dem;
	 
	 printf("\nVi tri cat chuoi la: \n");
	 scanf("%d",&batdau);
	 printf("\nChieu dai can cat la: \n");
	 scanf("%d",&chieudai);
	 
	 dem=0;
	 while(dem<chieudai)
	 {
	 	 s[dem]=S[batdau+dem];
 	  dem++;
		}
		//gan ky tu cuoi la ky tu ket thuc
		s[dem]='\0';
		
		printf("\nChuoi con duoc sinh ra tu vi tri %d voi do dai %d ky tu cua chuoi ban dau la:\n",batdau,chieudai);
		printf("%s",s);
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  substring();
  //ket thuc chuong trinh
  getch();
}
