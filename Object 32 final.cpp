#include <stdio.h>
#include <stdlib.h>
//hàm ki?m tra 1 s? có ???c vi?t d??i d?ng 1 ??n 9 s?
int isPandigital(int n)
{
   if(n<123456789 || n>987654321) return 0;
   int arr[10]={0}; //m?ng tránh l?p s?
   int temp,count=0;
   while(n!=0) //l?u l?i các ch? s? c?a n vào m?ng
   {
      temp= n%10;
      arr[temp]= 1;
      n=n/10;
   }
   for(int i=1;i<10;i++)
   {
      if(arr[i]==1)
         count++;
   }
   if(count==9) return 1;
   else return 0;
}
int main()
{
    int a[10000]={0}; //m?ng ?? tránh l?p s?
    int sum=0;
    int p;
    for(int i=1;i<=9;i++) //tr??ng h?p x nhân xxxx = xxxx
    {
      for(int j=1234;j<10000/i;j++)
      {
         p= 100000*i*j + 10*j + i;
         if(isPandigital(p))
            a[i*j]=1;
      }
    }
    for(int i=12;i<=98;i++) //tr??ng h?p xx nhân xxx = xxxx
    {
      for(int j=123;j<10000/i;j++)
      {
         p= 100000*i*j + 100*j + i;
         if(isPandigital(p))
            a[i*j]=1;
      }
    }
    for(int k=1000;k<10000;k++) //c?ng các s? th?a mãn ?? bài
    {
       if(a[k]==1)
         sum+= k;
    }
    printf("%d",sum);
    return 0;
}

