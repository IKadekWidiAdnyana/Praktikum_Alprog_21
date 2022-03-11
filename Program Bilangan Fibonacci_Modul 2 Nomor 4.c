#include <stdio.h>
#include <stdlib.h>

//MODUL 2 NO 4 (Mutiara)
int fungsi(int input) {
	if ((input == 0) || (input == 1)) { 
    	return 1;  
    } else { 
        return fungsi(input-1) + fungsi(input-2); //-1 yang berarti nilai sekarang menjadi satu nilai sebelumnya
    }											  //-2 yang berarti nilai sekarang menjadi dua nilai sebelumnya
}												  //lalu ditambah

int main() {
    printf("BILANGAN FIBONACCI\n\n");
    printf("========================\n");
    int j,total;
    printf("Masukkan Banyaknya Deret : ");
    scanf("%d", &total);
    for (j = 0;j < total; j++){
        printf(" %d ", fungsi(j));
    }  
    printf("\n");
    return 0;
}
    
