#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Xay dung/dinh nghia cac struct
struct NGAY
{
	int dd,mm,yyyy;
};
struct SINHVIEN
{
	char HoTenSV[51];
	char MSSV[9];
	char Lop[12];
	NGAY NS;
	float DTB;
};
//Khai bao nguyen mau (prototype)
void NhapTTSV(SINHVIEN &sv);
void InTTSV(SINHVIEN sv);
void NhapNgay(NGAY &a);
void NhapDSSV(SINHVIEN sv[],int &n);
void XuatDSSV(SINHVIEN sv[],int n);
char TimSVTheoMS(SINHVIEN sv[],int n,char ms[9],SINHVIEN &kqsv);
char TimSVTheoTen(SINHVIEN sv[],int n,char ten[51],SINHVIEN kqsv[],int &nkq);
char * Ten(char HoVaTen[]);
int main()
{
	//Khai bao bien
	SINHVIEN sv[50];
	int n;
	char ms[9];
	SINHVIEN kqsv;
	//Loi goi ham
	printf("Moi ban hay nhap thong tin danh sach cac SV:\n");
	NhapDSSV(sv,n);
	printf("\nXuat danh sach SV vua nhap:\n");
	XuatDSSV(sv,n);
	/*do
	{
		printf("Hay nhap MSSV can tim:");
		gets(ms);
	}while(!(strlen(ms)>=1&&strlen(ms)<=8));
	char kqtim=TimSVTheoMS(sv,n,ms,kqsv);
	if(kqtim==1)
	{
		printf("\nThong tin SV tim duoc theo ma so vua nhap:\n");
		InTTSV(kqsv);
	}
	else
		printf("\nKhong tim thay sinh vien co ma so vua nhap trong danh sach!");*/
	char ten[20],kqtim;
	SINHVIEN dskq[50];
	int nkq;
	printf("\nHay nhap ten SV can tim:");
	gets(ten);
	kqtim=TimSVTheoTen(sv,n,ten,dskq,nkq);
	if(kqtim==0)
		printf("\nKhong tim thay SV co ten nay trong danh sach");
	else
	{
		printf("\nDanh sach sinh vien tim duoc theo ten:\n");
		XuatDSSV(dskq,nkq);
	}
	return 1;
}
//Xay dung than cua cac ham
void NhapTTSV(SINHVIEN &sv)
{
	do
	{
		printf("Hay nhap ho va ten cua SV:");
		fflush(stdin);
		gets(sv.HoTenSV);
	}while(!(strlen(sv.HoTenSV)>=1&&strlen(sv.HoTenSV)<=50));
	do
	{
		printf("Hay nhap MSSV:");
		fflush(stdin);
		gets(sv.MSSV);
	}while(!(strlen(sv.MSSV)>=1&&strlen(sv.MSSV)<=8));
	do
	{
		printf("Hay nhap vao ten lop:");
		fflush(stdin);
		gets(sv.Lop);
	}while(!(strlen(sv.Lop)>=1&&strlen(sv.Lop)<=11));
	printf("Hay nhap ngay sinh cua SV:\n");
	NhapNgay(sv.NS);
	do
	{
		printf("Hay nhap vao diem trung binh cua SV:");
		scanf("%f",&sv.DTB);
	}while(!(sv.DTB>=0&&sv.DTB<=10));
}
void InTTSV(SINHVIEN sv)
{
	printf("|%-30s|  %-12s|  %-15s|  %02d/%02d/%4d  | %.1f |",sv.HoTenSV,sv.MSSV,sv.Lop,sv.NS.dd,sv.NS.mm,sv.NS.yyyy,sv.DTB);
}
void NhapNgay(NGAY &a)
{
	do
	{
		printf("Nhap dd: ");
		scanf("%d",&a.dd);
	}while(!(1<=a.dd&&a.dd<=31));
	
	switch(a.dd)
	{
		case 29:
			{
				do
				{
					printf("Nhap mm:");
					scanf("%d",&a.mm);
				}while(!(1<=a.mm&&a.mm<=12));
				if(a.mm==2)
					do
					{
						printf("Nhap yyyy:");
						scanf("%d",&a.yyyy);
					}while(!((a.yyyy%100!=0&&a.yyyy%4==0)||(a.yyyy%100==0&&a.yyyy%400==0)));
				else
					do
					{
						printf("Nhap yyyy:");
						scanf("%d",&a.yyyy);
					}while(!(a.yyyy>=1900));
			}
			break;
		case 30:
			{
				do
				{
					printf("Nhap mm:");
					scanf("%d",&a.mm);
				}while(!(1<=a.mm&&a.mm<=12&&a.mm!=2));
				do
				{
					printf("Nhap yyyy:");
					scanf("%d",&a.yyyy);
				}while(!(a.yyyy>=1900));
			}
			break;
		case 31:
			{
				do
				{
					printf("Nhap mm:");
					scanf("%d",&a.mm);
				}while(!(a.mm==1||a.mm==3||a.mm==5||a.mm==7||a.mm==8||a.mm==10||a.mm==12));
				do
				{
					printf("Nhap yyyy:");
					scanf("%d",&a.yyyy);
				}while(!(a.yyyy>=1900));
			}
			break;
		default:
			{
				do
				{
					printf("Nhap mm:");
					scanf("%d",&a.mm);
				}while(!(1<=a.mm&&a.mm<=12));
				do
				{
					printf("Nhap yyyy:");
					scanf("%d",&a.yyyy);
				}while(!(a.yyyy>=1900));
			}
	}
}
void NhapDSSV(SINHVIEN sv[],int &n)
{
	//Buoc 1 - Nhap si so cho lop hoc
	do
	{
		printf("Hay nhap si so cua danh sach:");
		scanf("%d",&n);
	}while(!(n>=1&&n<=50));
	for(int i=0;i<n;i++)
	{
		printf("\nNhap thong tin sinh vien thu %d:\n",i+1);
		NhapTTSV(sv[i]);
	}
}
void XuatDSSV(SINHVIEN sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		InTTSV(sv[i]);
		printf("\n");
	}
}
//Moi SV co 1 MSSV duy nhat, nen ket qua neu tim thay thi chi tim thay duy nhat 1 SV
char TimSVTheoMS(SINHVIEN sv[],int n,char ms[9],SINHVIEN &kqsv)
{
	for(int i=0;i<n;i++)
		if(strcmp(sv[i].MSSV,ms)==0)
		{
			kqsv=sv[i];//Gan toan bo gia tri cac thanh phan cua sv[i] vao bien kqsv
			return 1;
		}
	return 0;
}
char TimSVTheoTen(SINHVIEN sv[],int n,char ten[51],SINHVIEN kqsv[],int &nkq)
{
	nkq=0;
	for(int i=0;i<n;i++)
		if(stricmp(Ten(sv[i].HoTenSV),ten)==0)
		{
			kqsv[nkq]=sv[i];
			nkq++;
		}
	if(nkq==0)
		return 0;
	return 1;
}
char * Ten(char HoVaTen[])
{
	//Buoc 0
	char *kq;
	kq=(char *)malloc(strlen(HoVaTen));
	//Buoc 1 - Tim vi tri khoang trang cuoi cung (vtktcc)
	int vtktcc;
	for(int i=strlen(HoVaTen)-1;i>=0;i--)
		if(HoVaTen[i]==' ')
		{
			vtktcc=i+1;
			break;
		}
	//Buoc 2 - Sao chep chuoi HoVaTen tu vtktcc vao chuoi kq
	strcpy(kq,&HoVaTen[vtktcc]);
	return kq;
}
