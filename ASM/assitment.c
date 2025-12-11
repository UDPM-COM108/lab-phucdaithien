#include <stdio.h>
int main(){
    char luaChon;
    do{
    printf("1.Chuong trinh kiem tra so nguyen\n");
    printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
    printf("3.Chuong trinh tinh tien cho quan karaoke\n");
    printf("4.Chuong trinh tinh tien dien\n");
    printf("5.Chuong trinh chuc nang doi tien\n");
    printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
    printf("7.Chuong trinh tinh vay tien mua xe\n");
    printf("8.Sap xep thong tin sinh vien\n");
    printf("9.Xay dung game FPOLY-LOTT\n");
    printf("10.Chuong trinh tinh toan phan so\n");
    printf("0.Thoat\n");
    printf("moi ban nhap lua chon: ");
    scanf("%s", &luaChon);
    switch (luaChon)
    {
    case 1: printf("1.Chuong trinh kiem tra so nguyen\n");
        break;
    case 2: printf("2.Chuong trinh uoc so chung va boi chung cua 2 so\n");
        break;
    case 3: printf("3.Chuong trinh tinh tien cho quan karaoke\n");
        break;
    case 4: printf("4.Chuong trinh tinh tien dien\n");
        break;
    case 5: printf("5.Chuong trinh chuc nang doi tien\n");
        break;
    case 6: printf("6.Chuong trinh tinh lai xuat vay ngan hang vay tra gop\n");
        break;
    case 7: printf("7.Chuong trinh tinh vay tien mua xe\n");
        break;
    case 8: printf("8.Sap xep thong tin sinh vien\n");
        break;
    case 9: printf("9.Xay dung game FPOLY-LOTT\n");
        break;
    case 10: printf("10.Chuong trinh tinh toan phan so\n");
        break;
    case 0: printf("0.thoat\n");
        break;
    default:
        printf("Lua chon khong dung nhap lai\n");
    }

}while(luaChon != '0');
     return 0;
}