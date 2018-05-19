#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//khai bao bien dat o day
struct nhanvien
{
  char manv[10];
  char hovaten[30];
  int ngaycong;
  int  luong;
};

struct nhanvien NV[10]; //toi da co 10 nhan vien, moi nhan vien co cac truong nhu tren
int N;

//chuong trinh con nhap nhan vien
void nhapnhanvien()
{
  //khai bao bien
  int i;
  
  for(i=0;i<N;i++)
  {
  	//ho va ten nhan vien
  	printf("Nhap Ho va ten thu [%d]: ",i+1);
    fflush(stdin);
    gets(NV[i].hovaten);
    //ma nhan vien
    fflush(stdin);
    printf("MSNV:"); 
    gets(NV[i].manv);
    //so ngay cong cua nhan vien
    printf("So ngay cong: ");
    fflush(stdin);
    scanf("%d",&NV[i].ngaycong);
  }
}

//chuong trinh con in nhan vien
void innhanvien()
{
  //khai bao bien
  int i;
  
  printf("Ho va ten\tMaNV\tN.cong\tLuong\n");
  for(i=0;i<N;i++)
  {
    printf("%s",NV[i].hovaten);
    printf("\t%s",NV[i].manv);
    printf("\t%d",NV[i].ngaycong);
    //tinh luong
    NV[i].luong=30*NV[i].ngaycong;
    printf("\t%ld",NV[i].luong);
    printf("\n");
  }
}

//sap xep danh sach nhan vien tang dan theo ngay cong
void sapxepngaycong()
{
  //khai bao bien
  int i;
  int j;
  struct nhanvien tam;
  
  printf("\nDanh sach nhan vien sap xep tang dan theo ngay cong\n");
  printf("\nDANH SACH NHAN VIEN\n");
  
  for(i=0;i<N-1;i++)
  {
  	for(j=i+1;j<N;j++)
  	{
  	  if(NV[i].ngaycong > NV[j].ngaycong)
      {
      	tam=NV[i];
      	NV[i]=NV[j];
      	NV[j]=tam;
	  }
	}
  }
  //in lai danh sach nhan vien sau khi sap xep
  innhanvien();
}

//tim kiem nhan vien theo MaNV
void timkiemMa()
{
  //khai bao bien
  int i;
  char X[10];
  printf("\nNhap Ma Nhan Vien can tim kiem: ");
  fflush(stdin);
  gets(X);
  
  i=0;
  while(i<N && strcmp(NV[i].manv,X)!=0)//su dung ham so sanh chuoi
  {
    i++;
  }
  
  //kiem tra dieu kien
  if(i==N)
  {
    printf("\nKhong tim thay nhan vien co ma la: %s",X);
  }
  else
  {
    printf("\nTim thay co 01 nhan vien co ma: %s \n",X);
    //in thong tin nhan vien do ra
    printf("\nHo va ten\tMaNV\tN.cong\tLuong\n");
    printf("%s\t%s\t%d\t%ld",NV[i].hovaten,NV[i].manv,NV[i].ngaycong,NV[i].luong);
  }
}

//them 1 nhan vien moi vao danh sach da co, mac dinh la them vao cuoi
void themvaocuoi()
{
  //khai bao bien
  int i;
  
  printf("\n\nHo va ten cua NV moi: ");
  fflush(stdin);
  gets(NV[N].hovaten);
  printf("Ma so cua NV moi: ");
  fflush(stdin);
  gets(NV[N].manv);
  printf("So ngay cong cua NV moi: ");
  fflush(stdin);
  scanf("%d",&NV[N].ngaycong);
  //tang them chieu dai cua danh sach len 1 don vi
  N++;
  //in lai danh sach nhan vien
  printf("\nDanh sach nhan vien sau khi them 1 nguoi\n");
  innhanvien();
}

