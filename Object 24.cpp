#include<stdio.h>
#include<conio.h>

int n;
int Bool[20] = { 0 };  //��nh d?u chua c� ph?n t? n�o s? d?ng h?t
int A[20];  //Luu ho�n v? v�o m?ng A
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
        //Ki?m tra n?u ph?n t? chua du?c ch?n th� s? d�nh d?u
        if (!Bool[i]) {
            A[k] = i; // Luu m?t ph?n t? v�o ho�n v?
            Bool[i] = 1;//��nh d?u d� d�ng
            if (k == 4)//Ki?m tra n?u d� ch?a m?t ho�n v? th� xu?t
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

