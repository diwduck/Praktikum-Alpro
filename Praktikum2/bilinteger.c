/*Nama File : bilinteger.c*/
/*Deskripsi : Menampilkan di layar apakah i bilangan integer yang termasuk bilangan bulat positif, negatif atau nol*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 16.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i;

    // Algoritma
    printf("Nilai yang dimasukkan : ");
    if(scanf("%d", &i) != 1){
        printf("Bukan termasuk sebuah bilangan");
    }
    else{
        if(i>0){
        printf("Bilangan bulat positif");
        }else if(i<0){
        printf("Bilangan bulat negatif");
        }else{
        printf("Bilangan nol");
        }
        }


    return 0;
}
