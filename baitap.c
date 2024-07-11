#include <stdio.h>

int main()
{
    int a, b ;
    int tong, hieu;
    printf("nhap so nguyen thu nhat : ", a);
    scanf("%d", &a);
    printf("nhap so nguyen thu hai : ", b);
    scanf("%d", &b);
    tong = a + b;
    hieu = a - b;
    printf("Tong cua hai so nguyen la : %d\n", tong);
    printf("Hieu cua hai so nguyen la : %d ", hieu);
return 0;

}