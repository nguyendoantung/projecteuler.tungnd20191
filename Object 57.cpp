#include<stdio.h>
unsigned long long SCS(unsigned long long x)		//ham dem so chu so cua 1 so
{
    if(x == 0) return 1;
    unsigned long long l = 0;
    while (x!=0)
    {
        l++;
        x = x/10;
    }
    return l;
}
int kiem_tra(unsigned long long tu, unsigned long long mau){
	if(SCS(tu) > SCS(mau)) return 1;
	else return 0;
}
int main(){
	unsigned long long tu = 3, mau = 2;
	unsigned long long i,j;  //hai bien i,j se dai dien cho tu va mau trong cac bien doi o vong lap
	int step = 2;
	int count = 0;
	float canhai = 1.5;
	while(step < 1000){
		i = tu; 
		j = mau;
		if(kiem_tra(tu,mau) == 1) count ++;
		mau = i+j;
		tu = 2*i+j; //sai
		step ++;
		canhai = (float)tu/mau;
		printf("%f\n",canhai);
	}
	//canhai = (float)tu/mau;
	//printf("%llu\n",count);
	//printf("%f",canhai);
	return 0;
}
