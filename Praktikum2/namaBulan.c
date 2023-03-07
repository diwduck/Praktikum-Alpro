/*Nama File : namaBulan.c*/
/*Deskripsi : Menuliskan ke layar nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12 yang dibaca dari masukan keyboard*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 18.20*/

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
                printf("Januari");
                break;
            case(2):
                printf("Februari");
                break;
            case(3):
                printf("Maret");
                break;
            case(4):
                printf("April");
                break;
            case(5):
                printf("Mei");
                break;
            case(6):
                printf("Juni");
                break;
            case(7):
                printf("Juli");
                break;
            case(8):
                printf("Agustus");
                break;
            case(9):
                printf("September");
                break;
            case(10):
                printf("Oktober");
                break;
            case(11):
                printf("November");
                break;
            case(12):
                printf("Desember");
                break;
            default:
                printf("Masukkan nomor bulan tidak tepat");}
    return 0;
}
