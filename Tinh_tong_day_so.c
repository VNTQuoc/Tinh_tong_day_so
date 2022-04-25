#include <stdio.h>
// Tinh tong cua day so
int main()
{
    int i, n;
    long s;
    printf("\nMoi ban nhap so nguyen bat ky n: ");
    scanf("\n%d", &n);

    s = 0;
    i = 1;
    while(i <= n)
    {
        s = s + i;
        i = i + 1;
    }
    printf("\n%ld", s);

    return 0;
}