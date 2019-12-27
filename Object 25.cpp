#include<stdio.h>
#include<conio.h>
int main(){
	int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
	int count = 2;
	a[0] = 1; b[0] = 1;
	int temp = 0;
	while(c[999] == 0){
		for(int i = 0; i<1000;i++){
			c[i] = ( a[i] +b[i] + temp) %10;
			temp = (a[i] +b[i] + temp)/10;
		}
		for(int i=0; i<1000; i++){
			a[i] = b[i];
			b[i] = c[i];
		}
		count ++;
	}
	printf("%d",count);
	getch();
	return 0;
}
