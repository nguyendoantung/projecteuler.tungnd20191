#include<stdio.h>
#include<conio.h>
int sum(int n, int boiso){
	int sum=0;
	int i;
	for(i=0; i<n;i++){
		if(i % boiso ==0 )
		sum = sum+i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("tong la: %d",sum(n,3)+sum(n,5)-1*sum(n,15));
	getch();
	return 0;
}
