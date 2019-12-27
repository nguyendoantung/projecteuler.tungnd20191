#include<stdio.h>
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
int run(){
	int a2,a3,a4,a5,a6;
	for(int i = 1;;i++){
		a2 = 2*i;
		a3 = 3*i;
		a4 = 4*i;
		a5 = 5*i;
		a6 = 6*i;
		if((check(a2,a3) == 1) &&(check(a3,a4) == 1) &&(check(a4,a5) == 1) &&(check(a5,a6) == 1)){
			return i;
		}
	}
}
int main(){
	//printf("%d",kiem_tra(12445,44521));
	printf("%d",run());
	//printf("%d",check(2,3));
	return 0;
}
