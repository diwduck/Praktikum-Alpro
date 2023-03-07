/*Nama File : kalkSS.c*/
/*Deskripsi : Menerima masukan 2 buah bilangan bulat, misalnya iA dan iB yang dimasukan menggunakan keyboard, dan menuliskan beberapa hasil operasi aritmatika terhadap kedua bilangan tersebut, tergantung pilihan operasi melalui character*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 19.40*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int iA;
    int iB;
    char p;
    float pild;


    // Algoritma
    printf("Bilangan integer pertama (A) : ");
    scanf("%d", &iA);
    printf("Bilangan integer kedua (B) : ");
    scanf("%d", &iB);
    printf("Pilihan : ");
    scanf(" %c",&p);

    if(p == 'a'){
        printf("%d", iA + iB);
    }else if(p == 'b'){
        printf("%d", iA - iB);
    }else if(p == 'c'){
        printf("%d", iA * iB);
    }else if(p == 'd'){
        pild = ((float)iA / (float)iB);
        printf("%f", pild);
    }else if(p == 'e'){
        printf("%d", iA / iB);
    }else if(p == 'f'){
        printf("%d", iA % iB);
    }else{
        printf("Bukan pilihan menu yang benar");
        }



        return 0;
}
