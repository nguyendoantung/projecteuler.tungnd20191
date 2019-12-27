#include <stdio.h>
#include<math.h>
#include<vector>
using namespace std;
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
int main()
{
    vector <int> prime;
    for(int i = 2;i< 1000000; i++){
    	if(SNT(i) == 1) prime.push_back(i);
	}
	int n = prime.size();
	//printf("%d",n);
	for(int i = 2; i <= n; i++){
		for(int j = 0; j < (j+i); j++){
			
		}
	}
    return 0;
}
