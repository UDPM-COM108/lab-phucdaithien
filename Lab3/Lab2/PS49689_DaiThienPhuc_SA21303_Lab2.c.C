#include <stdio.h>
#define PI 3.14

int main(){
    //Bai 1: Tinh tong va hieu 2 so nguyen
    int a, b, tong, hieu;
    printf("Nhap vao 2 so: ");
    scanf("%d %d",&a,&b);

        //Bai 2: Tinh chu vi va dien tich HCM
    float chieudai, chieurong;
    printf("\nNhap vao chieudai và chieurong: ");
    scanf("%f %f", &chieudai, &chieurong);

    float chuvi = (chieudai + chieurong) * 2;
    float dientich = chieudai * chieurong;
    printf("Chu vi hcn la:  %f.2 cm\n, chuvi");
    printf("Dien tich hcn la: %f.2 cm%c", dientich,178);



    //Bai 3:tinh chu vi và dien tich hinh tron
    //Input: Nhap ban kinh hinh tron
    //Output: In ra chu vi va dien tich hinh tron
     float cvi, dtich;
    float bankinh;
    printf ("Nhap vao ban kinh hinh tron: ");
    scanf ("%f", &bankinh);
    cvi = 2 * PI * bankinh;
    dtich = PI * bankinh * bankinh;
    printf ("Chu vi hinh tron la: %.2f\n", cvi);
    printf ("Dien tich hinh tron la: %.2f\n", dtich);

//bai 4 : xay dung chuong trinh tinh diem trung binh 
    float diemtoan, diemly, diemhoa, diemtb;
    printf("nNhap vao diem toan, ly hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtoan*=3; diemly*=2; diemhoa*=1;
    diemtb = (diemtoan + diemly + diemhoa) / 3;
    printf("diem trung binh: %.2f", diemtb);

    //bai 5 tinh chu vi va dien tich hinh tam giac vuong
    float canh1, canh2;
    printf("\nnhap vao 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);
    float chuvi_tamgiac = canh1 + canh2 + (float)(canh1*canh1 + canh2*canh2);
    float dientich_tamgiac = (canh1 * canh2) / 2;
    printf("chu vi hinh tam giac vuong: %.2f", chuvi_tamgiac);
    printf("\ndien tich hinh tam giac vuong: %.2f", dientich_tamgiac);
    return 0;
}