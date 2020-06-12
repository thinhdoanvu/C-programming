//https://laptrinhx.com/c-kiem-tra-ma-tran-doi-xung-3759064873/
#include <stdio.h>

//khai bao bien
int A[4][4]={{1,2,3,4},{2,7,8,9},{3,8,7,1},{4,9,1,9}};
int B[4][4]={{1,1,1,1},{2,7,8,9},{3,8,7,1},{4,9,1,9}};

//Chuong trinh con
int check1(int a[4][4], int hang, int cot)
{
	int dem =0;
	int i;
	int j;
	
	if(hang != cot)
	{
		return 0;	
	}
	else
	{
		for(i=0; i<hang; i++)
		{
			for(j=0; j<cot; j++)
			{
				if(a[i][j] == a[j][i])
				{
					dem++;
				}
			}
		}
		//tinh dem =?
		if(dem==hang*cot)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	
}

//Cach 2
int check2(int a[4][4], int hang, int cot)
{
	int dem =0;
	int i;
	int j;
	
	if(hang != cot)
	{
		return 0;	
	}
	else
	{
		for(i=0; i<hang; i++)
		{
			for(j=0; j<cot; j++)
			{
				if(a[i][j] != a[j][i])
				{
					return 0;
					break;
				}
			}
		}
		return 1;
	}
	
}

int main ()
{
	if(check2(A,4,4)==1)
	{
		printf("\nMa tran da cho doi xung\n");
	}
	else
	{
		printf("\nMa tran da cho khong doi xung");
	}
	getch();
}

