#include<stdio.h>
#include<conio.h>
//ham tra ve tong cac uoc cua mot so tu nhien x(tinh ca 1)
int TongUoc(int x){
	int rs = 0;
	for(int i = 1 ;i<x ; i++){
		if(x%i == 0) rs+=i;
	}
	return rs;
}
//ham kiem tra xem so co phai la so than thien khong
int check(int x){
	int partner = TongUoc(x);
	if(partner == x) return 0;
	if( x == TongUoc(partner) ) return 1;
	else return 0;
}
int main(){
	int result = 0;
	for(int i = 1;i < 10000 ; i++){
		if(check(i) == 1) result += i;
	}
	printf("%d",result);
	getch();
	return 0;
}
