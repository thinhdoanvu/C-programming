#include<stdio.h>

//khai bao bien
int number;
int max;
int main(){
    //chuong trinh chinh
    //nhap so
    max=-999999;
    for(int i=0; i<5;i++){
        printf("nhap so thu: ");
        scanf("%d",&number);  
        if(max<number){
            max=number;
        }    
    }
    printf("so lon nhat la:%d",max);
    return 0;
}