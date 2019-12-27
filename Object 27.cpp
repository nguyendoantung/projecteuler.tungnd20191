#include <stdio.h>
#include <math.h>
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
int count_SNT(int a, int b){
    for (int i = 0; ; i++) {
		int n = i * i + i * a + b;
		if(  (n < 0) || ( !SNT(n) )  )
	        return i;
        }
}
int main()
{
    int bestNum = 0;
	int bestA = 0;
	int bestB = 0;
	for (int a = -1000; a <= 1000; a++) {
		for (int b = -1000; b <= 1000; b++) {
			int num = count_SNT(a, b);
			if (num > bestNum) {
				bestNum = num;
				bestA = a;
				bestB = b;
			}
		}
	}
    int rs = bestA*bestB;
    printf("%d",rs);
    return 0;
}

