#include<stdio.h>
#include<conio.h>
long long int Count(long long int x){
	long long int count = 0; long long int temp =x;
	while(temp != 1) {
		if (temp%2 == 0 ) {
		temp = temp/2;
		count ++;}
		else {
		temp = 3*temp +1;
		count ++;}
	}
	return count;
}
int main(){
	long long int rscount = 0;
	long long int rsnumber = 0;
	for(long long int i = 1; i<=1000000; i++){
		if( rscount < Count(i) ){
			rscount = Count(i); rsnumber = i;
		}
	}
	printf("%lld     %lld",rscount,rsnumber);
	getch();
	return 0;
}
