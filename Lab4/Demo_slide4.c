#include <stdio.h>
#include <math.h>

int main(){
    int n, S = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    //vong lap fot tong so le
    for(int i = 0; i < n; i++){
        if(i%2!=0){
            S+=i;
        }
    }
    printf("Tong so le: %d ,S");
    return 0; 
}

#include <stdio.h>

int main() {
    int min, max;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    int i = min;
    float tong = 0;
    int bienDem = 0;
    float trungBinh = 0;

    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh cac so chan trong khoang la: %.2f\n", trungBinh);
    } else {
        printf("Khong co so chan nao trong khoang!\n");
    }

    return 0;