#include<stdio.h>
#include<conio.h>
int SCS(long long int x)		//ham dem so chu so cua 1 so
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
int check_hoanvi(long long int x){
	long long int n = x;
	long long int temp;
    int l = SCS(x);
    long long int a[l] = {0};
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
int kiemtra(long long int x){
    long long int n = x;
    int a,b,c,d,e,f,g;
    if(check_hoanvi(n) == 0) return 0;
    else{
        g=n%1000; n =n/1000;
        if(g%17 != 0) return 0;
        else{
            f= n%1000; n=n/1000;
            if(f%13 != 0) return 0;
            else{
                e=n%1000; n =n/1000;
                if(e%11 != 0) return 0;
                else{
                    d=n%1000; n =n/1000;
                    if(d%7 != 0) return 0;
                    else{
                        c=n%1000; n =n/1000;
                        if(c%5 != 0) return 0;
                        else{
                            b=n%1000; n =n/1000;
                            if(b%3 != 0) return 0;
                            else{
                                a = n%10;
                                if(a%2 != 0) return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}
int main()
{
    long long int sum = 0;
    for(long long int i = 1000000000; i<= 9999999999; i++){
        if(kiemtra(i) == 1) sum+=i;
    }
    printf("%lld",sum);
    return 0;
}