//xoa 1 nhan vien ra khoi danh sach da co
void xoanhanvien()
{
  //khai bao bien
  int i;
  int j;
  char X[10];
  
  printf("\nNhap ma cua nhan vien can duoc xoa: ");
  fflush(stdin);
  gets(X);
  //so sanh ma NV da co voi ma moi su dung phep so sanh chuoi
  i=0;
  while(i<N && strcmp(NV[i].manv,X)!=0)
  {
  	i++;
  }
  
  //kiem tra su ton tai cua ma NV 
  if(i==N)
  {
  	printf("\nKhong ton tai nhan vien co ma: %s\n",X);
  }
  else
  {
    printf("\nDanh sach nhan vien sau khi xoa la:\n");
    //xoa dau danh sach
    if(i==0)
    {
      printf("\nDANH SACH NHAN VIEN\n");
      printf("Ho va ten\tMaNV\tN.cong\tLuong\n");
      for(j=i+1;j<N;j++)
      {
        printf("%s",NV[j].hovaten);
        printf("\t%s",NV[j].manv);
        printf("\t%d",NV[j].ngaycong);
        //tinh luong
        NV[j].luong=30*NV[j].ngaycong;
        printf("\t%ld",NV[j].luong);
        printf("\n");
      }
	}
	else
	{
	  if(i==N-1)
	  {
	  	//xoa cuoi danh sach
	  	printf("\nDANH SACH NHAN VIEN\n");
        printf("Ho va ten\tMaNV\tN.cong\tLuong\n");
        for(j=0;j<i;j++)
        {
          printf("%s",NV[j].hovaten);
          printf("\t%s",NV[j].manv);
          printf("\t%d",NV[j].ngaycong);
          //tinh luong
          NV[j].luong=30*NV[j].ngaycong;
          printf("\t%ld",NV[j].luong);
          printf("\n");
        }
	  }
	  else
	  {
	    //xoa o giua danh sach
	    //tu vi tri tim thay tro ve sau se tien hanh dich sang trai 1 don vi
        for(j=i;j<N;j++)
        {
          NV[j]=NV[j+1];
		}
        //giam so luong phan tu
        N--;
        //in lai danh sach nhan vien
        innhanvien();       
	  }
	}
  }
}

//cap nhat danh sach nhan vien hien tai
void capnhatnhanvien()
{
  //khai bao bien
  int i;
  char X[10];
  
  char hoten_moi[30];
  char manv_moi[10];
  int ngaycong_moi;
  long int luong_moi;
  
  printf("\nNhap Ma NV can thay doi thong tin: ");
  fflush(stdin);
  gets(X);
  
  i=0;
  while(i<N && strcmp(NV[i].manv,X)!=0)//su dung ham so sanh chuoi
  {
    i++;
  }
  
  //kiem tra dieu kien
  if(i==N)
  {
    printf("\nKhong tim thay nhan vien co ma la: %s",X);
  }
  else
  {
  	//chinh sua thong tin cho nhan vien thu i
  	//update ho va ten
  	printf("\nNhap ho va ten moi cua nhan vien: ");
  	fflush(stdin);
  	gets(hoten_moi);
  	strcpy(NV[i].hovaten,hoten_moi);
  	//update ma so
  	printf("\nNhap ma so moi cua nhan vien: ");
  	fflush(stdin);
  	gets(manv_moi);
  	strcpy(NV[i].manv,manv_moi);
  	//update so ngay cong
  	printf("\nNhap so ngay cong moi cua nhan vien: ");
  	fflush(stdin);
  	scanf("%d",&ngaycong_moi);
  	NV[i].ngaycong=ngaycong_moi;
  	//update luong
  	luong_moi=30*ngaycong_moi;
  	NV[i].luong=luong_moi;
  }
  //in lai danh sach vua cap nhat
  printf("\nDanh sach nhan vien vua duoc cap nhat la:\n");
  innhanvien();
}

//chuong trinh chinh
int main()
{
  printf("So nhan vien toi da co the nhap = ");
  scanf("%d",&N);
  while(N<1 || N>5)
  {
  	printf("So nhan vien toi da co the nhap = ");
    scanf("%d",&N);
  }
  
  nhapnhanvien();
  printf("\nDANH SACH NHAN VIEN\n");
  innhanvien();
  sapxepngaycong();
  timkiemMa();
  themvaocuoi();
  xoanhanvien();
  capnhatnhanvien();
}

