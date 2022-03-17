#include <stdio.h>
#include <stdlib.h>

//MODUL 2 NO 4 (Mutiara)

int validinteger(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void validasi(int *var, char *msg){
	while(1){
		printf(msg);
		if(validinteger(var))
			break;
		printf("[INPUT SALAH] INPUT HANYA BERUPA ANGKA!!");
		printf("\n");
	}
}

int fungsi(int input) {
	if ((input == 0) || (input == 1)) { 
    	return 1;  
    } else { 
        return fungsi(input-1) + fungsi(input-2); //-1 yang berarti nilai sekarang menjadi satu nilai sebelumnya
    }											  //-2 yang berarti nilai sekarang menjadi dua nilai sebelumnya
}												  //lalu ditambah

int main() {
	int ulang;
	do{
		system("cls");
		printf("========================\n");
    	printf("---BILANGAN FIBONACCI---\n");			 
    	printf("========================\n\n\n");		 
    	int j,total;
   
    	validasi (&total, "---Masukkan Banyaknya Deret : ");
    	
    	for (j = 0;j < total; j++){
        	printf(" %d ", fungsi(j));
    	}  
    	printf("\n");
    	
    	
    	printf ("\nApakah Anda Ingin Mengulang Program?(YES=1/NO=0)\n");
    	printf ("Jawaban Anda : ");
    	scanf  ("%d", &ulang);
    	printf("\n");
    }while (ulang==1);
		printf("========================\n");
    	printf("------TERIMA KASIH------\n");			
    	printf("========================\n");
    return 0;
}
    
