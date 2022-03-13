#include <stdio.h>
#include <stdlib.h>

//Kode Program Soal 1 Modul 2

void judul(){
	printf(" ======================================\n");
	printf("||     Program Menentukan Zodiak      ||\n");
	printf(" ======================================\n");
	
}

void end(){
	printf(" ====================================================================\n");
	printf("||     Terimakasih telah menggunakan Program Penentuan Zodiak!!!     ||\n");
	printf(" ====================================================================\n");
	
}

void reset(){
	int ulang;
 	printf("\n\nIngin Mengulangi? [y / t] ");
 	ulang = getch();
 	
 	if (ulang == 'y' || ulang == 'Y'){
 		system("cls");
		main();
	
 	}else if (ulang == 't' || ulang == 'T'){
 		system("cls");
 		end();
 	
 	}else{
 		system("cls");
 		judul();
 		printf("Input yang anda masukkan tidak valid\n");
 		reset();
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

void zodiac(int tanggal, int bulan){

    //Jika tanggal lebih dari sama dengan 20 dan kurang dari sama dengan 31 (Bulan Januari)
    //Atau tanggal lahir lebih dari sama dengan 1 dan kurang dari sama dengan 18 (Bulan Februari)
    //Maka zodiac anda adalah Aquarius
    if ((tanggal>=20&&tanggal<=31 && bulan==1) || (tanggal>=1&&tanggal<=18 && bulan==2)){
      printf("\nZodiac Anda adalah Aquarius");
    
    //Jika tanggal lebih dari sama dengan 19 dan kurang dari sama dengan 29 (Bulan Februari)
    //Atau tanggal lebih dari sama dengan 1 dan kurang dari sama dengan 20 (Bulan Maret)
    //Maka zodiac anda adalah Pisces
   }else if((tanggal>=19&&tanggal<=29 && bulan==2) || (tanggal>=1&&tanggal<=20 && bulan==3)){
      printf("\nZodiac Anda adalah Pisces");
      
    //Jika tanggal lebih dari sama dengan 21 dan kurang dari sama dengan 31 (Bulan Maret)
    //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 19 (Bulan April)
    //Maka zodiac anda adalah Aries
   }else if ((tanggal>=21&&tanggal<=31 && bulan==3) || (tanggal>=1&&tanggal<=19 && bulan==4)){
      printf("\nZodiac Anda adalah Aries");
      
    //Jika tanggal lebih dari sama dengan 20 dan tanggal kurang dari sama dengan 30 (Bulan April)
    //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 20 (Bulan Mei)
    //Maka zodiac anda adalah Taurus
   }else if((tanggal>=20&&tanggal<=30 && bulan==4) || (tanggal>=1&&tanggal<=20 && bulan==5)){
      printf("\nZodiac Anda adalah Taurus");
      
    //Jika tanggal lebih dari sama dengan 21 dan tanggal kurang dari sama dengan 31 (Bulan Mei)
    //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 20 (Bulan Juni)
    //Maka zodiac anda adalah Gemini
   }else if ((tanggal>=21&&tanggal<=31 && bulan==5) || (tanggal>=1&&tanggal<=20 && bulan==6)){
      printf("\nZodiac Anda adalah Gemini");
      
   //Jika tanggal lebih dari sama dengan 21 dan tanggal kurang dari sama dengan 30 (Bulan Juni)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 22 (Bulan Juli)
   //Maka zodiac anda adalah Cancer  
   }else if((tanggal>=21&&tanggal<=30 && bulan==6) || (tanggal>=1&&tanggal<=22 && bulan==7)){
   	printf("\nZodiac Anda adalah Cancer");
   	
   //Jika tanggal lebih dari sama dengan 23 dan tanggal kurang dari sama dengan 31 (Bulan Juli)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 22 (Bulan Agustus)
   //Maka zodiac anda adalah Leo
   }else if((tanggal>=23&&tanggal<=31 && bulan==7) || (tanggal>=1&&tanggal<=22 && bulan==8)){
      printf("\nZodiac Anda adalah Leo");
    
   //Jika tanggal lebih dari sama dengan 23 dan tanggal kurang dari sama dengan 31 (Bulan Agustus)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 22 (Bulan September)
   //Maka zodiac anda adalah Virgo 
   }else if((tanggal>=23&&tanggal<=31 && bulan==8) || (tanggal>=1&&tanggal<=22 && bulan==9)){
      printf("\nZodiac Anda adalah Virgo");
    
   //Jika tanggal lebih dari sama dengan 23 dan tanggal kurang dari sama dengan 30 (Bulan September)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 22 (Bulan Oktober)
   //Maka zodiac anda adalah Libra  
   }else if((tanggal>=23&&tanggal<=30 && bulan==9) || (tanggal>=1&&tanggal<=22 && bulan==10)){
      printf("\nZodiac Anda adalah Libra");
    
   //Jika tanggal lebih dari sama dengan 23 dan tanggal kurang dari sama dengan 31 (Bulan Oktober)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 21 (Bulan November)
   //Maka zodiac anda adalah Scorpio  
   }else if((tanggal>=23&&tanggal<=31 && bulan==10) || (tanggal>=1&&tanggal<=21 && bulan==11)){
      printf("\nZodiac Anda adalah Scorpio");
    
   //Jika tanggal lebih dari sama dengan 22 dan tanggal kurang dari sama dengan 30 (Bulan November)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 21 (Bulan Desember)
   //Maka zodiac anda adalah Sagitarius  
   }else if((tanggal>=22&&tanggal<=30 && bulan==11) || (tanggal>=1&&tanggal<=21 && bulan==12)){
      printf("\nZodiac Anda adalah Sagitarius");
     
   //Jika tanggal lebih dari sama dengan 22 dan tanggal kurang dari sama dengan 31 (Bulan Desember)
   //Atau tanggal lebih dari sama dengan 1 dan tanggal kurang dari sama dengan 19 (Bulan Januari)
   //Maka zodiac anda adalah Capricorn 
   }else if((tanggal>=22&&tanggal<=31 && bulan==12) || (tanggal>=1&&tanggal<=19 && bulan==1)){
      printf("\nZodiac Anda adalah Capricorn");
     
   //Jika data yang diinputkan salah, maka akan ditampilkan kalimat dibawah  
   }else{
   	printf("Input yang anda masukkan tidak valid");
   }

}

int main(){

   int tgl_lahir;
   int bln_lahir;
   
   judul();
	
   printf("\nInputkan tanggal lahir berupa angka (1-31) !!!\n");
   
   cek_valid(&tgl_lahir, "\nTanggal Lahir :");
   fflush(stdin);
   system("cls");
   
   judul();
   
   printf("\nInputkan bulan lahir berupa angka (1-12) !!!\n");
   
   printf("1 = Januari\n");
   printf("2 = Februari\n");
   printf("3 = Maret\n");
   printf("4 = April\n");
   printf("5 = Mei\n");
   printf("6 = Juni\n");
   printf("7 = Juli\n");
   printf("8 = Agustus\n");
   printf("9 = September\n");
   printf("10 = Oktober\n");
   printf("11 = November\n");
   printf("12 = Desember\n");
   
   cek_valid(&bln_lahir, "\nBulan Lahir :");
   fflush (stdin);
   
   if(tgl_lahir>=1 && tgl_lahir<=31|| bln_lahir>=1 && bln_lahir<=31){
   	zodiac(tgl_lahir, bln_lahir);
   	
   }else{
   	printf("Data yang anda masukkan tidak valid!!!");
   	reset();
   }
  
   
   reset();
   
   return 0;
}
