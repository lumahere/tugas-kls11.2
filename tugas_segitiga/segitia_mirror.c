#include <stdio.h>

int main() {
    int rows; // kita mendeklarasikan rows sebagai kolom kita
    
    printf("barisnya mw brp? ");
    scanf("%d", &rows); // input rows
    rows += 1; // karena ada bug dikit

    
    // IDE utama:
    // kita harus ada 2x print yang berlawanan arah 
    // satu *incerement satunya *decrement
    
    for (int i=1; i <= rows; i++){
        // j = rows - 1 karena kita mau loop dari awal 
        // banyaknya rows untuk pas spasi, jadi
        // semakin tinggi i, maka semakin rendah j.
        for (int j = rows - 1; j >= i ;j--){
            printf(" ");
        }
        // Nilai a akan digunakan untuk mengisi ruang kosong setelah spasi  
        for (int a =1; a < i; a++){
            printf("*");
        }

        // Ini adalah visualisasi output jika rows = 5;
        // - = spasi, * = star
        /*
           ----*    -> j = 4, i = 1, a = 1; JADI 4 spasi, 1 star
           ---**    -> j = 3, i = 2, a = 2; JADI 3 spasi, 2 star 
           --***    -> j = 2, i = 3, a = 3; JADI 2 spasi, 3 star
           -****    -> j = 1, i = 4, a = 4; JADI 1 spasi, 4 star
           *****    -> j = 0, i = 5, a = 5; JADI 0 spasi, 5 star

           ; Bisa dilihat bahwa variabel i dan a mencoba mengisi ruang kosong dari j
           ; oleh karena itu, semakin j (spasi) turun, maka banyak a (bintang) akan naik
        */
        printf("\n");
    }

    return 0;
}
