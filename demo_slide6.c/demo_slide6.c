#include <stdio.h>
#include <math.h>
int main(){
    // khoi tao mang 1 chieu
    //int a[5]={9,5,7,6,4}
    // nhap mang 1 chieu
    int a[5][5];
    for (int j = 0; j < 5; j++ )
    {
        for(int y = 0; y < 5; y++)
        {
        printf("Nhap phan tu a[%d][%d]: ",j,y);
        scanf("%d", &a[j][y]);
        }
     


    }

    // duyet mang 1 chieu
    printf("xuat mang a:");
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
        printf("%d ",a[i][j]);
    }
    

    }
    
    
return 0;
}
