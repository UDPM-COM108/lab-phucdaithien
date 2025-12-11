#include <stdio.h>

// Bài 1: Tính trung bình các số chia hết cho 3
void tinhTrungBinhChiaHetCho3(int arr[], int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count > 0)
        printf("Trung binh cac so chia het cho 3: %.2f\n", (float)sum / count);
    else
        printf("Khong co so nao chia het cho 3 trong mang.\n");
}

// Bài 2: Tìm giá trị lớn nhất và nhỏ nhất
void timMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);
}

// Bài 3: Sắp xếp mảng giảm dần
void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMENU\n");
        printf("1. Tinh trung binh cac so chia het cho 3\n");
        printf("2. Tim gia tri lon nhat va nho nhat\n");
        printf("3. Sap xep mang giam dan\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tinhTrungBinhChiaHetCho3(arr, n);
                break;
            case 2:
                timMinMax(arr, n);
                break;
            case 3:
                sapXepGiamDan(arr, n);
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 0);

    return 0;
}