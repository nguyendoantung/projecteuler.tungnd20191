#include<stdio.h>
#include<conio.h>

int n;
int Bool[20] = { 0 };  //Ðánh d?u chua có ph?n t? nào s? d?ng h?t
int A[20];  //Luu hoán v? vào m?ng A
int count = 0;  //bien dem giup in ra ket qua khi d?t gia tri c?n thi?t
void inketqua() {
    for (int i = 0; i < 5; i++){
       printf("%d",A[i]);
   	}
    printf("\n");
    return;
}

 
void hoanvi(int k) {
    for (int i = 0; i < 5; i++) {
        //Ki?m tra n?u ph?n t? chua du?c ch?n thì s? dánh d?u
        if (!Bool[i]) {
            A[k] = i; // Luu m?t ph?n t? vào hoán v?
            Bool[i] = 1;//Ðánh d?u dã dùng
            if (k == 4)//Ki?m tra n?u dã ch?a m?t hoán v? thì xu?t
                inketqua();
            else
                hoanvi(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
   
    hoanvi(0);
    return 0;
}

