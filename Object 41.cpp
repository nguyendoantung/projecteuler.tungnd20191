#include <stdio.h>
#include <math.h>
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
int check_hoanvi(int x){
    int l = SCS(x);
    int a[l] = {0};
    int temp = x;
    int n = 0;
    while( temp != 0 ){
        n = temp % 10;
        temp = temp/10;
        if (a[n] == 0) {
            a[n-1] = 1;
        }
        else return 0;
    }
    return 1;
}
int ketqua(){
	for(int i = 7654321;;i--){
		if( (check_hoanvi(i) == 1) && (SNT(i) == 1) ) return i;
	}
	return 0;
}
int main() {
	/*
	int rs = 0;
	int temp = 0;
	for(int i = 2; i<= 7654321 ; i++){
		if( (check_hoanvi(i) == 1) && (SNT(i) == 1) ){
			temp = i;
			if(temp  > rs) rs = temp;
		}
	}
	*/
	printf("%d",ketqua());
    return 0;
}
