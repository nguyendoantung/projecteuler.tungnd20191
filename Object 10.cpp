#include<stdio.h>
#include<conio.h>
#include<math.h>
int check(int x){
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
	int i;
	double sum=0;
	for(i=2;i<2000000;i++)
		if( check(i)) sum+=i;
	printf("%f",sum);
	
	getch();
	return 0;

}
