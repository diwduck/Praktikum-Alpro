/*Nama File : namaHari.c*/
/*Deskripsi : Menampilkan ke layar nama-nama Hari dari nomor hari, yaitu 1 s.d. 7 yang dibaca dari masukan keyboard */
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 15.50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i;

    // Algoritma
    printf("Nilai yang dimasukkan : ");
    scanf("%d", &i);
        switch(i){
            case(1):
                printf("Senin");
                break;
            case(2):
                printf("Selasa");
                break;
            case(3):
                printf("Rabu");
                break;
            case(4):
                printf("Kamis");
                break;
            case(5):
                printf("Jum'at");
                break;
            case(6):
                printf("Sabtu");
                break;
            case(7):
                printf("Minggu");
                break;
            default:
                printf("Masukkan nomor hari tidak tepat");}
    return 0;
}


