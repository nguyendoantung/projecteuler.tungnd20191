#include<stdio.h>
int check_palidrom(int x, int coso){
	int temp = 0, n = x;
	while(n != 0){
		temp = temp * coso + n % coso;
		n = n/coso;
	}
	if(x == temp ) return 1;
	else return 0;
}
int main(){
	int sum = 0;
	for(int i = 1; i< 1000000;i++){
		if( (check_palidrom(i,10) == 1) &&(check_palidrom(i,2) == 1) ) sum += i; 
	}
	printf("%d",sum);
	return 0;
}
