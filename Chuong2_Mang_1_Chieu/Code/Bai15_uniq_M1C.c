//khai bao thu vien
#include<stdio.h>

//khai bao bien toan cuc
int A[10];
int N;
int X;

//chuong trinh con
void nhapN()
{
	//khai bao bien
	
	printf("Nhap N= ");
	scanf("%d",&N);	
	
	while(N<5 || N>10)
	{
		printf("Nhap N= ");
		scanf("%d",&N);	
	}
}

void nhapmang()
{
	//khai bao bien	
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}

void inmang()
{
	//khai bao bien	
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("%d\t",A[i]);
	}
}

void uniq()
{
	//khai bao bien
	int i;
	int j;
	int k;
	int vt;
	
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(A[i]==A[j])
			{
				//xac dinh vi tri cua so trung voi A[i]
				vt=j;
				//dich toan bo day so tu vt+1 den het day sang trai 1 don vi
				for(k=vt;k<=N;k++)
				{
					A[k]=A[k+1];
				}
				//giam so phan tu cua day di 1
				N--;
				//giam so lan thuc hien cua chuoi so sanh voi chuoi goc di 1
				j--;
			}
		}
	}
	inmang();
}
//chuong trinh chinh
int main()
{
	nhapN();
	nhapmang();
	printf("\nDay so sau khi nhap la: \n");
	inmang();
	printf("\nDay so sau khi loai bo cac phan tu trung lap");
	uniq();
}

