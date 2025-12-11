#include <stdio.h>

int main() {
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi chon dap an cua ban: ");

    char answer;
    scanf(" %c", &answer);  

    switch (answer) {  
        case 'a':
            printf("Ban da chon dap an sai!\n");
            break;
        case 'b':
            printf("Ban da chon dap an sai!\n");
            break;
        case 'c':
            printf("Ban da chon dap an dung!\n");
            break;
        case 'd':
            printf("Ban da chon dap an sai!\n");
            break;
        default:
            printf("Ban phai chon dap an a, b, c hoac d!\n");
            break;
    }

    return 0;
}