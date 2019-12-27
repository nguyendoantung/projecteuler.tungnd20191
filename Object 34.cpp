#include<stdio.h>
int giaithua(int x){
	int rs = 1;
	for(int i = 1; i<= x; i++){
		rs = rs *i;
	}
	return rs;
}
int check_curious(int x){
	int tong = 0;
	int temp = x;
	int donvi;
	while(temp != 0){
		donvi = temp % 10; 
		tong = tong + giaithua(donvi);
		temp = temp / 10;
	}
	if(tong == x) return 1;
	else return 0;	//return tong;
}
int main(){
	int sum = 0;
	for(int i = 3; i < 10000000 ; i++){
		if(check_curious(i) == 1)
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
