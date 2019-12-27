#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	for(a=1;1<333;a++)
		{
			for(b=a+1;b<666;b++)
				{
					c=1000-a-b;
					if(a*a+b*b==c*c) 
					{
						printf("Bo 3 so do la: \n");
						printf("%d\n",a);
						printf("%d\n",b);
						printf("%d\n",c);
						break;
					}
				};
			if(a*a+b*b==c*c) break;
		}
	getch();
	return 0;
}
