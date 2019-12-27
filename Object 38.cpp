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
int check_hoanvi(int x){
	int n = x;
	int temp;
    int l = SCS(x);
    int a[l] = {0};
    while(n != 0){
    	temp = n%10;
    	if(temp == 0) return 0;
    	if(a[temp -1] == 0) {
    		a[temp-1] = 1;
    		n = n/10;
		}
		else return 0;
	}
	return 1;
}

int main(){
	int max = 918273645;
	int temp;
	for(int i = 5000; i< 9999 ; i++){
		temp = i*100000+i*2;
		if(check_hoanvi(temp) == 1) {
			if(temp > max) max = temp;
		}
	}
	printf("%d",max);
	return 0;
}
