/*Nama File : luasKelLayang.c*/
/*Deskripsi : Menghitungkan dan menampilkan di layar luas dan keliling layang-layang*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 27 Februari 2023, 19.33*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Kell;

    // Algoritma
    printf("Sisi 1 : ");
    scanf("%f", &s1);

    printf("Sisi 2 : ");
    scanf("%f", &s2);

    printf("Diagonal 1 : ");
    scanf("%f", &d1);

    printf("Diagonal 2 : ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);

    printf("Luas Layang-layang = %f\n", Luas);
    printf("Keliling = %f\n", Kell);

    return 0;
}


