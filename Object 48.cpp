#include<stdio.h>
#include<stdlib.h>
int rs[10] = {0}; // mang ket qua tra ve
int a[10];
//ham cong mang ket qua voi mang chua 10 phan tu cuoi cung cua phep tinh pow(n,n)
void cong(int n){
	//tinh 10 phan tu cuoi cung cua phep tinh pow(n,n)
	//khoi tao gia tri cho mang a
	for(int i = 0; i<10; i++){
		a[i] = 0;
	}
	a[9] = 1;
	//tinh 10 phan tu cua mang a
	int temp;
	int nho;
	for(int i = 1; i <= n;i++){
		nho = 0;
		for(int j = 9; j>=0;j--){
			temp = a[j] * n + nho;
			a[j] = temp%10;
			nho  = temp/10;
		}
	}
	//cong hai mang tra ve mang rs
	nho = 0;
	for(int i = 9; i>= 0 ; i--){
		temp = rs[i]+a[i]+nho;
		rs[i] = temp%10;
		nho = temp/10;
	}
}
int main(){
	for(int t=1; t<=1000;t++){
		cong(t);
	}
	for(int i = 0; i<10; i++){
		printf("%d",rs[i]);
	}
	return 0;
}
