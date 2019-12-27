#include<stdio.h>

int rs[10];
int temp = 0; //  bien luu gia tri du ra khi cong cac hoan vi voi nhau
int Bool[10] = { 0 };  //Ðánh dau chua có phan tu nào duoc su dung het
int A[10];  //Luu hoán vi vào mang A
int prev = 0 ;
void cong_hoanvi() {
    //0 1 2 3 4 5 6 7 8 9
    //1 2 3 4 5 6 7 8 9 10
    if( (A[1]*100+A[2]*10+A[3])%2  != 0) return;
    if( (A[2]*100+A[3]*10+A[4])%3  != 0) return;
    if( (A[3]*100+A[4]*10+A[5])%5  != 0) return;
    if( (A[4]*100+A[5]*10+A[6])%7  != 0) return;
    if( (A[5]*100+A[6]*10+A[7])%11 != 0 ) return;
    if( (A[6]*100+A[7]*10+A[8])%13 != 0 ) return;
    if( (A[7]*100+A[8]*10+A[9])%17 != 0 ) return;
    else{
    	int nho = 0;
    	for(int i = 9; i>= 0 ; i--){
    		temp = rs[i] + A[i] + nho;
    		rs[i] = temp%10;
    		nho = temp/10;
		}
		prev += nho;
	}

}
void hoanvi(int k) {
    for (int i = 0; i < 10; i++) {
        //Kiem tra neu phan tu chua duoc chon thi se danh dau
        if (!Bool[i]) {
            A[k] = i; // Luu mot phan tu vao hoan vi
            Bool[i] = 1;//Ðanh dauu da dung
            if (k == 9)//Kiem tra neu la hoan vi thi xuat ket qua
                cong_hoanvi();
            else
                hoanvi(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main(){
	hoanvi(0);
	printf("%d",prev);
	for(int  i = 0; i<10; i++){
		printf("%d",rs[i]);
	}
	//printf("%llu",rs);
	return 0;
}
