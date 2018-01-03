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

void Kmer()
{
	 //khai bao bien
	 char s[255];
	 int batdau;
	 int chieudai;
	 int dem;
	 int i;
	 
	 printf("\nChieu dai cua chuoi Kmer la: \n");
	 scanf("%d",&chieudai);
	 
	 printf("\nChuoi Kmer duoc sinh ra tu chuoi ban dau voi do dai %d la:\n",chieudai);
	 dem=0;
	 
	 for(batdau=0;batdau<=strlen(S)-chieudai;)
	 {
	   while(dem<chieudai)
	   {
	 	   s[dem]=S[batdau+dem];
 	    dem++;
	  	}
		  //gan ky tu cuoi la ky tu ket thuc
		  s[dem]='\0';
		  
		  //in ra so ky tu trang bu dap cho so ky tu bi loai bo
		  for(i=0;i<batdau;i++)
		  {
      printf(" ");
				}

				//in ra chuoi ky tu
		  printf("%s",s);

		  //xuong hang
		  printf("\n");
		  
		  //xoa bo dem ve lai ban dau
		  batdau=batdau+1;
		  dem=0; 
		}
	 
	 
}

//chuong trinh chinh
int main()
{
  nhapchuoi();
  Kmer();
  //ket thuc chuong trinh
  getch();
}
