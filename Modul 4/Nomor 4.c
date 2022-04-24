#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef char data [300];

typedef struct{
	data nama;
	data nim;
} mahasiswa;
void cek_valid(int *var, char *msg);
void input_data(mahasiswa mhs);
void cari_data(mahasiswa mhs);
void lihat_data(mahasiswa mhs);
void pilih_ulang();
void keluar();



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

int main(){
	int menu;
	mahasiswa mhs;
	system("cls");
	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|            SISTEM INFORMASI DATA MAHASISWA            |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 4       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN KATEGORI MENU                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    INPUT DATA                               ||\n");
	printf ("\t||   2   |    CARI DATA                                ||\n");
	printf ("\t||   3   |    LIHAT DATA                               ||\n");
	printf ("\t||   4   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu, "\t||Silahkan Pilih Kategori Menu(1-4) : ");
	
	if (menu==1){
		input_data(mhs);
	}
	else if (menu==2){
		cari_data(mhs);
	}
	else if (menu==3){
		lihat_data(mhs);
	}
	else if (menu==4){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! [ENTER UNTUK MENGULANG] \n");
		system ("pause");
		system ("cls");
		main();
	}
	
}

int get_size(const char *file_name){
	FILE *file = fopen(file_name, "r");
	if (file == NULL)
	return 0;
	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	fclose(file);
	return size;
	
	
	
}
void input_data(mahasiswa mhs){
	int abjad=0, panjang, digit=0, riwayat=0, i;
	int pilihan;
	data noId,nama;
	//inisialisasi data
	const char *data_nim = "";
	const char *data_id = "";
	const char *data_nama = "";
	
	system("cls");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||               MENU INPUT DATA MAHASISWA             ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||Input NIM Anda :");
	if (fgets(mhs.nim, sizeof(mhs.nim), stdin) != NULL){
		char *ptr = strchr(mhs.nim, '\n');
		if (ptr){
			*ptr = '\0';
		}	
	}
	panjang= strlen(mhs.nim);
	//validasi nim hanya angka
	for (i = 0; i < panjang; i++){
	//cek abjad
	if (isalpha(mhs.nim[i]) != 0) abjad++;
	}
	if (abjad >0){
		printf("\t|| [ERROR]NIM Tidak Boleh Mengandung Huruf!\n");
		cek_valid(&pilihan, "\t||Tekan Angka Untuk Input Ulang : ");
		input_data(mhs);
	}
	fflush(stdin);
	
	// validasi nim minimal 2 angka
	if (panjang <= 1){
		printf("\t||[ERROR]NIM Tidak Kurang Dari Dua Angka!\n");
		cek_valid(&pilihan, "\t||Tekan Angka Untuk Input Ulang : ");
		input_data(mhs);
	}
	
	//validasi nim tidak boleh ada spasi
	else{
		if (strchr(mhs.nim, ' ')){
		printf("\t||[ERROR]NIM Tidak Boleh Mengandung Spasi!\n");
		cek_valid(&pilihan, "\t||Tekan Angka Apapun Untuk Kembali Input Ulang : ");
		input_data(mhs);
		}
	}
	fflush(stdin);
	
	printf ("\t||Input Nama Anda :");
	gets(mhs.nama);
	panjang= strlen(mhs.nama);
	for (i = 0; i < panjang; i++){
	//cek digit
	if (isdigit(mhs.nama[i]) !=0) digit++;
	}
	
	//validasi nama tidak boleh mengandung angka
	if (digit >0){
		printf("\t|| [ERROR]Nama Tidak Boleh Mengandung Angka!\n");
		cek_valid(&pilihan, "\t||Tekan Angka Untuk Input Ulang : ");
		input_data(mhs);
	}
	fflush(stdin);
	
	//validasi nama minimal 3 huruf
	if (panjang <=2){
		printf("\t|| [ERROR]Nama Tidak Kurang Dari Tiga Huruf!\n");
		cek_valid(&pilihan, "\t||Tekan Angka Untuk Input Ulang : ");
		input_data(mhs);
	}
	fflush(stdin);
	printf ("\t---------------------------------------------------------\n");
	FILE *out = fopen("dataMahasiswa.txt", "r");
	riwayat=0;
	if (!out){
	printf("\t|| [DATA BELUM ADA]\n");	
	}
	else{
		if (get_size("dataMahasiswa.txt")==0){
			riwayat=0;
		}
		else{
			while (!feof(out)){
			fflush(stdin);
			fscanf(out, "%s # %[^#] #\n", &noId, &nama);
			const char *data_nim = mhs.nim;
			const char *data_id = noId;
			if (strcmp(data_nim, data_id) == 0){
				riwayat = riwayat +1;
			}
			}	
		}
		fclose(out);
	}
	if (riwayat >0){
		printf("\t|| [DATA BELUM ADA]\n");
		riwayat = 0;
	}
	else{
		printf("\t|| [INPUT DATA BERHASIL]\n");
		FILE *in = fopen("dataMahasiswa.txt", "a");
		const char *data_nim = mhs.nim;
		const char *data_nama = mhs.nama;
		fprintf(in, "%s # %s # \n", data_nim, data_nama);
		fclose(in);
		pilih_ulang();
	}
	
}

void cari_data(mahasiswa mhs){
	system("cls");
	int riwayat;
	data data_cari;
	
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||               MENU CARI DATA MAHASISWA              ||\n");
	printf ("\t---------------------------------------------------------\n");
//	cek_valid(&data_cari, "\n\t||Input NIM Mahasiswa:  : ");
	printf ("\t||Input NIM Mahasiswa: ");
	scanf ("%s", data_cari);
	fflush(stdin);
	printf ("\t---------------------------------------------------------\n");
	FILE *cari = fopen("dataMahasiswa.txt", "r");
	riwayat = 0;
	
	if (data_cari == NULL){//akan berjalan ketika file txt tidak ada
		printf("\t|| [DATA TIDAK ADA / FILE TXT TIDAK ADA]\n");	
	}
	else{
		while (!feof(cari)){
			fflush(stdin);
			fscanf (cari, "%s # %[^#] #\n", &mhs.nim, mhs.nama);
			if (strcmp(mhs.nim, data_cari) == 0){
				printf("\t|| [DATA BERHASIL DITEMUKAN]\n");
				printf("\t|| NIM	:%s\n", mhs.nim);
				printf("\t|| NAMA	:%s\n", mhs.nama);
				riwayat = riwayat + 1;
			}
		}
		fclose(cari);
		if (riwayat == 0){
			printf("\t|| [DATA MAHASISWA TIDAK DITEMUKAN DALAM FILE ]\n");
		}
		riwayat = 0;
	}
	pilih_ulang();
	
	
}


void lihat_data(mahasiswa mhs){
	int nomor =1;
	system("cls");
	int ulang;
	
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||                    DATA MAHASISWA                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	
	FILE *lihat = fopen("dataMahasiswa.txt", "r");
	if (lihat == NULL){
		printf("\t|| [DATA BELUM ADA]\n");
	}
	else {
		while (!feof(lihat)){
			fflush(stdin);
			fscanf (lihat, "%s # %[^#] #\n", &mhs.nim, &mhs.nama);
			printf("\t|| [%d] NIM : %s\n", nomor, mhs.nim);
			nomor++;
			printf("\t|| NAMA : %s\n", mhs.nama);
			printf ("\t---------------------------------------------------------\n");
		}
		fclose(lihat);
		pilih_ulang();	
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




