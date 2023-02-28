/*Nama File : jarakPBola.c*/
/*Deskripsi : Menghitungkan dan menampilkan di layar jarak parabola*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 27 Februari 2023, 19.25*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float v0;
    float t;
    const float g = 9.80665;
    float y;

    // Algoritma
    printf("Kecepatan awal : ");
    scanf("%f", &v0);

    printf("Waktu : ");
    scanf("%f", &t);

    y = v0 * t - 0.5 *(g*pow(t,2));

    printf("y = %f\n", y);

    return 0;
}
