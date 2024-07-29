
#include <stdio.h>


void diamond(int rows){
    int selesai_atas = 0;
    while(!selesai_atas){
    for (int i=1; i <= rows; i++){
        for (int j = rows - 1; j >= i ;j--){
            printf(" ");
        }
       
        for (int a =1; a < i*2 ; a++){
            printf("*");
            if (a == i*2 - 1 ){
                selesai_atas = 1;
            }
        }
        printf("\n");
        }
    }
    
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows - 1; j >= i; j--) {
            printf(" ");
        }
        for (int a = 1; a < i * 2; a++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    }
    
    


int main() {
    int rows;
    
    printf("barisnya mw brp? ");
    scanf("%d", &rows);
    diamond(rows);
    
    return 0;
}
