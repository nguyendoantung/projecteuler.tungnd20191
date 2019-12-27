#include <stdio.h>
int pow(int a, int b){
    int rs = 1;
    for(int i = 0; i < b; i++)
        rs = rs*a;
    return rs;    
}
int main()
{   int a,b,c,d,e,f;
    int temp1 , temp2; 
    int sum = 0;
    for(int i = 1001; i<= 999999; i++){
        temp1 = i;
        a = temp1/100000;    temp1 = temp1 - a*100000;
        b = temp1/10000;     temp1 = temp1 - b*10000;
        c = temp1/1000;      temp1 = temp1 - c*1000;
        d = temp1/100;       temp1 = temp1 - d*100;
        e = temp1/10;        temp1 = temp1 - e*10;
        f = temp1;
        temp2 = pow(a,5)+pow(b,5)+pow(c,5)+pow(d,5)+pow(e,5)+pow(f,5);
        if(temp2 == i) {
            sum += i ;
        }
        
    }
    printf("%d",sum);
    return 0;
}

