#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void cek_valid(int *var, char *msg);
void insertion_sort(int array[], int n);
void bubble_sort(int array[], int n);
void quick_sort(int array[], int low, int high);
double sequential_search(int array[], int n, int cari_angka);
double binary_search(int array[], int low, int high, int cari_angka);
int pivot(int array[], int low, int high);
void pilih_ulang();
void sorting();
void searching();
void salin_arr(int asal[], int target[], int n);
void cetak_arr(int arr[], int n);
void bil_acak(int arr[], int n);
void keluar();

int main(){
	system ("cls");
	int menu;
	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|                 SORTING DAN SEARCHING                 |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 3       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN KATEGORI MENU                    ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    SORTING                                  ||\n");
	printf ("\t||   2   |    SEARCHING                                ||\n");
	printf ("\t||   3   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu, "\t||Silahkan Pilih Kategori Menu(1-3) : ");
	
	if (menu==1){
		sorting();
	}
	else if (menu==2){
		searching();
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

//MENU SORTING
void sorting(){
	clock_t start, end;
	double waktu1; //untuk waktu perhitungan insertion sort
	double waktu2; //untuk waktu perhitungan bubble sort
	double waktu3; //untuk waktu perhitungan quick sort
	int data;
	
	int menu2;
	system("cls");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN DATA                             ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    1000 DATA                                ||\n");
	printf ("\t||   2   |    16000 DATA                               ||\n");
	printf ("\t||   3   |    64000 DATA                               ||\n");
	printf ("\t||   4   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu2, "\t||Silahkan Masukkan Pilihan Data(1-4) : ");
	
	if (menu2==1){
		data = 1000;
	}
	else if (menu2==2){
		data = 16000;
	}
	else if (menu2==3){
		data = 64000;
	}
	else if (menu2==4){
		keluar();
	}
	else {
		printf ("\n\t||Pilihan Data Tidak Ada! [ENTER UNTUK MENGULANG] \n");
		system ("pause");
		system ("cls");
		sorting();
	}
	
	int arr1[data];
	int arr2[data];
	int arr3[data];
	//Mencetak Bilangan Random
	bil_acak(arr1, data);
	printf("\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||Array [%d] Random Sebelum di Sorting\n", data);
	cetak_arr(arr1, data);
	salin_arr(arr1, arr2, data);
	salin_arr(arr1, arr3, data);
	
	//penghitungan waktu insertion_sort
	start = clock();
	insertion_sort(arr1, data);
	end = clock();
	waktu1 = (double)(end-start) / CLOCKS_PER_SEC;
	
	//penghitungan waktu bubble_sort
	start = clock();
	bubble_sort(arr2, data);
	end = clock();
	waktu2 = (double)(end-start) / CLOCKS_PER_SEC;
	//penghitungan waktu quick_sort
	start = clock();
	quick_sort(arr3, 0, data-1);
	waktu3 = (double)(end-start) / CLOCKS_PER_SEC;
	
	//Mencetak Bilangan Setelah di Sorting
	printf("\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||[%d] Angka Setelah di Sorting\n", data);
	sleep(3);
	cetak_arr(arr1, data);
	
	//Waktu Yang Dibutuhkan
	printf("\n");
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t||               HASIL WAKTU PERHITUNGAN               ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||Waktu Perhitungan [INSERTION SORT] = %f Millisecond", waktu1);
	printf ("\n\t||Waktu Perhitungan [BUBBLE SORT] = %f Millisecond", waktu2);
	printf ("\n\t||Waktu Perhitungan [QUICK SORT] = %f Millisecond", waktu3);
	
	//Melakukan Perbandingan
	if (waktu1 == waktu2 && waktu1 == waktu3){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||              WAKTU PERHITUNGAN SETARA               ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu1 == waktu2){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||  WAKTU PERHITUNGAN INSERTION & BUBBLE SORT SETARA   ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu1 == waktu3){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||   WAKTU PERHITUNGAN INSERTION & QUICK SORT SETARA   ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu2 == waktu3){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||    WAKTU PERHITUNGAN BUBBLE & QUICK SORT SETARA     ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu1 <= waktu2 && waktu1 <= waktu3){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||    WAKTU PERHITUNGAN INSERTION SORT PALING CEPAT    ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu2 <= waktu1 && waktu2 <= waktu3){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||      WAKTU PERHITUNGAN BUBBLE SORT PALING CEPAT     ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	else if (waktu3 <= waktu1 && waktu3 <= waktu2){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||       WAKTU PERHITUNGAN QUICK SORT PALING CEPAT     ||\n");
		printf ("\t---------------------------------------------------------\n");
	}
	pilih_ulang();
	
}

void searching(){
	clock_t start, end;
	double waktu1;
	double waktu2;
	int data, menu3, cari_angka;
	
	system("cls");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   NO  |    PILIHAN DATA                             ||\n");
	printf ("\t---------------------------------------------------------\n");
	printf ("\t||   1   |    1000 DATA                                ||\n");
	printf ("\t||   2   |    16000 DATA                               ||\n");
	printf ("\t||   3   |    64000 DATA                               ||\n");
	printf ("\t||   4   |    KELUAR                                   ||\n");
	printf ("\t---------------------------------------------------------\n");
	cek_valid(&menu3, "\t||Silahkan Masukkan Pilihan Data(1-4) : ");
	if (menu3==1){
		data = 1000;
	}
	else if (menu3==2){
		data = 16000;
	}
	else if (menu3==3){
		data = 64000;
	}
	else if (menu3==4){
		keluar();
	}
	else {
		printf ("\n\t||Pilihan Data Tidak Ada! [ENTER UNTUK MENGULANG] \n");
		system ("pause");
		system ("cls");
		searching();
	}
	
	int arr[data];
	int arr2[data];
	bil_acak(arr, data);
	cek_valid(&cari_angka, "\t||Silahkan Inputkan Angka Yang Ingin Dicari : ");
	input_angka:
		if (cari_angka < 0){
			printf ("\t||Input Salah! Hanya Menerima Inputan Angka Positif");
			goto input_angka;
		}
		insertion_sort(arr, data);
		waktu1 = sequential_search(arr, data, cari_angka);
		waktu2 = binary_search(arr, 0, data-1, cari_angka);
		printf("\n");
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||               HASIL WAKTU PERHITUNGAN               ||\n");
		printf ("\t---------------------------------------------------------\n");
		printf ("\t||Waktu Perhitungan [SEQUENTIAL SEARCH] = %f Millisecond", waktu1);
		printf ("\n\t||Waktu Perhitungan [BINARY SEARCH] = %f Millisecond", waktu2);
		
		if (waktu1 < waktu2){
			printf ("\n\t---------------------------------------------------------\n");
			printf ("\t||     WAKTU PERHITUNGAN SEQUENTIAL SEARCH TERCEPAT    ||\n");
			printf ("\t---------------------------------------------------------\n");
		}
		else if (waktu1 > waktu2){
			printf ("\n\t---------------------------------------------------------\n");
			printf ("\t||       WAKTU PERHITUNGAN BINARY SEARCH TERCEPAT      ||\n");
			printf ("\t---------------------------------------------------------\n");
		}
		else if (waktu1 == waktu2){
			printf ("\n\t---------------------------------------------------------\n");
			printf ("\t||               WAKTU PERHITUNGAN SETARA              ||\n");
			printf ("\t---------------------------------------------------------\n");
		}
		pilih_ulang();
}

//Mencetak Array
void cetak_arr(int arr[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("\n\t||Angka Ke-[%d] = [%d]", i + 1, arr[i]);
	}
}

//Menyalin Array
void salin_arr(int asal[], int target[], int n){
	int i;
	for (i = 0; i < n; i++)
	target[i]=asal[i];
}

//insertion_sort
void insertion_sort(int array[], int n){
	int i;
	int j;
	int key;
	for ( i =1; i < n; i++){
		key = array[i];
		j= i-1;
	while (j >= 0 && array[j] > key){
		array[j+1] = array[j];
		j--;
	}
	array[j+1] = key;
	}
}

//bubble_sort
void bubble_sort(int array[], int n){
	int i;
	int j;
	int temp;
	for (i =0; i < n - 1; i++){
		for (j =0; j < n - i - 1; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j + 1] = temp;
			}
		}
	}
}

//quick_sort
void quick_sort(int array[], int low, int high){
	int p = pivot(array, low, high);
	if (low < high){
		quick_sort(array, low, p-1);
		quick_sort(array, p+1, high);
	}
}

//sequential_search
double sequential_search(int array[], int n, int cari_angka){
	clock_t start, end;
	double waktu;
	int i;
	int counter = 0;
	start = clock();
	for (i =0; i < n; i++){
		if (array[i] == cari_angka){
			counter++;
		}
		printf("\t||Angka Ke-[%d] = [%d]", i+1, array[i]);
		printf("\n");
	}
	end = clock();
	waktu = (double)(end-start) / CLOCKS_PER_SEC;
	if (counter == 0){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||        MENCARI DENGAN METODE SEQUENTIAL SEARCH      ||\n");
		printf ("\t||ANGKA [%d] TIDAK DITEMUKAN DALAM ARRAY\n", cari_angka);
		printf ("\t---------------------------------------------------------\n");
	}
	else{
		int indexCariAngka[counter];
		counter = 0;
		for (i = 0; i < n; i++){
			if (array[i] == cari_angka){
				indexCariAngka[counter] = i;
				counter++;
			}
		}
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||        MENCARI DENGAN METODE SEQUENTIAL SEARCH      ||\n");
		printf ("\t||ANGKA DITEMUKAN DALAM INDEXS KE-");
		for (i = 0; i < counter; i++){
			if (i == 0 && i == counter - 1){
				printf ("[%d]", indexCariAngka[i]);
			}
			else{
				if (i == counter - 1){
					printf ("dan [%d]", indexCariAngka[i]);
				}
				else{
					printf ("[%d]", indexCariAngka[i]);
				}
				}
				}
				printf ("\n\t---------------------------------------------------------\n");
			}
			return waktu;
		}

//binary_search
double binary_search(int array[], int low, int high, int cari_angka){
	clock_t start, end;
	double waktu;
	int i;
	int counter = 0;
	start = clock();
	while( low <= high){
		int tengah = low + (high-low) / 2;
		if (array[tengah] == cari_angka){
			counter++;
			for ( i = tengah + 1; i < high + 1 && array[i] == cari_angka; i++){
				counter++;
			}
			for ( i = tengah - 1; i < high + 1 && array[i] == cari_angka; i++){
				counter++;
			}
			break;
		}
		else if (array[tengah] > cari_angka){
			high = tengah - 1;
		}
		else{
			low = tengah + 1;
		}
	}
	end=clock();
	waktu = (double)(end-start) / CLOCKS_PER_SEC;
	if (counter == 0){
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||          MENCARI DENGAN METODE BINARY SEARCH        ||\n");
		printf ("\t||ANGKA [%d] TIDAK DITEMUKAN DALAM ARRAY\n", cari_angka);
		printf ("\t---------------------------------------------------------\n");
	}
	else{
		int indexCariAngka[counter];
		counter = 0;
		while( low <= high){
			int tengah = low + (high - low) /2;
			if (array[tengah] == cari_angka){
				indexCariAngka[counter] = tengah;
				counter++;
				for ( i = tengah + 1; i < high + 1 && array[i] == cari_angka; i++){
					indexCariAngka[counter] = i;
					counter++;	
				}
				for (i = tengah - 1; i > 0 && array[i] == cari_angka; i--){
					indexCariAngka[counter] = i;
					counter++;
				}
				break;
			}
			else if (array[tengah] > cari_angka){
				high = tengah - 1;
			}
			else{
				low = tengah + 1;
			}
		}
		printf ("\n\t---------------------------------------------------------\n");
		printf ("\t||        MENCARI DENGAN METODE BINARY SEARCH          ||\n");
		printf ("\t||ANGKA DITEMUKAN DALAM INDEXS KE-");
		insertion_sort(indexCariAngka, counter);
		for (i = 0; i < counter; i++){
			if (i == 0 && i == counter - 1){
				printf ("[%d]", indexCariAngka[i]);
			}
			else{
				if (i == counter - 1){
					printf ("dan [%d]", indexCariAngka[i]);
				}
				else{
					printf ("[%d]", indexCariAngka[i]);
				}
				}
		}
		printf ("\n\t---------------------------------------------------------\n");
	}
	return waktu;
}

int pivot(int array[], int low, int high){
	int p = array[high];
	int temp;
	int i = (low - 1);
	int j;
	for (j = low; j <= high - 1; j++){
		if (array[j] <= p){
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i+1];
	array[i+1]= array[high];
	array[high]=temp;
	return (i+1);
}

void bil_acak(int arr[], int n){
	int i;
	srand(0);
	for (i = 0; i < n; i++){
		arr[i] = rand();
	}
	
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
