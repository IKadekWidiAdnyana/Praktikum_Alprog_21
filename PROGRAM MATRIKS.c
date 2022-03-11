#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Penjumlahan_Matriks();
void Perkalian_Matriks();
void Transpose_Matriks();
void cek_valid(int *var, char *prompt);
void pilih_ulang();
void keluar();



int main(){
	system("cls");
	int menu;
	char valid;
	ulang:
	printf ("\t*********************************************************\n");
	printf ("\t|           SELAMAT DATANG DI OPERASI MATRIKS           |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 3       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN KATEGORI MENU                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    PENJUMLAHAN MATRIKS                      ||\n");
	printf ("\t||   2   |    PERKALIAN MATRIKS                        ||\n");
	printf ("\t||   3   |    TRANSPOSE MATRIKS                        ||\n");
	printf ("\t||   4   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu, "\t||Silahkan Pilih Kategori Menu(1-4) : ");
	fflush(stdin);
	if (menu == 1){
		Penjumlahan_Matriks();
	}
	else if (menu == 2){
		Perkalian_Matriks();
	}
	else if (menu == 3){
		Transpose_Matriks();
	}
	else if (menu == 4){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Ingin Melanjutkan (Y/T) : ");
		scanf ("%s", &valid);
	}
	if (valid == 'y'||valid == 'Y'){
		system ("cls");
		goto ulang;
	}
	else {
		keluar();
	}
	
}

void Penjumlahan_Matriks(){
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                MATRIKS PENJUMLAHAN                  ||\n");
	printf ("\t---------------------------------------------------------\n");
	int i,j,m,n,matriks1[10][10], matriks2[10][10], hasil[10][10];
	cek_valid(&m,"\t||Input Jumlah Baris Matriks : ");
	cek_valid(&n,"\t||Input Jumlah Kolom Matriks : ");
	fflush(stdin);
	//mengisi elemen matriks pertama
	printf ("\n\t||Input Elemen Matriks [1] \n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf ("\t||Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks1[i][j],"Input elemen : ");
		}
	}
	printf ("\n");
	//mengisi elemen matriks kedua
	printf ("\n\t||Input Elemen Matriks [2] \n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf ("\t||Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks2[i][j],"Input elemen : ");
		}
	}
	printf ("\n");
	//menampilkan elemen matriks pertama
	printf ("\n\t---------------------\n");
	printf ("\t||Data Matriks Ke-1||\n");
	printf ("\t---------------------\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	      	printf (" %d ", matriks1[i][j]);
	      	printf("|");
	    }
	    printf ("\n");
	}
	//menampilkan elemen matriks kedua
	printf ("\n\t---------------------\n");
	printf ("\t||Data Matriks Ke-2||\n");
	printf ("\t---------------------\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	        printf (" %d ", matriks2[i][j]);
	        printf("|");
	    }
	    printf ("\n");
	}
	//menampilkan hasil penjumlahan matriks 1 dan matriks 2
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||Hasil Penjumlahan Matriks                            ||\n");
	printf ("\t---------------------------------------------------------\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			hasil[i][j] = matriks1[i][j] + matriks2 [i][j];
			printf("\t|");
			printf (" %d ", hasil[i][j]);
			printf("|");
		}
		printf ("\n");
	}
	printf ("\n");
	pilih_ulang();
}

