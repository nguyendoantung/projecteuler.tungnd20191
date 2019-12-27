#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   long long int result=0;
   int a[10]={1,0,2,3,4,5,6,7,8,9}; //hoán v? th? 1
   int count= 1; //bi?n ??m s? th? t? c?a hoán v?
   while(count <= 3265920)//ch? t?n t?i 10!-9! s? 0-9 b?t ??u khác 0
   {
      int t1= (a[1]*100+a[2]*10+a[3])%2==0?1:0;
      int t2= (a[2]*100+a[3]*10+a[4])%3==0?1:0;
      int t3= (a[3]*100+a[4]*10+a[5])%5==0?1:0;
      int t4= (a[4]*100+a[5]*10+a[6])%7==0?1:0;
      int t5= (a[5]*100+a[6]*10+a[7])%11==0?1:0;
      int t6= (a[6]*100+a[7]*10+a[8])%13==0?1:0;
      int t7= (a[7]*100+a[8]*10+a[9])%17==0?1:0;
      if(t1 && t2 && t3 && t4 && t5 && t6 && t7)
      {
         long long int num=0;
         for(int i=0;i<10;i++)//chuy?n ph?n t? m?ng thành s?
            num= 10*num+a[i];
         result+= num; //c?ng s? th?a mãn ?? vào k?t qu?
      }
      next_permutation(a,a+10);// hoán v? ti?p theo c?a ph?n t? m?ng a
      count++;
   }
   cout << result <<endl;
   return 0;
}

