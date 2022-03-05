#include <stdio.h>
#include <stdlib.h>
int main(){
   int num;
   FILE *fptr;
   int mang[100];
 
   if ((fptr = fopen("E:\\NTU\\C_Programing\\NMLT2017\\Chuong5_File\\InputM1C.txt","r")) == NULL){
       printf("Error! opening file");
 
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
 
   fscanf(fptr,"%d", &num);
 
   printf("Gia tri cua N: %d", num);
	//Doc tung dong va luu vao mang
	int i;
	 for(i=0;i<num;i++){
	 	fscanf(fptr,"%d",&mang[i]);
	 } 
	 //in ra cac phan tu cua mang
	 printf("\nCac phan tu cua mang la: \n");
	 for(i=0;i<num;i++){
	 	printf("%d ",mang[i]);
	 }
	//Ket thuc viec doc file
	fclose(fptr); 
   return 0;
}
