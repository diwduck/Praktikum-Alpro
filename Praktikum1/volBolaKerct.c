/*Nama File : volBolaKerct.c*/
/*Deskripsi : Menghitungkan dan menampilkan di layar hasil perhitungan volume bola dan volume kerucut*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 27 Februari 2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float r;
    float Vb;
    const float phi = 3.14;
    float Vk;

    // Algoritma
    printf("Jari-jari : ");
    scanf("%f", &r);

    Vb = 1.333 *(phi*pow(r,3));
    Vk = 0.5 * Vb;


    printf("Vb = %f\n", Vb);
    printf("Vk = %f\n", Vk);

    return 0;
}

