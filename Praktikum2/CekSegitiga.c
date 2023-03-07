/*Nama File : CekSegitiga.c*/
/*Deskripsi : Menuliskan ke layar dari ke-3 inputan tersebut termasuk Segitiga Sama Sisi, atau Segitiga Sama Kaki, atau Segitiga Sembarang.*/
/*Pembuat   : Thoriq Hadiwinata - 24060122130086*/
/*Tanggal   : Senin, 06 Maret 2023, 19.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int s1;
    int s2;
    int s3;
    //int total;

    // Algoritma
    printf("Sisi 1 : ");
    scanf("%d", &s1);
    printf("Sisi 2 : ");
    scanf("%d", &s2);
    printf("Sisi 3 : ");
    scanf("%d", &s3);


    if((s1>0)&&(s2>0)&&(s3>0)){
        if ((s1==s2)&&(s1==s3)&&(s2==s3)){
            printf("Segitiga sama sisi");
        }else if((s1==s2)||(s1==s3)||(s2==s3)){
            printf("Segitiga sama kaki");
        }else{
            printf("Segitiga sembarangan");
            }
    }else{
        printf("Terdapat nilai yang bukan segitiga");
        }


    return 0;
}


