#include <stdio.h>

int main(){
    const float pi =3.14;
    float r,v,s;
    printf ("hay nhap ban kinh r: ");
    scanf ("%f", &r);
    v= 2*pi*r;
    s=pi*r*r;
    printf ("chu vi hinh tron la: %f\n", v);
    printf ("dien tich hinh tron la: %f\n", s);
    return 0;
}