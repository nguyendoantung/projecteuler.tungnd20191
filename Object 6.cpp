#include<stdio.h>
#include<conio.h>
#include<math.h>
int tong_binh_phuong(int x){
	int sum = 0;
	for(int i = 1; i<= x ;i++){
		sum += pow(i,2);
	}
	return sum;
}
int binh_phuong_tong(int x){
	return pow(x*(x+1)/2,2);
}
int main(){
	printf("%d",binh_phuong_tong(100)-tong_binh_phuong(100));
	getch();
	return 0;
}
