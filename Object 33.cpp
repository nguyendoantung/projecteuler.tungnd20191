#include<stdio.h>
int UCLN(int i, int j){
	if( j == 0) return i;
	else return UCLN(j,i%j);
}
int kiem_tra(int i, int j){
	if((i%10 == 0) &&(j%10 == 0)) return 0;
	double temp1 = (double)i/j;
	double temp2;
	int a = i/10, b = i%10 , c = j/10, d = j%10;
	if(a == d){
		temp2 = (double)b/c;
		if(temp1 == temp2) return 1;
	}
	if(b == c){
		temp2 = (double)a/d;
		if(temp1 == temp2) return 1;
	}
	if(b == d){
		temp2 = (double)a/c;
		if(temp1 == temp2) return 1;
	}
	return 0;
}
int main(){
	int tu = 1;
	int mau = 1;
	for(int i = 10; i <= 98; i++)
		for(int j = i+1 ; j <= 99; j++){
			if(kiem_tra(i,j) == 1){
				tu = tu * i;
				mau = mau *j;
			}
		}
	int uoc = UCLN(tu,mau);
	printf("%d", mau/uoc);
	return 0;
}
