#include<stdio.h>
#include<conio.h>
#include<vector>
using namespace std;
int TongUoc(int x){//ham tra ve tong cac uoc cua mot so tu nhien x(tinh ca 1)
	int rs = 0;
	for(int i = 1 ;i < x ; i++){
		if(x%i == 0) rs+=i;
	}
	return rs;
}
int CheckAbundant(int x){//ham xet co phai la so  hay khong
	if(TongUoc(x) > x) return 1;
	else return 0;
}

int main(){
	int max = 28123, min = 12;
	vector<int> number;
	vector<int> abundant;
	for(int i= min;i < max;i++){
		if(CheckAbundant(i) == 1) abundant.push_back(i);
	}
	int temp= 0;
	int t1 = 28124*28123/2; //tong cac so tu 1 toi 28123
	int sum = 0;
	int size = abundant.size();

	for(int i = 0; i < max; i++){
		number.push_back(0);
	}

for(int i = 0; i<size;i++)
for(int j = i; j<size; j++){
	temp = abundant[i]+ abundant[j];
	if((temp<=max) && (number[temp] == 0)) {
	number[temp] = 1;
	sum += temp;}
}
	
	printf("%d  ",t1-sum);


	getch();
	return 0;
}
