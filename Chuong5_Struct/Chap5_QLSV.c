#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//khai bao bien dat o day
struct SV
{
  char hoten[30];
  char lop[10];
  float dtoan;
  float dly;
  float dhoa;
  float dtb;
};

int N;
struct SV sinhvien[10];

//chuong trinh con nhap thong tin cho tung sinh vien
void nhapthongtinSV()
{
  int i;
  for(i=0;i<N;i++)
  {
  	//thu thuat nhap du lieu = fflush va gets
  	//ho va ten
  	fflush(stdin);
  	printf("Nhap ho va ten SV [%d]:",i+1);
  	gets(sinhvien[i].hoten);
  	//lop
  	fflush(stdin);
  	printf("Lop:");
  	gets(sinhvien[i].lop);
  	//diem toan
  	fflush(stdin);
  	printf("Diem mon toan:");
  	scanf("%f",&sinhvien[i].dtoan);
  	//diem ly
  	fflush(stdin);
  	printf("Diem mon ly:");
  	scanf("%f",&sinhvien[i].dly);
  	//diem hoa
  	fflush(stdin);
  	printf("Diem mon hoa:");
  	scanf("%f",&sinhvien[i].dhoa);
  }
}

void inthongtinSV()
{
  //khai bao bien
  int i;
  
  printf("DANH SACH SINH VIEN\n");
  printf("Ho va ten\tLop\tToan\tLy\tHoa\tDTB\n");
  for(i=0;i<N;i++)
  {
    printf("%s",sinhvien[i].hoten);
    printf("\t%s",sinhvien[i].lop);
    printf("\t%.2f",sinhvien[i].dtoan);
    printf("\t%.2f",sinhvien[i].dly);
    printf("\t%.2f",sinhvien[i].dhoa);
    sinhvien[i].dtb=((sinhvien[i].dtoan+sinhvien[i].dly+sinhvien[i].dhoa)/3);
    printf("\t%.2f",sinhvien[i].dtb);
    printf("\n");
  }
}

//sap xep danh sach tang dan theo diem trung binh
void sortdtb()
{
  //khai bao bien
  int i;
  int j;
  struct SV tam;
  
  printf("\nSap xep danh sach tang dan theo DTB:\n");
  
  for(i=0;i<N-1;i++)
  {
  	for(j=i+1;j<N;j++)
  	{
  	  if(sinhvien[i].dtb > sinhvien[j].dtb)
  	  {
  	    tam=sinhvien[i];
  	    sinhvien[i]=sinhvien[j];
  	    sinhvien[j]=tam;
	  }
	}
  }
  inthongtinSV();
}

//chuong trinh chinh
int main()
{
  //nhap so luong sinh vien
  printf("So sinh vien cho lop = ");
  scanf ("%d",&N);
  while(N<1 || N>4) 
  {
	printf("So sinh vien cho lop = ");
  	scanf ("%d",&N);
  }
   
  //nhap thong tin cho tung sinh vien
  nhapthongtinSV();
  inthongtinSV();
  sortdtb();
}