void Perkalian_Matriks(){
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                   MATRIKS PERKALIAN                 ||\n");
	printf ("\t---------------------------------------------------------\n");
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	int i, j, k, m, n, p, q, jumlah = 0;
	cek_valid(&m,"\t||Input Jumlah Baris Matriks [1] : ");
	cek_valid(&n,"\t||Input Jumlah Kolom Matriks [1] : ");
	cek_valid(&p,"\t||Input Jumlah Baris Matriks [2] : ");
	cek_valid(&q,"\t||Input Jumlah Baris Matriks [2] : ");
	fflush(stdin);

	if(n != p){
	    printf("\t||Matriks tidak dapat dikalikan satu sama lain.\n");
	} else {
		//mengisi elemen matriks pertama
		printf("\n\t||Input Elemen Matriks [1] \n");
		for(i = 0; i < m; i++){
	      for(j = 0; j < n; j++){
	      	printf ("\t||Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks1[i][j],"\t||Input elemen : ");
	      }
	    }
	    printf ("\n");
	    //mengisi elemen matriks kedua
	    printf("\n\t||Input Elemen Matriks [2] \n");
	    for(i = 0; i < p; i++){
	      for(j = 0; j < q; j++){
	        printf ("\t||Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks2[i][j],"\t||Input elemen : ");
	      }
	    }
	    //menampilkan elemen matriks pertama
	   printf ("\n\t---------------------\n");
	printf ("\t||Data Matriks Ke-1||\n");
	printf ("\t---------------------\n");
	    for(i = 0; i < m; i++){
	      for(j = 0; j < n; j++){
	      	printf("\t|");
	      	printf (" %d ", matriks1[i][j]);
	      	printf("|");
	      }
	      printf ("\n");
	    }
	    //menampilkan elemen matriks kedua
	    printf ("\n\t---------------------\n");
	printf ("\t||Data Matriks Ke-2||\n");
	printf ("\t---------------------\n");
	    for(i = 0; i < p; i++){
	      for(j = 0; j < q; j++){
	      	printf("\t|");
	        printf (" %d ", matriks2[i][j]);
	        printf("|");
	      }
	      printf ("\n");
	    }
	    //mengalikan matriks 1 dengan matriks 2
	    for(i = 0; i < m; i++){
	      for(j = 0; j < q; j++){
	        for(k = 0; k < p; k++){
	          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
	        }
	        hasil[i][j] = jumlah;
	        jumlah = 0;
	      }
	    }
	    //menampilkan hasil perkalian matriks
	    printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||Hasil Perkalian Matriks                              ||\n");
		printf ("\t---------------------------------------------------------\n");
	    for(i = 0; i < m; i++){
	      for(j = 0; j < n; j++){
	      	printf("\t|");
	        printf(" %d ", hasil[i][j]);
	        printf("|");
	      }
	      printf("\n");
	    }
	  }
	  pilih_ulang();
}

void Transpose_Matriks(){
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||                   MATRIKS TRANSPOSE                 ||\n");
	printf ("\t---------------------------------------------------------\n");
	int i, j, m, n;
	int matriks[10][10];
	int transpose[10][10];
	cek_valid(&m,"\t||Input Jumlah Baris Matriks : ");
	cek_valid(&n,"\t||Input Jumlah Kolom Matriks : ");
	fflush(stdin);
	//memasukkan elemen matriks
	printf ("\n");
	printf("\t||Masukkan elemen matriks\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	      	printf ("\t||Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks[i][j],"\t||Input elemen : ");
		}
	}
	printf ("\n");
	//menampilkan matriks
	printf("\n\t||SEBELUM TRANSPOSE\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	      	printf (" %d ", matriks[i][j]);
	      	printf("|");
		}
		printf ("\n");
	}
	//transpose matriks
	for (i = 0; i < m; i ++){
	    for(j = 0; j < n; j++){
	    transpose[j][i] = matriks[i][j];
		}
	}
	printf ("\n");
	//menampilkan hasil transpose matriks
	printf("\n\t||HASIL TRANSPOSE\n");
	for (i = 0; i < n; i ++){
		for(j = 0; j < m; j++){
		printf("\t|");
	    printf(" %d ",transpose[i][j]);
	    printf("|");
	    }
	printf("\n");
	}
	pilih_ulang();
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

void pilih_ulang (){
	int ulang;
	printf ("\t---------------------------------------------------------\n");
	printf ("\n\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t1. Ya");
	printf ("\n\t2. Tidak");
	cek_valid(&ulang,"\n\tMasukkan nomor pilihan Anda : ");
	if (ulang == 1){
		main();
	}
	else if (ulang == 2){
		keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Silahkan Input Ulang\n");
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
