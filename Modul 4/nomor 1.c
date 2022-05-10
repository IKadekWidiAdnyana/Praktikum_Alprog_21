#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void cek_valid(int *var, char *msg);
void pilih_ulang();
void keluar();

typedef struct{
	int total_jamKerja;
	int jam_lembur;
	int jam_pokok;
	int gaji_pokok;
	int gaji_lembur;
	int total_gaji;
}gaji_pegawai;

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
	system("cls");
	gaji_pegawai gp;
	
	gp.total_jamKerja=0;
	gp.jam_lembur=0;
	gp.jam_pokok=0;
	gp.gaji_pokok=0;
	gp.gaji_lembur=0;
	gp.total_gaji=0;
	
	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|                MENGHITUNG GAJI KARYAWAN               |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 4       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	cek_valid(&gp.total_jamKerja,"\t||Input Jam Kerja Anda :");
	if(gp.total_jamKerja > 8){
		gp.jam_pokok=8;
		gp.jam_lembur= gp.total_jamKerja-8;
		gp.gaji_pokok= 8*10625;
		gp.gaji_lembur= (gp.jam_lembur*85000);
	}
	else{
		gp.gaji_pokok= 10625* gp.total_jamKerja;
		gp.jam_pokok = gp.total_jamKerja;
	}
	
	gp.total_gaji = gp.gaji_lembur + gp.gaji_pokok;
	
	printf("\n\t||Jumlah Jam Kerja 		:%d\n", gp.total_jamKerja);
	printf("\t||Jumlah Jam Kerja Pokok 	:%d\n", gp.jam_pokok);
	printf("\t||Jumlah Jam Kerja Lembur 	:%d\n", gp.jam_lembur);
	printf("\t||Jumlah Gaji Pokok 		:%d\n", gp.gaji_pokok);
	printf("\t||Jumlah Gaji Lembur 		:%d\n", gp.gaji_lembur);
	printf("\t||Total Gaji Anda 		:%d\n", gp.total_gaji);
	pilih_ulang();	
}
