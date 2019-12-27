#include <stdio.h>
#include <math.h>
//hàm ki?m tra s? nguyên t?
int isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0) return 0;
   return 1;
}
//hàm ??m s? th?a s? nguyên t? riêng bi?t
int countPrime(int n)
{
   int count=0; //bi?n ??m th?a s? nguyên t?
   int i=2;
   while(n!=1)
   {
      if(n%i==0 && isPrime(i))
      {
         count++;
         while(n%i==0)//chia d?n ??n khi không chia ???c ti?p
            n/=i;
      }
      i++;
   }
	return count;
}
int main()
{
   int result=2*3*5*7;//s? ??u tiên t?o b?i 4 th?a s? nguyên t?
   while(1)
   {
      if(countPrime(result)==4 && countPrime(result+1)==4 && countPrime(result+2)==4 && countPrime(result+3)==4)
      {
         printf("%d",result);
         break;
      }
      result++;
   }
   return 0;
}

