/*Nama File : hitungTahanan.c*/
/*Deskripsi : Menerima 3 buah tahanan yang dimasukan menggunakan keyboard dan menghasilkan total tahanan*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 16.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int t1;
    int t2;
    int t3;
    int total;

    // Algoritma
    printf("Tahanan 1 : ");
    scanf("%d", &t1);
    printf("Tahanan 2 : ");
    scanf("%d", &t2);
    printf("Tahanan 3 : ");
    scanf("%d", &t3);


    if((t1>=0)&&(t2>=0)&&(t3>=0)){
            total = t1 + t2 + t3;
            printf("Total tahanan = %d\n", total);
    }else{
        printf("Masukan tahanan tidak boleh negatif");
        }

    return 0;
}

