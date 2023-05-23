//Nama File         : BilPrimaN.c
//Deskripsi         : Membuat program untuk menghitung bilangan prima pada N bilangan
//Pembuat           : Thoriq Hadiwinata - 24060122130086
//Tanggal Pembuatan : Jum'at, 10 Maret 2023, 19:40


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;      //{bilangan}
    int i;      //{counter 1}
    int j;      //{counter 2}
    int faktor; //{faktor}

    //Algoritma
    printf("Masukan Bilangan : ");
    scanf("%d",&N);

    printf("Bilangan Prima dari deret %d adalah : ", N);
    if (N>0){
        for(i=1;i<=N;i++){
            faktor = 0;
            for(j=1;j<=i;j++){
                if (i % j == 0){
                    faktor += 1;
                }
            }
            if (faktor == 2){
                printf("%d", i);
                printf(" ");
            }
        }
    }
    else{
        printf("Masukan Salah!");
    }
    printf("\n");
    return 0;
}
