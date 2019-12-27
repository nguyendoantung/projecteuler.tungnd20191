#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

//hàm tính ?i?m theo v? trí
int tinhDiem(string s,int i){
      int temp=0;
      for(int j=0;j<s.length();j++)
         temp+= s[j]-'A'+1; //giá tr? c?a kí t? theo mã ASCII
      return temp*i ;
}
int main()
{
   //nh?p d? li?u file vào 1 m?ng
   string arr[6000];
   ifstream fin("names.txt");
   int size=0; //bi?n ??m s? l??ng tên trong file
   while(!fin.eof()){
      fin >> arr[size++];
   }
   fin.close();

   //hàm có s?n s?p x?p theo th? t?
   sort(arr,arr+size);

   //tính t?ng c?n tìm
   long long int sum=0;
   for(int i=1;i<size;i++)
      sum+= tinhDiem(arr[i],i);

   cout<<sum;
   return 0;
}

