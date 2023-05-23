/******************************************************************************
//Nama File         : programsorting.c
//Deskripsi         : Membuat program untuk melakukan sorting dari array yang belum terurut
//                    dengan memilih dari 4 algoritma sorting yaitu,
//                    Bubble, Counting, Insertion, atau Selection Sort lalu menghasilkan array yang terurut.
//Pembuat           : Thoriq Hadiwinata - 24060122130086
//Tanggal Pembuatan : Kamis, 18 Mei 2023, 09:49
*******************************************************************************/

#include <stdio.h>

void BubbleSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;
    //Algoritma
    for (i = 0;i<n-1;i++){
        for (j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


void CountingSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;

    //Algoritma
    int max = findMax(arr, n);

    int* count = (int*)malloc((max + 1) * sizeof(int));

    for (int i = 0; i <= max; i++){
        count[i] = 0;
    }

    for (int i = 0; i < n; i++){
        count[arr[i]]++;
    }

    for (int i = 1; i <= max; i++){
        count[i] += count[i-1];
    }

    int* sortedArray = (int*)malloc(n * sizeof(int));

    for (int i = n-1;i>=0;i--){
        sortedArray[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++){
        arr[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void InsertionSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;

    //Algoritma
    for(i=1;i<n;i++){ //Memilih elemen array
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > temp){ //Melakukan perbandingan
            arr[j+1] = arr[j];
            j = j - 1;

        }
        arr[j+1] = temp;
    }
}

void SelectionSort(int arr[], int n){
    //Kamus
    int i;
    int j;
    int min;
    int temp;

    //algoritma
    for(i=0;i<n;i++){
        min = i; //Inisiasi nilai minimum
        for(j=i+1; j<n;j++){ // Iterasi mencari nilai terkecil
            if(arr[j]<arr[min]){ //Perbandingan
                min = j;
            }
        }

        //Pertukaran
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

int main()
{
    //Kamus
    int n;
    char pilihan;
    int i;

    //Algoritma
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &n);
    printf("Masukkan elemen tabel:\n");
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array sebelum diurutkan: \n");
    printArray(arr,n);
    printf("\nPilih sorting: \n");
    scanf(" %c", &pilihan);
    switch (pilihan){
        case 'A':
            BubbleSort(arr,n);
            printf("Sorting yang digunakan adalah Bubble Sort \n");
            break;
        case 'B':
            CountingSort(arr,n);
            printf("Sorting yang digunakan adalah Counting Sort \n");
            break;
        case 'C':
            InsertionSort(arr,n);
            printf("Sorting yang digunakan adalah Insertion Sort \n");
            break;
        case 'D':
            SelectionSort(arr,n);
            printf("Sorting yang digunakan adalah Selection Sort \n");
            break;
    }
    printf("\nArray setelah diurutkan: \n");
    printArray(arr,n);

    printf("\n\nProgram Selesai");

    return 0;
}
