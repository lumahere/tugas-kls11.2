
#include <stdio.h>

// Kita ambil kode dari file segitiga_mirror.c dan masukan ke fungsi pohon natal yang menerima rows dan tangkai sebagai integer
// Jika tidak mau ada fungsi, cantumkanlah keseluruhan dari fungsi pohon_natal kedalam int main
void pohon_natal(int rows, int tangkai){
    
    for (int i=1; i <= rows; i++){
        for (int j = rows - 1; j >= i ;j--){
            printf(" ");
        }
        // Untuk membuat pohon, tinggal di sini tambah i*2, kenapa?
        // Pertama, output normal tanpa i*2 akan terlihat seperti ini:
        /*
      
           *   -- Lihat kalau segitiga ini itu sebenarnya setengah dari 
          **      satu pohon natal kesatuan? Oleh karena itu kita harus 
         ***      *mengiterasi 2x lebih panjang daripada i.
        ****
       *****
      
      */
        for (int a =1; a < i*2 ; a++){
            printf("*");
        }
        printf("\n");
    }
  // untuk membuat tangkai, kita hanya akan membuat loop sampai ke jumlah rows karena pasti dijamin
  // setengah dari i * 2, kalo mau gak hilangin semua kode di bawah ini biar gaada tangkai.
    for (int i=0; i < tangkai; i++){
        for(int j=0; j< rows-1; j++){
            printf(" ");
        }
        printf("*\n");
    }
    

}


int main() {
    int rows, tangkai;
    
    printf("barisnya mw brp? ");
    scanf("%d", &rows);
    printf("tangkainya mw panjang brp? ");
    scanf("%d", &tangkai);
    pohon_natal(rows, tangkai);
    
    return 0;
}
