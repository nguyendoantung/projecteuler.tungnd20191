#include<stdio.h>
//ham tra ve tong cac chu so cua phep tinh pow(a,b)
int tong_giai_thua(int a, int b){
	int Arr[200];
	for(int i = 0; i< 200; i++){
		Arr[i] = 0;
	}
	Arr[0] = 1;
	//bieu dien pow(a,b) bang mang Arr
	int temp;
	int nho;
	for(int i = 1; i <= b; i++ ){
		//printf("b %d",i);
		nho = 0;
		for(int j = 0; j < 200; j++){
			temp = Arr[j] * a + nho;
			Arr[j] = temp%10;
			nho = temp/10;
		}
	}
	int sum = 0;
	for(int i = 0; i< 200; i++){
		sum += Arr[i];
	}
	return sum;
}
int main(){
	int temp;
	int max = 0;
	for(int i = 1; i<=99;i++)
		for(int j = 1; j<=99;j++){
			temp = tong_giai_thua(i,j);
			if(max < temp) max = temp; 
		}
	printf("%d",max);
	return 0;
}
