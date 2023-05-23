//Nama File         : NilMax2Tabel.c
//Deskripsi         : Membuat program untuk mencari nilai maksimal kedua dari tabel
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Kamis, 15 Maret 2023, 08:03

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int max1;
    int max2;

    //Algoritma
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan elemen tabel:\n");
    int T[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    max1 = 0;
    max2 = 0;
    for (i = 0; i < N; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        }
        else{
            if (T[i] > max2 && T[i] != max1) {
                max2 = T[i];
            }
        }
    }
    printf("Nilai maksimum kedua dari tabel adalah: %d\n", max2);
    return 0;
}
