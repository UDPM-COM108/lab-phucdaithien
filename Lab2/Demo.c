#include <stdio.h>

int main(){
    float a, b, nhan, chia;
    printf("Nhap vao 2 so thuc: ");
    scanf("%f %f", &a ,&b);
    nhan = a * b;
    chia = a/b;
    printf("nNhan 2 so thuc: %.2f", nhan);
    printf("\nChia 2 so thuc: %.2f", chia);
    return 0;
}