#include <stdio.h>

int main(){
    int a,b,v,s;
    printf ("hay nhap gia tri chieu dai a: ");
    scanf ("%d", &a);
    printf ("hay nhap gia tri chieu rong b: ");
    scanf ("%d", &b);
    v= (a+b)*2;
    s= a*b;
    printf ("chu vi cua hinh chu nhat la: %d\n", v);
    printf ("dien tich cua hinh chu nhat la: %d\n", s);
    return 0;
}