#include <stdio.h>
#include <math.h>

//////////////////////////////////////////////////////
// BÀI 1: Tính trung bình các số chia hết cho 2
//////////////////////////////////////////////////////
void bai1() {
    int a[20], i, count = 0;
    float tong = 0, trungBinh = 0;

    printf("\n=== BAI 1: TRUNG BINH CAC SO CHIA HET CHO 2 ===\n");
    printf("Nhap 20 so nguyen:\n");

    for (i = 0; i < 20; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {
            tong += a[i];
            count++;
        }
    }

    if (count > 0) {
        trungBinh = tong / count;
        printf("\nTrung binh cac so chia het cho 2 la: %.2f\n", trungBinh);
    } else {
        printf("\nKhong co so nao chia het cho 2.\n");
    }
}

//////////////////////////////////////////////////////
// BÀI 2: Kiểm tra số nguyên tố
//////////////////////////////////////////////////////
void bai2() {
    int x, i, count = 0;

    printf("\n=== BAI 2: KIEM TRA SO NGUYEN TO ===\n");
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        if (x % i == 0) count++;
    }

    if (count == 2)
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d khong phai so nguyen to.\n", x);
}

//////////////////////////////////////////////////////
// BÀI 3: Kiểm tra số chính phương
//////////////////////////////////////////////////////
void bai3() {
    int x;

    printf("\n=== BAI 3: KIEM TRA SO CHINH PHUONG ===\n");
    printf("Nhap x: ");
    scanf("%d", &x);

    int i = sqrt(x);
    if (i * i == x)
        printf("%d la so chinh phuong.\n", x);
    else
        printf("%d khong phai so chinh phuong.\n", x);
}

//////////////////////////////////////////////////////
// BÀI 4: MENU CHO 3 BÀI TRÊN
//////////////////////////////////////////////////////
int main() {
    int chon;

    while (1) {
        printf("\n========= MENU =========\n");
        printf("1. Bai 1: Trung binh cac so chia het cho 2\n");
        printf("2. Bai 2: Kiem tra so nguyen to\n");
        printf("3. Bai 3: Kiem tra so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                printf("\nThoat chuong trinh...\n");
                return 0;
            default:
                printf("\nLua chon khong hop le! Moi nhap lai.\n");
        }
    }

    return 0;
}