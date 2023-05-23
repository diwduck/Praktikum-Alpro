//Nama File         : CekBilPrima.c
//Deskripsi         : Membuat program untuk mengecek apakah N adalah bilangan prima
//Pembuat           : Thoriq Hadiwinata - 24060122130086
//Tanggal Pembuatan : Jum'at, 10 Maret 2023, 18:54


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;      //{bilangan}
    int i;      //{counter 1}
    int faktor; //{faktor}

    //Algoritma
    printf("Masukan Bilangan : ");
    scanf("%d",&N);

    faktor = 0;
    if (N>0){
        for(i=1;i<=N;i++){
            if (N % i == 0){
                faktor += 1;
            }
        }
        if (faktor == 2){
            printf("Bilangan Prima");
        }
        else{
            printf("Bukan Bilangan Prima");
        }
    }
    else{
        printf("Masukan salah!");
    }
    printf("\n");
    return 0;
}
