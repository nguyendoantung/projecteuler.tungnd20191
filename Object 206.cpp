#include<stdio.h>
int check(long long int x){
	long long int n = x;
	n = n/100;
	if(n%10 != 9) return 0;
	n = n/100;
	if(n%10 != 8) return 0;
	n = n/100;
	if(n%10 != 7) return 0;
	n = n/100;
	if(n%10 != 6) return 0;
	n = n/100;
	if(n%10 != 5) return 0;
	n = n/100;
	if(n%10 != 4) return 0;
	n = n/100;
	if(n%10 != 3) return 0;
	n = n/100;
	if(n%10 != 2) return 0;
	n = n/100;
	if(n%10 != 1) return 0;
	return 1;
}
int main(){
	long long int i;
	long long int temp;
	for(i = 1000000000;;i+=10 ){
		temp = i*i;
		if(check(temp) == 1) {
			printf("%d",i);
			break;
		}
	}
	return 0;
}
