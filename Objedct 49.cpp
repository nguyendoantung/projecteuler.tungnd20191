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
int check(int a, int b){
	int temp;
	int x = SCS(a);
	if( SCS(a) != SCS(b) ) return 0;
	else{
		int Arr1[10] = {0};
		int Arr2[10] = {0};
		while(a != 0){
			temp = a%10;
			Arr1[temp] ++;
			a = a/10;
		}
		while(b != 0){
			temp = b%10;
			Arr2[temp] ++;
			b = b/10;
		}
		for(int i = 0; i< 10; i++){
			if(Arr1[i] != Arr2[i]) return 0;
		}
		return 1;
	}
}
void run(){
    int a,b;
    for(int i = 1001; i< 5000; i++){
        if(SNT(i) == 1){
            for(int j = 1; j< 5000; j++){
                a = i+j;
                b = a+j;
                if((SNT(a) == 1) && (SNT(b) == 1)){
                    if((check(a,b) ==1)&&(check(i,a) ==1) ){
                        if(i != 1487) {
                            printf("%d%d%d",i,a,b);
                            return;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    //printf("Hello World");
    run();
    return 0;
}
