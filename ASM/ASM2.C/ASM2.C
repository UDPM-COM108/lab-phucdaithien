#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// ================= CHỨC NĂNG 1 =================
void chucNang1() {
    printf("\n=== Chức năng 1: Kiểm tra số nguyên ===\n");
    float num;
    
    printf("Nhập vào một số bất kỳ: ");
    scanf("%f", &num);

    if (num == (int)num) {
        if (num > 0)
            printf("%.0f là số nguyên dương\n", num);
        else if (num < 0)
            printf("%.0f là số nguyên âm\n", num);
        else
            printf("0 là số nguyên\n");
    } else {
        printf("%.2f KHÔNG phải là số nguyên!\n", num);
    }
}

// ================ CHỨC NĂNG 2 ==================
void chucNang2() {
    printf("\n=== Chức năng 2: Tìm UCLN và BCNN ===\n");

    int a, b;
    printf("Nhập số thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập số thứ hai: ");
    scanf("%d", &b);

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int ucln = x;
    int bcnn = (a * b) / ucln;

    printf("UCLN: %d\n", ucln);
    printf("BCNN: %d\n", bcnn);
}

// ================ CHỨC NĂNG 3 ==================
void chucNang3() {
    printf("\n=== Chức năng 3: Tính tiền Karaoke ===\n");

    int batdau, ketthuc;
    float giagoc = 30000;
    float tongtien = 0;

    printf("Nhập giờ bắt đầu (0-23): ");
    scanf("%d", &batdau);
    printf("Nhập giờ kết thúc (0-23): ");
    scanf("%d", &ketthuc);

    if (batdau < 0 || ketthuc > 23 || batdau >= ketthuc) {
        printf("Thời gian không hợp lệ!\n");
        return;
    }

    int sogio = ketthuc - batdau;

    if (sogio == 1) {
        tongtien = giagoc;
    } else {
        tongtien = giagoc + (sogio - 1) * giagoc * 0.7;
    }

    if (batdau >= 14 && ketthuc <= 17) {
        tongtien *= 0.9;
    }

    printf("Số giờ: %d\n", sogio);
    printf("Tiền phải trả: %.0f VND\n", tongtien);
}

// ================ CHỨC NĂNG 4 ==================
void chucNang4() {
    printf("\n=== Chức năng 4: Tính tiền điện ===\n");

    int kwh;
    printf("Nhập số kWh: ");
    scanf("%d", &kwh);

    long tien = 0;

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1678 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    else
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

    printf("Tiền điện: %ld VND\n", tien);
}

// ================ CHỨC NĂNG 5 ==================
void chucNang5() {
    printf("\n=== Chức năng 5: Đổi tiền ===\n");

    long money;
    printf("Nhập số tiền: ");
    scanf("%ld", &money);
int menhgia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int count[9] = {0};

    long temp = money;

    for (int i = 0; i < 9; i++) {
        count[i] = temp / menhgia[i];
        temp %= menhgia[i];
    }

    printf("Kết quả đổi tiền:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0)
            printf("%d tờ %d VND\n", count[i], menhgia[i]);
    }

    printf("Còn dư: %ld VND\n", temp);
}

// ================ CHỨC NĂNG 6 ==================
void chucNang6() {
    printf("\n=== Chức năng 6: Tính lãi suất vay trả góp ===\n");

    double tienVay, laiSuat;
    int soThang;

    printf("Nhập số tiền vay: ");
    scanf("%lf", &tienVay);

    printf("Nhập số tháng vay: ");
    scanf("%d", &soThang);

    printf("Nhập lãi suất tháng (%%): ");
    scanf("%lf", &laiSuat);

    laiSuat /= 100.0;

    double gocThang = tienVay / soThang;
    double conLai = tienVay;

    printf("\n===== BẢNG TRẢ GÓP =====\n");

    for (int i = 1; i <= soThang; i++) {
        double tienLai = conLai * laiSuat;
        double tong = gocThang + tienLai;

        printf("Tháng %2d: Gốc: %.0lf | Lãi: %.0lf | Tổng: %.0lf\n",
               i, gocThang, tienLai, tong);

        conLai -= gocThang;
    }
}

// ================ MAIN MENU ==================
int main() {
    int luachon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Kiểm tra số nguyên\n");
        printf("2. Tìm UCLN & BCNN\n");
        printf("3. Tính tiền Karaoke\n");
        printf("4. Tính tiền điện\n");
        printf("5. Đổi tiền\n");
        printf("6. Tính lãi vay góp\n");
        printf("0. Thoát\n");
        printf("==========================\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1: chucNang1(); break;
            case 2: chucNang2(); break;
            case 3: chucNang3(); break;
            case 4: chucNang4(); break;
            case 5: chucNang5(); break;
            case 6: chucNang6(); break;
            case 0: printf("Thoát chương trình!\n"); break;
            default: printf("Lựa chọn không hợp lệ!\n");
        }

    } while (luachon != 0);

    return 0;
}