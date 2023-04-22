#include <stdio.h>
#define MAXPT 100
#define MINPT 3
//prototype
void NhapMang(int a[],int &n);
void XuatMang(int a[],int n);
int TimMaxAm(int a[],int n);
void HoanVi(int &a,int &b);
void SapXepAmTangDuongGiam(int a[],int n);
void TachAmDuong(int a[],int n,int am[],int &nam,int duong[],int &nduong);
int main()
{
	int a[MAXPT],b[MAXPT],c[MAXPT],n,nb,nc,maxam;
	//Goi ham xu ly
	NhapMang(a,n);
	printf("Danh sach cac so vua nhap:\n");
	XuatMang(a,n);
	maxam=TimMaxAm(a,n);
	if(maxam!=0)
		printf("\nMang co so am lon nhat: %d",maxam);
	else
		printf("\nMang khong co so am nao!");
	SapXepAmTangDuongGiam(a,n);
	printf("\nMang sau khi sap xep am tang va duong giam:\n");
	XuatMang(a,n);
	TachAmDuong(a,n,b,nb,c,nc);
	printf("\nMang sau khi tach gom 2 mang am va duong nhu sau:\n");
	XuatMang(b,nb);
	printf("\n");
	XuatMang(c,nc);
	return 0;
}
//Xay dung chi tiet cua ham
void NhapMang(int a[],int &n)
{
	//Buoc 1 - nhap so phan tu
	do
	{
		printf("Hay nhap vao so phan tu cua mang (3<=<=100):");
		scanf("%d",&n);
	}while(!(MINPT<=n&&n<=MAXPT));
	//Buoc 2 - Nhap gia tri cho cac phan tu (a[i], i thuoc [0,..,n-1])
	for(int i=0;i<n;i++)
	{
		printf("Hay nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n)
{
	//In tat ca cac phan tu a[i] ra man hinh, i thuoc [0,..,n-1]
	for(int i=0;i<n;i++)
		printf("%d   ",a[i]);
}
int TimMaxAm(int a[],int n)
{
	int max_am=0; //Gia su mang khong co so am nao
	//Di tim so am dau tien trong mang a
	for(int i=0;i<n;i++)
		if(a[i]<0)
		{
			max_am=a[i];
			break;
		}
	for(int i=0;i<n;i++)
		if(a[i]<0&&a[i]>max_am)
			max_am=a[i];
	return max_am;
}
void HoanVi(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}
void SapXepAmTangDuongGiam(int a[],int n)
{
	//Cach 1
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(!(a[i]<a[j])&&a[i]<0&&a[j]<0)
				HoanVi(a[i],a[j]);
			if(!(a[i]>a[j])&&a[i]>0&&a[j]>0)
				HoanVi(a[i],a[j]);
		}
	//Cach 2
	/*for(int i=0;i<n-1;i++)
	{
		if(a[i]<0)
			for(int j=i+1;j<n;j++)
				if(a[j]<0&&!(a[i]<a[j]))
					HoanVi(a[i],a[j]);
		if(a[i]>0)
			for(int j=i+1;j<n;j++)	
				if(a[j]>0&&!(a[i]>a[j]))
					HoanVi(a[i],a[j]);
	}*/
}
void TachAmDuong(int a[],int n,int am[],int &nam,int duong[],int &nduong)
{
	nam=nduong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			am[nam]=a[i];
			nam++;
		}
		if(a[i]>0)
		{
			duong[nduong]=a[i];
			nduong++;
		}
	}
}
