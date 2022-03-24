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
		system("cls");
		printf("\n\t\t||[INPUT SALAH] INPUT HANYA BERUPA ANGKA!!");
		printf("\n");
	}
}

void selesai (){
	system("cls");
	printf("\n\t\t========================\n");
    printf("\n\t\t------TERIMA KASIH------\n");			
    printf("\n\t\t========================\n");
}

void pilihan_ulang (){
	int ulang;
	printf ("\n\t\t****Apakah Anda Ingin Mengulang Program?(YES=1/NO=0)\n");
	validasi(&ulang,"\n\t\tJawaban Anda : ");
	if (ulang == 1){
		main();
	}
	else if (ulang == 0){
		selesai();
	}
	else{
		printf ("\n\t\t||[INPUT SALAH] SILAHKAN INPUT ULANG (YES=1/NO=0)\n");
		pilihan_ulang();
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
		system("cls");
		printf("\n\t\t========================\n");
    	printf("\n\t\t---BILANGAN FIBONACCI---\n");			 
    	printf("\n\t\t========================\n\n\n");		 
    	int j,total;
   
    	validasi (&total, "\n\t\t---Masukkan Banyaknya Deret : ");
    	
    	for (j = 0;j < total; j++){
        	printf("\n\t\t	%d ", fungsi(j));
    	}  
    	printf("\n");
    	pilihan_ulang();
    	
    return 0;
}
    
