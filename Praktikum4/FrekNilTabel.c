//Nama File         : FrekNilTabel.c
//Deskripsi         : Membuat program untuk mencari nilai yang memiliki frekuensi kemunculan lebih dari satu
//Pembuat           : Thoriq Hadiwinata - 24060122130086
//Tanggal Pembuatan : Jum'at, 19 Maret 2023, 14:50

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int j;
    int count;

    //Algoritma
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan elemen tabel:\n");
    int T[N];
    int freq[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
        freq[i]=-1; // menginisialisasi semua elemen frekuensi menjadi -1
    }

    for(i=0;i<N;i++){
        count = 1;
        for (j=i+1;j<N;j++){
            if(T[i] == T[j]){
                count++;
                freq[j] = 0; // mengatur frekuensi elemen yang sama menjadi 0
            }
        }
        if (freq[i] != 0){
            freq[i] = count;
        }
    }
    printf("\nFrekuensi kemunculan elemen dalam tabel:\n");
    for (i = 0; i < N; i++){
        if (freq[i] > 1){
            printf("%d, ", T[i]);
        }
    }
    return 0;
}
