#include <stdio.h>
#include <math.h>
int SoChuChuc(int x){//ham tra ve so chu cai cua mot so co hai chu so
	int rs = 0;
	int chuc = x/10;
	int donvi = x%10;
	if(chuc == 1){
		switch(donvi){
			case 0: rs+=3; break;
			case 1: rs+=6; break;
			case 2: rs+=6; break;
			case 3: rs+=8; break;
			case 4: rs+=8; break;
			case 5: rs+=7; break;
			case 6: rs+=7; break;
			case 7: rs+=9; break;
			case 8: rs+=8; break;
			case 9: rs+=8; break;
		}
		return rs;}
	else{
		switch(chuc){
			case 0: rs+=0; break;
			case 2: rs+=6; break;
			case 3: rs+=6; break;
			case 4: rs+=5; break;
			case 5: rs+=5; break;
			case 6: rs+=5; break;
			case 7: rs+=7; break;
			case 8: rs+=6; break;
			case 9: rs+=6; break;
			}
		switch(donvi){
			case 0: rs+=0; break;
			case 1: rs+=3; break;
			case 2: rs+=3; break;
			case 3: rs+=5; break;
			case 4: rs+=4; break;
			case 5: rs+=4; break;
			case 6: rs+=3; break;
			case 7: rs+=5; break;
			case 8: rs+=5; break;
			case 9: rs+=4; break;
		}
		return rs;}

}

int SoChuTram(int x){//ham tra ve so chu cai cua mot so co ba chu so
	int rs = 0;
	int tram = x/100;
	int chuc = x%100;
	if(chuc == 0){
		switch(tram){
			case 0: rs+=0; break;
			case 1: rs+=10; break;
			case 2: rs+=10; break;
			case 3: rs+=12; break;
			case 4: rs+=11; break;
			case 5: rs+=11; break;
			case 6: rs+=10; break;
			case 7: rs+=12; break;
			case 8: rs+=12; break;
			case 9: rs+=11; break;
		}
		return rs;
	}
	else{
		switch(tram){
			case 0: rs+=0; break;
			case 1: rs+=13; break;
			case 2: rs+=13; break;
			case 3: rs+=15; break;
			case 4: rs+=14; break;
			case 5: rs+=14; break;
			case 6: rs+=13; break;
			case 7: rs+=15; break;
			case 8: rs+=15; break;
			case 9: rs+=14; break;
		}
		rs = rs+SoChuChuc(chuc);
		return rs;
	}
}

int main(){
	int temp = 0;
	int rs = 0;
	for(int i = 1; i<1000;i++)
		rs += SoChuTram(i);
	printf("%d",rs+11);//11 la so chu cai cua 1000
	return 0;
}
