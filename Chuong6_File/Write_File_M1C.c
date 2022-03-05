#include <stdio.h>
#include <stdlib.h>
int main(){
   int num;
   FILE *input_file;
   FILE *output_file;
   int mang[100];
   int MAX;
 
   if ((input_file = fopen("E:\\NTU\\C_Programing\\NMLT2017\\Chuong5_File\\InputM1C.txt","r")) == NULL){
       printf("Error! opening file");
 
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
 
   fscanf(input_file,"%d", &num);
 
   printf("Gia tri cua N: %d", num);
	//Doc tung dong va luu vao mang
	int i;
	 for(i=0;i<num;i++){
	 	fscanf(input_file,"%d",&mang[i]);
	 } 
	//Ket thuc viec doc file input
	fclose(input_file); 
	
	//in ra cac phan tu cua mang
	 printf("\nCac phan tu cua mang la: \n");
	 for(i=0;i<num;i++){
	 	printf("%d ",mang[i]);
	 }
	
	//TIM MAX
	MAX=mang[0];
	for(i=1;i<num;i++){
		if(MAX<mang[i]){
			MAX=mang[i];
		}
	}
	printf("\nPhan tu lon nhat trong mang la: %d",MAX);
	//Luu du lieu vao file
	if ((output_file = fopen("E:\\NTU\\C_Programing\\NMLT2017\\Chuong5_File\\OutputM1C.txt","w")) == NULL){
       printf("Error! opening file");
 
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   else{
   		fprintf(output_file,"%d",MAX);
   		printf("\nGhi du lieu vao file thanh cong");
   		fclose(output_file);
   }
   
	
   return 0;
}
