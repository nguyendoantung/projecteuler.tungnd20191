#include<stdio.h>
#include<conio.h>
#include<math.h>
int SNT(int x){
	int i;
	for(int i= 2;i<x;i++)
		{
			if(x%i == 0) return 0;
		}
	return 1;	
}
int rank(int x){
	int i;
	int count = 0;
	for(int i= 2;;i++){
		if (SNT(i)==1) {count += 1;}
		if (count == x) return i;
	}
}
int main(){
	printf("%d",rank(10001));
	getch();
	return 0;
}
