#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <conio.h> 
#include <ctype.h> 

#define NILAI1 1000 
#define NILAI2 16000 
#define NILAI3 64000 

//deklarasi
clock_t start, stop; 
int data1[NILAI3], data2[NILAI3]; 

void setStart(void); 
void createData(int *data, int pilih); 
void printData(int *arr, int banyak); 
void bubbleSort(int banyak);
void bubbleSortPointer(int *ptr, int banyak);
void menu();
void keluar();
int setdata();
int validInt(int *var);
double setStop(void); 


//validasi 
int validInt(int *var)
{
	char buff[1024];
	char check;

	if (fgets(buff, sizeof(buff), stdin) !=NULL) {
		if (sscanf(buff, "%d %c", var, &check) ==1){
			return 1;
		}
	}
	return 0;
}

//bubble short dengan pointer
void bubbleSortPointer(int *ptr, int banyak){ 
	int i,j; 
	int temp; 
	for(i = 1 ; i < banyak ; i++){ 
  		for(j = 0; j < banyak - i ; j++){ 
   			if(*(ptr+j)>*(ptr+j+1)){ 
    			temp=*(ptr+j); 
    			*(ptr+j)=*(ptr+j+1); 
    			*(ptr+j+1)=temp; 
       		} 
  		} 
 	} 
} 

//bubbleshort tanpa pointer
void bubbleSort(int banyak){ 
    int i, j, tmp; 
    for (i = banyak - 1 ; i >= 0 ; i--){ 
        for (j = 0 ; j < i ; j++){ 
            if (data1[j] > data1[j + 1]){ 
                tmp = data1[j]; 
                data1[j] = data1[j + 1]; 
                data1[j + 1] = tmp; 
            } 
        } 
    } 
} 

//penghitung mulai
void setStart(void){ 
    start = clock(); 
} 

//penghitung waktu selesai
double setStop(void){ 
    stop = clock(); 
    return ((double)stop - start) / CLOCKS_PER_SEC; 
} 

//membuat data acak
void createData(int *data, int pilih){ 
    int i; 
    time_t t; 
 
    srand((unsigned)time(&t)); 
    for (i = 0; i < pilih; i++){ 
        data[i] = rand() % pilih; 
    } 
} 

//menampilkan data
void printData(int *arr, int banyak){
    int i;
    for (i = 0; i < banyak; i++){ 
        printf("%d \t", arr[i]); 
    }
    printf("\n"); 
}

void judul(char *program){
	system("cls");
	printf("----------------PRAKTIKUM ALPROG MODUL III----------------\n");
	printf("*********************KELOMPOK 21************************\n\n");
	printf("\n     PROGRAM %s\n\n", program);	
}

void menu(){
	int pilih; 
	double time1, time2; 

    pilih = setdata();
    createData(data1, pilih); 
    createData(data2, pilih); 
    sleep(1);
    printf("\n\n\tMemulai Mengacak Data . . .");
    sleep(1);
    printf("\n\n");
	printData(data1, pilih);
	sleep(1);
    printf("\n\n\tMulai Proses Bubble Sort . . .");
    sleep(1);
    printf("\n\n");
 
    //bubble sort tanpa pointer 
    setStart(); 
    bubbleSort(pilih); 
    time1 = setStop(); 
     
    //bubble sort dengan pointer 
    setStart(); 
    bubbleSortPointer(data2,pilih); 
    time2 = setStop(); 
    printData(data2, pilih); 
    
    sleep(1);
    printf("\n\tWaktu proses Bubble Sort tanpa pointer	: %lf detik\n", time1); 
    printf("\n\tWaktu proses Bubble Sort dengan pointer	: %lf detik\n", time2); 
    sleep(1);
     
    keluar(); 
 
    getch(); 
}


//input bilangan acak
int setdata(){ 
    int opsi; 
    system("cls");
	fflush(stdin);
    judul("MENGHITUNG WAKTU PENGURUTAN BUBBLE SHORT");
	printf("\n\tPilihan Banyak Data  :\n");
    printf("\t1.  1000  Bilangan Acak\n"); 
    printf("\t2.  16000 Bilangan Acak\n"); 
    printf("\t3.  64000 Bilangan Acak\n"); 
    printf("\tMasukan Pilihan Data : "); 
    validInt(&opsi); 
    switch (opsi){ 
    case 1: 
        return NILAI1; 
        break; 
    case 2: 
        return NILAI2; 
        break; 
    case 3: 
    	return NILAI3; 
        break; 
    default: 
        printf("\tInput yang Anda Masukan Salah!"); 
        getch();
        setdata();
    }
    return 0; 
} 



//proses selesai
void keluar(){ 
	char pilih[100]; 
 	fflush(stdin); 
 	printf ("\n\n\tIngin Kembali Menghitung? (Y/T) : "); 
 	scanf("%s",&pilih); 
 	
 	if (strcmpi(pilih,"t")==0){ 
 		system("cls");
	printf("\n\n\tTerimakasih Telah Menggunakan Program Bubble Short\n\n");
	sleep(2);
	exit(0);
 	} 
 	else if (strcmpi(pilih,"y")==0){ 
  		system("cls"); 
 		main(); 
 	} 
 	else{
 		printf("\n\tInput yang Anda Masukan Salah !");
  		keluar();
	}
}


int main(){ 
	menu();
	
	return(0);
} 
