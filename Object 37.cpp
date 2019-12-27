#include <stdio.h>
#include <conio.h>
#include <math.h>
int LT(int x, int a)	//ham tinh giai thua x^a
{
    int i,s=1;
    if (a==0) return 1;
    for (i=0;i<a;i++) s = s*x;
    return s;
}

int KTNT(int x)			//ham kiem tra so nguyen to
{
	int i;
	if(x<2) return 0;
	if(x==2 || x==3) return 1;
	if(x%2==0 || x%3==0) return 0;
	for(i=5;i<=sqrt(x);i+=6)
		if (x%i==0 || x%(i+2)==0) return 0;
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

int KTPhai(int x)	//ham kiem tra so cat phai kieu 3797 379 37 3
{
    int l,d=0;
    if (x<10) return 0;
    l = SCS(x);
    while (x!=0)
    {
        if (KTNT(x) == 0) break;
        else {x = x/10;}
        d++;
    }
    if (d == l) return 1;
    else return 0;
}

int KTTrai(int x)	//ham kiem tra so cat trai kieu 3797 797 97 7
{
    int i,l,temp;
    if (x<10) return 0;
    temp = x;
    for (i=0;i<SCS(x);i++)
    {
        if (KTNT(temp)==0) break;
        l = SCS(temp);
        temp = temp - (temp/LT(10,l-1))*LT(10,l-1);
    }
   if (i == SCS(x)) return 1;
   else return 0;
}

int main()
{
    int d=0,i=10,s=0;	//d: dem so cac so thoa man
    while (d!=11)
    {
        if (KTPhai(i)==1 && KTTrai(i)==1) 
        {
            d++;
            s = s+i;
        }
        i++;
    }
    printf("%d",s);
}
