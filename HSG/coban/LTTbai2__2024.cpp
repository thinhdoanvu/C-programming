#include<stdio.h>
#include<string.h>

//khai bao bien
int nhap1;
int nhap2;
int nhap3;
char pheptoan;
int ketqua;
int main(){
    //chuong trinh chinh
    //nhap phep toan
    printf("phep toan la: ");
    scanf("%c",&pheptoan);

    //nhap 3 so nguyen
    printf("n1= ");
    scanf("%d",&nhap1);
    printf("n2= ");
    scanf("%d",&nhap2);
    printf("n3= ");   
    scanf("%d",&nhap3);
    switch (pheptoan)
    {
        case '+':{
                ketqua = nhap1+nhap2+nhap3;
            break;
        }
            
    
        default:{
            break;
        }
        
    }
    
    printf("ket qua = %d",ketqua);
    return 0;
    }

