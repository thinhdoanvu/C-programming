//Viet chuong trinh nhap vao co 2 chu so tu ban phim va hien thi so duoc dich thanh chu ra man hinh
//Vi du: 53: Nam muoi 3

//khai bao thu vien
#include<stdio.h>

//khai bao bien
int n;
int donvi;
int chuc;

int main()
{
	printf("nhap so co 2 chu so: ");
	scanf("%d",&n);
	
	//chia so
	chuc=n/10;
	donvi=n%10;
	
	//so hang chuc
	switch(chuc)
	{
		case 1:
		{
			printf("muoi ");
			break;
		}
		case 2:
		{
			printf("hai muoi ");
			break;
		}
		case 3:
		{
			printf("ba muoi ");
			break;
		}
		case 4:
		{
			printf("bon muoi ");
			break;
		}
		case 5:
		{
			printf("nam muoi ");
			break;
		}
		case 6:
		{
			printf("sau muoi ");
			break;
		}
		case 7:
		{
			printf("bay muoi ");
			break;
		}
		case 8:
		{
			printf("tam muoi ");
			break;
		}
		case 9:
		{
			printf("chin muoi ");
			break;
		}
		default: printf("");
	}
	
	//so hang don vi
	switch(donvi)
	{
		case 1:
		{
			printf("mot ");
			break;
		}
		case 2:
		{
			printf("hai ");
			break;
		}
		case 3:
		{
			printf("ba ");
			break;
		}
		case 4:
		{
			printf("bon ");
			break;
		}
		case 5:
		{
			printf("nam ");
			break;
		}
		case 6:
		{
			printf("sau ");
			break;
		}
		case 7:
		{
			printf("bay ");
			break;
		}
		case 8:
		{
			printf("tam ");
			break;
		}
		case 9:
		{
			printf("chin ");
			break;
		}
		default: printf("khong ");
	}
	
}
