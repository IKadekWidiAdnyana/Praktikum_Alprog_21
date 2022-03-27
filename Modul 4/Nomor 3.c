#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h> //header yang berisi fungsi-fungsi untuk mengelompokkan dan manipulasi karakter

void tampil(char kata[]);
void hitung(char kata[]);
int palindrom(char kata[], int size);
char kata [1000];
void cek_valid(int *var, char *msg);
void keluar();
void ulang();

int main (){
	int panjang;
	int i;
	int digit=0;
	int alphabet = 0;
	system("cls");
	printf ("\t*********************************************************\n");
	printf ("\t|           SELAMAT DATANG DI PROGRAM PALINDRON         |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 4       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t||Input Kata : ");
	gets(kata);
	panjang = strlen(kata);
	
	//Melakukan Validasi Kata
	for (i=0; i<panjang; i++){
		if (isdigit(kata[i]) !=0)
		digit++;
	}
	if (digit > 0){
		printf ("\t||ERROR!! Kata Tidak Boleh Mengandung Angka\n");
		printf ("\t||Input Kata Dengan Benar\n");
		ulang();
	}
	fflush(stdin);
	if (panjang <=1){
		printf ("\t||ERROR!! Kata Harus Lebih Dari 1 Huruf\n");
		printf ("\t||Input Kata Dengan Benar\n");
		ulang();
	}
	fflush(stdin);
	hitung (kata);
	return 0;	
}

void hitung(char kata[]){
	int i,j;
	int jumlahKarakter;
	int temp, counter=0;
	
	FILE *file;
	file = fopen("kamuskata.txt", "a");
	jumlahKarakter = strlen(kata);
	fprintf(file, "%s(%d)\t : ", kata, jumlahKarakter);
	for (i=0; i<strlen (kata); i++){
		temp = 0;
		for (j=i-1; j>=0; j--){
			if (tolower(kata[j]) == tolower(kata[i])){
				temp++;
			}
		}
		if (temp == 0){
			counter++;
		}
		else {
			continue;
		}
	}
	char huruf[counter];
	int jumlahHuruf[counter];
	printf("\t||%s(%d) : ", kata, jumlahKarakter);
	for (i=0; i<strlen(kata); i++){
		kata[i] = tolower(kata[i]);
	}
	for (i=0; i<strlen(kata); i++){
		counter = 0;
		temp = 0;
		
		for (j=i-1; j>=0; j--){
			if (kata[j] == kata[i]){
				temp++;
			}
		}
		if (temp == 0){
			for (j=i; j<strlen(kata); j++){
				if (kata[j] == kata[i]){
					temp++;
				}
			}
			huruf[counter] = kata[i];
			jumlahHuruf[counter] = temp;
			printf("%c=%d ",huruf[counter], jumlahHuruf[counter]);
			fprintf(file, "%c=%d ", huruf[counter], jumlahHuruf[counter]);
			counter++;
		}
		else{
			continue;
		}	
	}
	fclose(file);
	tampil(kata);	
}

void tampil(char kata[]){
	FILE *file;
	file = fopen("kamuskata.txt", "a");
	if (palindrom(kata, strlen(kata)) == 1){
		printf("\t = [PALINDRON]");
		fprintf(file, "\t = [PALINDRON]\n");
	}
	else {
		printf("\t = [BUKAN PALINDRON]");
		fprintf(file, "\t = [BUKAN PALINDRON]\n");
	}
	fclose(file);
	ulang();
}

int palindrom(char kata[], int size){
	int i, status = 1;
	for (i=0; i<size; i++){
		if (kata[i] == kata[size-1-i]){
			continue;
		}
		else {
			status = 0;
			break;
		}
	}
	return status;	
}

int clean(){
	while(getchar() != '\n');
	return 1;
}

void ulang (){
	int pilih;
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\n\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t1. Ya");
	printf ("\n\t2. Tidak");
	cek_valid(&pilih,"\n\tMasukkan nomor pilihan Anda : ");
	if (pilih == 1){
		main();
	}
	else if (pilih == 2){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Silahkan Input Ulang\n");
		ulang();
	}	
}

void keluar(){
	system("cls");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                     TERIMA KASIH                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	system("exit");
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
		printf("\t||[ERROR] Input hanya berupa angka!!");
		printf("\n");
	}
}
