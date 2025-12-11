#include <stdio.h>

// tinh can bac hai
double mySqrt(double n) {
    if (n < 0) return -1;
    double x = n, y = 1, e = 0.000001;
    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

//BÀI 1 tinh hoc luc
void bai1() {
    double dtb;
    printf("Nhap diem trung binh: ");
    scanf("%lf", &dtb);

    if (dtb >= 9)
        printf("Hoc luc: Xuat Sac\n");
    else if (dtb >= 8)
        printf("Hoc luc: Gioi\n");
    else if (dtb >= 6.5)
        printf("Hoc luc: Kha\n");
    else if (dtb >= 5)
        printf("Hoc luc: Trung Binh\n");
    else
        printf("Hoc luc: Yeu\n");
}

// Bài 2 phuong trinh bac 2
void bai2() {
    double a, b;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        printf("Nghiem x = %lf\n", -b / a);
    }
}

// Bài 3 phuong trinh bac 2
void bai3() {
    double a, b, c;
    printf("Nhap a: "); scanf("%lf", &a);
    printf("Nhap b: "); scanf("%lf", &b);
    printf("Nhap c: "); scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh vo so nghiem\n");
            else
                printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Nghiem: x = %lf\n", -c / b);
        }
    } else {
        double delta = b*b - 4*a*c;

        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0)
            printf("Nghiem kep: x = %lf\n", -b / (2*a));
        else {
            double can = mySqrt(delta);
            printf("x1 = %lf\n", (-b + can) / (2*a));
            printf("x2 = %lf\n", (-b - can) / (2*a));
        }
    }
}

// Bài 4 tinh tien dien
void bai4() {
    int kwh;
    double tien = 0;

    printf("Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1806 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1806 + 50 * 1866 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (kwh - 300) * 2834;
    else
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (kwh - 400) * 2927;

    printf("Tien dien phai tra: %.0lf VND\n", tien);
}

// ====================== MENU ======================
int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n");
        printf("4. Tinh tien dien\n");
        printf("5. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: printf("Thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le\n");
        }

    } while (choice != 5);

    return 0;
}