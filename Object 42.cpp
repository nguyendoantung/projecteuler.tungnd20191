#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//h�m t�nh gi� tr? c?a t?
int getValue(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
       sum+= s[i]-'A'+1;
    return sum;
}
int main()
{
    //nh?p d? li?u file v�o 1 m?ng
    string arr[2000];
    ifstream fin("words.txt");
    int size=0; //bi?n s? l??ng t�n trong file
    while(!fin.eof()){
       fin >> arr[size];
       size++;
    }
    fin.close();

    //m?ng gi� tr? c�c t? tam gi�c
    int b[100];
    for(int i=0;i<100;i++)
       b[i]= i*(i+1)/2;

    int count=0;
    for(int j=0;j<size;j++)//duy?t to�n b? t?
    {
       for(int k=0;k<100;k++) //ki?m tra c� ph?i t? tam gi�c?
         if(getValue(arr[j])==b[k])
            count++;
    }
    cout << count << endl;
    return 0;
}

