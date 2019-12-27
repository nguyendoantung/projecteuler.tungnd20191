#include <stdio.h>
#include <math.h>
int KTNT(int x)			//ham kiem tra so nguyen to
{
	int i;
	if(x<2) return 0;
	if(x==2 || x==3) return 1;
	if(x%2==0 || x%3==0) return 0;
	for(i=5;i<=sqrt(x);i+=6)
		if (x%i==0 || x%(i+2)==0) return 0;
	return 1;
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
int Cicular_prime(int x){   //ham kiem tra so nguyen to tron
    int l = SCS(x);
    int nhay = pow(10, l-1);
    int temp = x;
    int count = 0;      //bien dem so qua trinh quay so
    int truoc = 0, sau = 0; 
    while(count < l ){
        if(KTNT(temp) == 0) return 0;
        else{
            count ++;
            truoc   =   temp/nhay;
            sau     =   temp%nhay;
            temp    = sau * 10 + truoc;
        }
    }
    return 1;
}
int main()
{
    int count = 0;
    for(int i = 2;i< 1000000;i++){
        if(Cicular_prime(i) == 1) count ++;
    }
    printf("%d",count);

    //printf("%d", SCS(197));
    return 0;
}

