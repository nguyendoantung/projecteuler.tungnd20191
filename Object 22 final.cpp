#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

//h�m t�nh ?i?m theo v? tr�
int tinhDiem(string s,int i){
      int temp=0;
      for(int j=0;j<s.length();j++)
         temp+= s[j]-'A'+1; //gi� tr? c?a k� t? theo m� ASCII
      return temp*i ;
}
int main()
{
   //nh?p d? li?u file v�o 1 m?ng
   string arr[6000];
   ifstream fin("names.txt");
   int size=0; //bi?n ??m s? l??ng t�n trong file
   while(!fin.eof()){
      fin >> arr[size++];
   }
   fin.close();

   //h�m c� s?n s?p x?p theo th? t?
   sort(arr,arr+size);

   //t�nh t?ng c?n t�m
   long long int sum=0;
   for(int i=1;i<size;i++)
      sum+= tinhDiem(arr[i],i);

   cout<<sum;
   return 0;
}

