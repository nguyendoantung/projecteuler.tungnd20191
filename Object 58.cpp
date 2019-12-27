#include<stdio.h>
#include<math.h>
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
int main(){
	int step, s1 = 3,s2 = 5,s3 = 7,s4 = 9;
	int count = 3;
    float snt = 3;
    float tong = 4;
    
    float ty_le =  (float)3/4;
    while(1){
    	
    	//printf("%f\n",ty_le);
    	count += 2;
        step = count - 1;
        s1 = s4 + step ; 
        s2 = s1 + step ;
        s3 = s2 + step ;
        s4 = s3 + step ;
        if(SNT(s1) == 1) snt++;
    	if(SNT(s2) == 1) snt++;
    	if(SNT(s3) == 1) snt++;
    	if(SNT(s4) == 1) snt++;
    	tong += 4;
    	ty_le = (float)snt/tong;
    	if(ty_le < (float)1/10) break;
       
    }
    printf("%d",count - 2) ;
}
