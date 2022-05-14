#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

char kata [100], temp;
int opsi, geser, i;

void end();
void menu();
void enkripsi();
void deskripsi();
int validInt(int *var);


//validasi
int validInt(int *var)
{
	char buff[1024];
	char check;

	if (fgets(buff, sizeof(buff), stdin) != NULL) {
		if (sscanf(buff, "%d %c", var, &check) ==1){
			return 1;
		}
	}
	return 0;
}

//header
void judul(char *program){
	system("cls");
	printf("------------PRAKTIKUM ALPROG MODUL III------------\n");
	printf("-------------------KELOMPOK 21--------------------");
	printf("\n\t  PROGRAM %s\n\n", program);	
}

//menu program
void menu(){
	judul("ENKRIPSI DAN DESKRIPSI");
	printf("\n\tPilihan Menu Program : \n");
 	printf("\t1. Enkripsi\n");
 	printf("\t2. Deskripsi\n");
 	printf("\t3. Exit\n");
 	printf("\tMasukkan Pilihan Menu : "); 
 	
 	if(validInt(&opsi)){
	}
	else{
		printf("\n\tInput yang Anda Masukan Salah!");
		getch();
		menu();
  	}
  	switch (opsi){
  		case 1 : 
  			enkripsi();
			break;
		case 2 : 
			deskripsi();
			break;
		case 3:
			system ("cls");
		 	printf("\n\n\tTerimakasih Telah Menggunakan Program Ini\n");
		 	getch();
		 	exit(0);
    		break;
    	default: 
			printf("\n\tInput yang Anda Masukan Salah!");
			getch();
			menu();
	}	
}

//enkripsi data
void enkripsi(){
	system ("cls");
	fflush(stdin);
	judul("ENKRIPSI DATA");
	printf("  Masukan Kata atau Kalimat untuk Di Enkripsi\n");
	fflush(stdin);
	printf("\n  Plaintext\t\t: ");
	gets(kata);
	printf("  Jumlah Pergeseran\t: ");
  	if(validInt(&geser)){
	}
	else{
		printf("\n  Input yang Anda Masukan Salah!");
		sleep(1);
		enkripsi();
	}
	for(i = 0; kata[i] != '\0'; ++i){
		temp = kata[i];
		if(temp >= 'a' && temp <= 'z'){
			temp = temp + geser;
			if(temp > 'z'){
			temp = temp - 'z' + 'a' - 1;
			}
			kata[i] = temp;
		}
		else if(temp >= 'A' && temp <= 'Z'){
			temp = temp + geser;
			if(temp > 'Z'){
			temp = temp - 'Z' + 'A' - 1;
			}
			kata[i] = temp;
		}
	}
	printf("\n  Hasil Enkripsi\t: %s",kata);
	end();
}

//deskripsi data
void deskripsi(){
	system ("cls");
	fflush(stdin);
	judul("DESKRIPSI DATA");
	printf("  Masukkan Kata atau Kalimat untuk Di Deskripsi\n");
	fflush(stdin);
	printf("\n  Chipertext\t\t: ");
	gets(kata);
	printf("  Jumlah Pergeseran\t: ");
	if(validInt(&geser)){
	}
	else{
		printf("\n  Input yang Anda Masukan Salah!");
		sleep(1);
		deskripsi();
	}
	for(i = 0; kata[i] != '\0'; ++i){
		temp = kata[i];
		if(temp >= 'a' && temp <= 'z'){
			temp = temp - geser;
			printf("%c", 'a' - 4);
			if(temp < 'a'){
				temp = temp + 'z' - 'a' + 1;
			}		
			kata[i] = temp;
		}
		else if(temp >= 'A' && temp <= 'Z'){
			temp = temp - geser;
			if(temp < 'A'){
				temp = temp + 'Z' - 'A' + 1;
			}
		kata[i] = temp;
		}
	}
	printf("\n  Hasil Deskripsi\t: %s",kata);
	end();
}

//
void end(){ 
	char pilih; 
 	fflush(stdin); 
 		printf ("\n\n  Ingin Kembali ke Program? (Y/T) : "); 
 		scanf("%s",&pilih); 
 		
 		if (pilih=='T'||pilih=='t'){ 
 			system("cls"); 
  			printf("\n\n\tTerimakasih Telah Menggunakan Program Ini\n"); 
  			getch();
  			exit(0);
 		} 
 		else if (pilih=='Y'||pilih=='y'){ 
  			system("cls"); 
 			main();
 		} 
 		else{
 			printf("Input yang Anda Masukan Salah !");
 			sleep(1);
			end();
		}  
}



int main (){
	fflush(stdin);
	menu();
	return 0;
}

