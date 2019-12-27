#include <stdio.h>

int main()
{   
    int step, s1 = 0,s2 = 0,s3 = 0,s4 = 1;
    int sum  = 1;
    int count = 3;
    while(count <= 1001){
        step = count - 1;
        s1 = s4 + step ; 
        s2 = s1 + step ;
        s3 = s2 + step ;
        s4 = s3 + step ;
        sum += s1+s2+s3+s4 ;
        count += 2 ;
    }
    printf("%d",sum);
    return 0;
}

