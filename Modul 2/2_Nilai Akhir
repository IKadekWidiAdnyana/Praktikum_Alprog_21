#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Modul 2 Nomor 2

void judul(){
	printf("===================================\n");
 	printf("    Program Penentuan Nilai Akhir  \n");
 	printf("===================================\n");
}

void akhir(){
	printf("\n\n=====================================\n");
 	printf("    Terima Kasih dan Tetap Semangat  \n");
 	printf("=====================================\n");
}

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
		printf("\n[ERROR] Input hanya berupa angka!!");
		printf("\n");
	}
}

void invalid(){
	printf("\n\nInput Invalid");
 	printf("\nMohon Input Angka 0-100\n");
 	sleep(2);
 	system("cls");
}

void reset(){
 	int ulang;
 	printf("\nIngin Mengulangi? [y / t] ");
 	ulang = getch();
 	
 	if (ulang == 'y' || ulang == 'Y'){
		system("cls");
 		main();
 	}else if (ulang == 't' || ulang == 'T'){
 		akhir();
 		return;
 	}else{
 		system("cls");
 		judul();
 		printf(" Input Invalid\n");
 		reset();
 	}
}

int main(){
	int absensi;
	float rataan_absensi;
	
	int nilai_tugas1;
	int nilai_tugas2;
	int nilai_tugas3;
	
	int nilai_quiz;
	int nilai_uts;
	int nilai_uas;
	float nilai_angka;
	
 	float rataan_tugas;
	float rataan_quiz;
	float rataan_uts;
	float rataan_uas;
	
	char nilai_huruf[5];
	char pilihan;
	
 	int ulangi1, ulangi2;
	
	do{
		judul();
 		cek_valid(&absensi, "Masukkan Jumlah Kehadiran : ");
 		fflush(stdin);
 
 		if ((absensi > 15 || (absensi < 0))){
	 		printf("\n\nJumlah Kehadiran tidak Valid");
 			printf("\nMohon Input Angka 0-15\n");
 			sleep(2);
 			system("cls");
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 
	}while (ulangi2 == 1);
 		system("cls");
 		rataan_absensi = absensi * 0.05;
 		
 
 	do{
 		judul();
 		cek_valid(&nilai_tugas1, "Masukkan Nilai Tugas 1 : ");
 		fflush(stdin);
 		
 		if (nilai_tugas1 < 0 || nilai_tugas1 > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 
 	}while (ulangi2 == 1);
 		
 
 	do{
 		cek_valid(&nilai_tugas2, "Masukkan Nilai Tugas 2 : ");
 
 		if (nilai_tugas2 < 0 || nilai_tugas2 > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 
 	}while (ulangi2 == 1);
 		
 
 	do{
 		cek_valid(&nilai_tugas3, "Masukkan Nilai Tugas 3 : ");
 		fflush(stdin);
 		
 		if (nilai_tugas3 < 0 || nilai_tugas3 > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 
 	}while (ulangi2 == 1);
 		system("cls");
 		rataan_tugas = (nilai_tugas1 + nilai_tugas2 + nilai_tugas3) / 3 * 0.2;
		
 	do{
 		judul();
 		cek_valid(&nilai_quiz, "Masukkan Nilai Quiz	: " );
 		fflush(stdin);
		 	
 		if (nilai_quiz < 0 || nilai_quiz > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 	}while (ulangi2 == 1);
 		rataan_quiz = nilai_quiz * 0.15;
 		
 		
 	do{
 		cek_valid(&nilai_uts, "Masukkan Nilai UTS	: ");
 		fflush(stdin);
		 	
 		if (nilai_uts < 0 || nilai_uts > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
 			ulangi2 = 0;
 		}
 
 	}while (ulangi2 == 1);
 		rataan_uts = nilai_uts * 0.3;
 		
 	do{
 		cek_valid(&nilai_uas, "Masukkan Nilai UAS	: ");
 		fflush(stdin);
		 	
 		if (nilai_uas < 0 || nilai_uas > 100){
 			invalid();
 			ulangi2 = 1;
 		}else{
			ulangi2 = 0;
 		}
 		
 	}while (ulangi2 == 1);
 		system("cls");
		rataan_uas = nilai_uas * 0.3;
 		judul();
 		nilai_angka = rataan_absensi + rataan_tugas + rataan_quiz + rataan_uts + rataan_uas;
 		
	printf("Nilai Akhir = %2.f", nilai_angka);
	
 	if (nilai_angka >= 80 && nilai_angka <= 100){
 		printf("\nNilai Huruf = A", nilai_huruf);
 		
 	}else if (nilai_angka >= 75 && nilai_angka < 80){
 		printf("\nNilai Huruf = B+", nilai_huruf);
 		
 	}else if (nilai_angka >= 65 && nilai_angka < 75){
 		printf("\nNilai Huruf = B", nilai_huruf);
 		
 	}else if (nilai_angka >= 60 && nilai_angka < 65){
 		printf("\nNilai Huruf = C+", nilai_huruf);
		 	
 	}else if (nilai_angka >= 55 && nilai_angka < 60){
 		printf("\nNilai Huruf = C", nilai_huruf);
 		
	}else if (nilai_angka >= 50 && nilai_angka < 55){
 		printf("\nNilai Huruf = D+", nilai_huruf);
 		
	}else if (nilai_angka >= 45 && nilai_angka < 50){
 		printf("\nNilai Huruf = D", nilai_huruf);
		 	 	 	
	}else if(nilai_angka >= 0 && nilai_angka < 45){
 		printf("\nNilai Huruf = E", nilai_huruf);	
 	}
 	
 	reset();
 	return 0;
}








