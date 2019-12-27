#include<stdio.h>

int pow(int a, int b){
	int rs = 1;
	for(int i = 0; i< b; i++){
		rs = rs*a;
	}
	return rs;
}
int SCS(int x)		//ham dem so chu so cua 1 so
{
    if(x == 0) return 1;
    int l = 0;
    while (x!=0)
    {
        l++;
        x = x/10;
    }
    return l;
}
int tim_so(int x){
	int count = 0; 
	int i = 1;
	while(count < x){
		count += SCS(i);
		i++;
	}
	i--;
	int du = count - x ;
	int rs = 0;
	rs = i/pow(10,du);
	rs = rs % 10;
	return rs;
}
int main()
{
	int rs = tim_so(1)*tim_so(10)*tim_so(100)*tim_so(1000)*tim_so(10000)*tim_so(100000)*tim_so(1000000);
	printf("%d",rs);
	return 0;
}

