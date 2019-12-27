#include<stdio.h>
#include<conio.h>
#include<math.h>
int Fibonaci(int i){
	if( (i== 0) || (i==1)) return 1;
	else return(Fibonaci(i-1)+Fibonaci(i-2));
}
int main(){
	int sum = 0;
	int i = 2;
	int n;
	scanf("%d",&n);
	int temp = Fibonaci(i);
	while(temp <= n){
		if(temp%2 == 0){
			sum += temp;
		}
		i++;
		temp = Fibonaci(i);
	}
	printf("%d",sum);
	getch();
	return 0;
}
