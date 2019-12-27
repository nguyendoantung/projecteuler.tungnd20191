#include<stdio.h>
int main(){
	//28433 7830457
	int a[10] = {0};
	a[9] = 1;
	int temp = 0;
	for(int i = 1; i<=7830457;i++){
		temp = 0;
		for(int i = 9; i>=0; i--){
			a[i] = 2*a[i] + temp;
			temp = a[i]/10;
			a[i] = a[i]%10;
		}
	}
	temp = 0;
	for(int i= 9; i>=0; i--){
		a[i] = a[i]* 28433+ temp;
		temp = a[i]/10;
		a[i]= a[i]%10;
	}
	a[9] += 1;
	for(int i = 0; i<10; i++){
		printf("%d",a[i]);
	}
	return 0;
}
