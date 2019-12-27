#include <stdio.h>
#include <conio.h>

int main()
{
	int dayso[334]={0};
	int i, j, tg, nho, t;
	dayso[0]=1;
	for(i=0;i<1000;++i)
	{
		nho=0;
		for(j=0;j<334;++j)
		{
			tg=2*dayso[j]+nho;
			nho=0;
			if(tg>9)
			{
				dayso[j]=tg%10;
				nho = tg/10;
			} else dayso[j]=tg;
		}
	}
	t=0;
	for (i=333;i>=0;i--)  t+=dayso[i];
		//if(dayso[i]!=0) printf("%d",dayso[i]);		//neu yeu cau in ra ket qua 2^1000
	printf("%d",t);
	return 0;
	getch();
}



