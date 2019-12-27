#include<stdio.h>
#include<conio.h>
#include<math.h>
int SNT(int x){
	int i;
	if (x<2) return 0;
	if( (x==2)||(x==3) ) return 1;
	if( (x%2 == 0)||(x%3 == 0)) return 0;
	for(i=5; i<=sqrt(x);i+=6){
		if( (x%i==0)||(x%(i+2)==0)) return 0;
	}
	return 1;
}
int main(){
	/*
	long long int x = 600851475143;
	for(long long int i = 1 ; i <= x; i++){
		if( (x%i==0) && (SNT(x/i) == 1) ) {printf("%lld",x/i);
		break;
		}
	}
	*/
//	printf("%d",SNT(9876543210));
	printf("%d",sizeof(int));
	getch();
	return 0;
}
