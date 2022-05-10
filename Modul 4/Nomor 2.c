#include <stdio.h>
#include <stdlib.h>

void cek_valid(int *var, char *msg);
void pilih_ulang();
void keluar();
void kubusStruct();
void kubusUnion();
int panjang_sisi;

typedef struct{
	int panjang;
	int Lpermukaan;
	int volume;
}kubus_struct;

typedef union{
	int panjang;
	int Lpermukaan;
	int volume;
}kubus_union;

//Validari angka
int validInt(int *var){
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
void cek_valid(int *var, char *msg){
	while(1){
		printf(msg);
		if(validInt(var))
			break;
		printf("\t||[ERROR] Input hanya berupa angka!!");
		printf("\n");
	}
}

void pilih_ulang (){
	int ulang;
	pilihan:
	printf ("\t---------------------------------------------------------\n");
	printf ("\n\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t1. Ya");
	printf ("\n\t2. Tidak");
	cek_valid(&ulang, "\n\t||Silahkan Pilih Kategori Menu(1-2) : ");
	if (ulang == 1){
		main();
	}
	else if (ulang == 2){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Silahkan Input Ulang \n");
		system ("pause");
		system ("cls");
		pilih_ulang();
	}	
}
void keluar(){
	system("cls");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                     TERIMA KASIH                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	system("exit");
}


int main(){
	int menu;
	system("cls");
	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|        PERHITUNGAN KUBUS DENGAN STRUCT DAN UNION      |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 4       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN KATEGORI MENU                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    PERHITUNGAN DENGAN STRUCT                ||\n");
	printf ("\t||   2   |    PERHITUNGAN DENGAN UNION                 ||\n");
	printf ("\t||   3   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu, "\t||Silahkan Pilih Kategori Menu(1-3) : ");
	
	if (menu==1){
		kubusStruct();
	}
	else if (menu==2){
		kubusUnion();
	}
	else if (menu==3){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! [ENTER UNTUK MENGULANG] \n");
		system ("pause");
		system ("cls");
		main();
	}
	
}

void kubusStruct(){
	system("cls");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                PERHITUNGAN DENGAN STRUCT            ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&panjang_sisi, "\t||Masukkan Panjang Sisi Kubus :");
	kubus_struct structs = {.panjang = panjang_sisi,
	.Lpermukaan = 6 *panjang_sisi * panjang_sisi,
	.volume = panjang_sisi * panjang_sisi * panjang_sisi};
	printf("\t||Panjang Sisi Kubus : %d\n", structs.panjang);
	printf("\t||Luas Permukaan Kubus: %d\n", structs.Lpermukaan);
	printf("\t||Volume Kubus : %d\n", structs.volume);
	printf("\t||Ukuran Memory Pada Kubus Struct : %d\n", sizeof(structs));
	pilih_ulang();
}

void kubusUnion(){
	system("cls");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                PERHITUNGAN DENGAN UNION            ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&panjang_sisi, "\t||Masukkan Panjang Sisi Kubus :");
	kubus_union unions[3];
	unions[0].panjang = panjang_sisi;
	unions[1].Lpermukaan = 6 * panjang_sisi * panjang_sisi;
	unions[2].volume = panjang_sisi * panjang_sisi *  panjang_sisi;
	printf("\t||Panjang Sisi Kubus : %d\n", unions[0]);
	printf("\t||Luas Permukaan Kubus: %d\n", unions[1]);
	printf("\t||Volume Kubus : %d\n", unions[2]);
	printf("\t||Ukuran Memory Pada Kubus Union : %d\n", sizeof(unions[0]));
	pilih_ulang();
}
