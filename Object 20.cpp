#include <stdio.h>
int main()
{
    int A[500];
    for(int i = 0; i<500; i++){
        A[i] = 0;
    }
    A[0] = 1;
    int temp  = 0; int nho = 0;
    for(int j = 1; j<= 100 ; j++){
        temp = 0;
        nho = 0;
        for(int i = 0; i < 500 ; i ++ ){
            temp = nho + A[i] * j;
            A[i] = temp % 10;
            nho  = temp /10;
        }}
    int sum = 0;
    for(int i = 0; i< 500; i++)
        sum +=A[i];
    printf("%d", sum);
    return 0;
}

