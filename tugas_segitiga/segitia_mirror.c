#include <stdio.h>

// PRO TIP: BAB dulu baru coding, langsung ketemu ide
int main() {
    int rows;
    
    printf("barisnya mw brp? ");
    scanf("%d", &rows);
    
    // PEMIKIRAN NAEL:
    // kita harus ada 2x print yang berlawanan arah 
    // satu incerement satunya decrement
    
    for (int i=1; i <= rows; i++){
        // j = rows - 1 karena kita mau loop dari awal 
        // banyaknya rows untuk pas spasi, jadi
        // semakin tinggi i, maka semakin rendah j.
        for (int j = rows - 1; j >= i ;j--){
            printf(" ");
        }
        // yang ini normal habis spasi dan akan mengisi sisa
        // ruang.
        for (int a =1; a < i; a++){
            printf("*");
        }
        
        printf("\n");
    }

    // Pinter kan, ini pemikiran habis BAB.. serius.
    return 0;
}
