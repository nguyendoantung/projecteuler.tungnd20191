#include<stdio.h>
int tach(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	else return( tach(n-1) + tach(n-2) );
}
int main(){
	printf("%d",tach(5));
	return 0;
}
