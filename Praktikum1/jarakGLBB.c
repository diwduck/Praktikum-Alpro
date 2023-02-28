/*Nama File : jarakGLBB.c*/
/*Deskripsi : Menghitungkan dan menampilkan di layar jarak GLBB*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 27 Februari 2023, 19.23*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float v0;
    float t;
    float a;
    float s;

    // Algoritma
    printf("Kecepatan awal : ");
    scanf("%f", &v0);

    printf("Waktu : ");
    scanf("%f", &t);

    printf("Percepatan : ");
    scanf("%f", &a);

    s = v0 * t + 0.5 *(a*pow(t,2));

    printf("s = %f\n", s);

    return 0;
}

