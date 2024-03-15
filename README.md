#### Sàng nguyên tố
###### Sử dụng 1 mảng a[N] phần tử làm mảng đánh dấu, trong đó a[0] và a[1], đánh dấu là 0 (không là số nguyên tố). Các số khác đánh dấu là 1.
int a[100];

int N = 100;//so luong so nguyen to can kiem tra;

void init(int N){

    a[0]=0;//0: khong la SNT
    
    a[1]=0;//1: khong la SNT
    
    for(int i=2; i<=N; i++){
    
        a[i]=1;
        
    } 
}

##### Duyệt từ 2 trở đi, loại bỏ các số là bội của 2: 4,6,8,...
##### Lặp lại với 3 trở đi cho đến sqrt(N)
##### Duyệt lại mảg a với các phần tử còn đánh dấu là 1
void lietke(int a[], int N){

    for(int i=2; i<=N; i++){
    
        if(is_snt(i)==1){
        
            for(int j=i*i; j<=N; j=j+i){
            
                a[j]=0;
                
            }
            
        }
        
    }
    
    //in ra cac so nguyen to
    
    for(int i=0; i<=N; i++){
    
        if(a[i]==1){
        
            cout<<i<<" ";
            
        }
        
    }    
  }

### Hãy áp dụng để in ra các số nguyên tố M - N (với M<N). ví dụ 20 - 50
