/*#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem: ");
    scanf("%f", &diem);

    if (diem >=5) {
        printf("Đậu\n");
    } else {
        printf("Rớt\n");
    }


    return 0;
}*/
#include <stdio.h>

    int main() {
        float diem;
        printf("Nhap diem: ");
        scanf("%f", &diem);

        if (diem >= 9) {
            printf("Xep loai Xuat sac\n");
        } else if (diem >= 8 && diem < 9) {
            printf("Xep loai Gioi\n");
        } else if (diem >= 7 && diem < 8) {
            printf("Xep loai Kha\n");
        } else if (diem >= 5 && diem < 6.5) {
            printf("Xep loai Trung binh\n");
        } else if (diem >= 3 && diem <5){
        } else {
            printf("Xep loai Kem\n");
        }

        return 0;
    }
