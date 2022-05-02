#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void input_nilai();
void ranking_nilai();
void cek_valid(int *var, char *msg);
void pilih_ulang();
void keluar();
int clean();


//struct untuk mengelompokkan data
struct mahasiswa{
	char nama[100];
	int nilai;
};

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

int clean(){
while(getchar() != '\n');
return 1;
}

int main(){
	int menu;
	system("cls");
	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|                RANKING NILAI MAHASISWA                |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 4       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN KATEGORI MENU                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    INPUT DATA                               ||\n");
	printf ("\t||   2   |    RANKING DATA                             ||\n");
	printf ("\t||   3   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu, "\t||Silahkan Pilih Kategori Menu(1-3) : ");
	
	if (menu==1){
		input_nilai();
	}
	else if (menu==2){
		ranking_nilai();
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

void input_nilai(){
	int abjad=0, panjang, digit=0, i;
	int ulang;
	char cek;
	struct mahasiswa nilai_mahasiswa;
	FILE *nilai;
	int pilihan;
	system("cls");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||              MENU INPUT NILAI MAHASISWA             ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf("\t||Input Nama Anda :");
	scanf(" %[^\n]s", &nilai_mahasiswa.nama);
	cek_valid(&nilai_mahasiswa.nilai, "\t||Input Nilai Anda : ");
	
	
		
	nilai = fopen("asistenin.txt","a");
	fprintf(nilai,"%s\n%d\n", nilai_mahasiswa.nama,
	nilai_mahasiswa.nilai);
	fclose(nilai);
	
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||                DATA BERHASIL DISIMPAN               ||\n");
	printf ("\t---------------------------------------------------------\n");

	printf ("\t---------------------------------------------------------\n");
	printf ("\n\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t1. Ya");
	printf ("\n\t2. Tidak");
	cek_valid(&ulang, "\n\t||Silahkan Pilih Kategori Menu(1-2) : ");
	if (ulang == 1){
		input_nilai();
	}
	else if (ulang == 2){
		main();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Silahkan Input Ulang \n");
		cek_valid(&ulang, "\n\t||Silahkan Pilih Kategori Menu(1-2) : ");
		system ("cls");
		
	}
}

void ranking_nilai(){
	char temp [100];
	int ulang;
	int counter = 0, i,j,temp2;
	FILE *nilai;
	system("cls");
	nilai = fopen("asistenin.txt", "r");
	if (nilai!=0){
		while (fgets(temp, 100, nilai)){
			counter++;
			fgets(temp, 100, nilai);
		}
		fclose(nilai);
		
		struct mahasiswa nilai_mahasiswa[counter];
		nilai = fopen("asistenin.txt", "r");
		for (i=0; i<counter; i++){
			fgets(temp, 100, nilai);
			temp[strcspn(temp, "\n")] = '\0';
			strcpy(nilai_mahasiswa[i].nama, temp);
			fgets(temp, 100, nilai);
			temp[strcspn(temp, "\n")] = '\0';
			nilai_mahasiswa[i].nilai = atoi(temp);
		}
		fclose(nilai);
		for (i=0; i<counter-1; i++){
			for (j=0; j<counter-1-i; j++){
				if (nilai_mahasiswa[j].nilai < nilai_mahasiswa[j+1].nilai){
					strcpy(temp, nilai_mahasiswa[j].nama);
					strcpy(nilai_mahasiswa[j].nama, nilai_mahasiswa[j+1].nama);
					strcpy(nilai_mahasiswa[j+1].nama,temp);
					temp2 = nilai_mahasiswa[j].nilai;
					nilai_mahasiswa[j].nilai = nilai_mahasiswa[j+1].nilai;
					nilai_mahasiswa[j+1].nilai = temp2;
				}
			}
		}
		nilai = fopen("asistenout.txt", "w");
		fprintf(nilai, "Nilai Mata Kuliah Algoritma dan Pemrograman\n");
		for (i=0; i<counter; i++){
			fprintf(nilai, "%d. %s %d\n", i+1, nilai_mahasiswa[i].nama, nilai_mahasiswa[i].nilai);
		}
		fclose(nilai);
		printf ("\n\t||PERANKINGAN SUDAH DILAKUKAN \n");
		printf ("\t||[SUKSES] CEK FILE asistenout.txt UNTUK MELIHAT \n");
	}
	else{
		fclose(nilai);
		printf ("\n\t||PERANKINGAN GAGAL DILAKUKAN DILAKUKAN \n");
		printf ("\n\t||[ERROR] FILE BELUM TERSEDIA, SILAHKAN INPUT DATA DAHULU\n");
	}
	
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
		cek_valid(&ulang, "\n\t||Silahkan Pilih Kategori Menu(1-2) : ");
		system ("cls");
		
	}
}



void keluar(){
	system("cls");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                     TERIMA KASIH                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	system("exit");
}
