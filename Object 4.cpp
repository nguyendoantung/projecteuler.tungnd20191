#include<stdio.h>
#include<conio.h>
#include<math.h>
int palidrom(int x){
	int k,temp;
	k=0;
	temp = x;
	while(temp > 0)
	{
		k = k*10 +temp%10;
		temp = temp/10;	
	}
	if(k == x) return 1;
	else return 0;
}
int ketqua(int a,int i){
	int temp = 0;
	for(int x=a;x>i;x--)
		for(int y=x; y>i;y--)
		{
			if((palidrom(x*y)==1)&&(x*y>temp)) temp =x*y; 
		}
	return temp;
}
int main(){
	printf("%d", ketqua(999,99));
	getch();
	return 0;
}
