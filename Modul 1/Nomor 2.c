#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int validasi(){
  char ch; 
  char *data; 
  data= (char *) malloc (sizeof(char)); 
  
  int index=0;
  
  while ((ch=getch()) !=13) {
    if (ch>='0' && ch<='9'){
      printf("%c", ch); 
      data[index]=ch; 
      index++;
    }
  }
  data [index]='\0';
    
  return atoi(data); 
}
float validasiBil(){
  char ch; 
  char *data; 
  data= (char *) malloc (sizeof(char)); 
  
  int index=0;
  
  while ((ch=_getch()) !=13) {
    if (ch>='0' && ch<='9'){
      printf("%c", ch); 
      data[index]=ch; 
      index++;
    }
    else if (ch=='.'){
      printf("%c", ch); 
      data[index]=ch; 
      index++;
    }
  }
  data [index]='\0';
    
  return atof(data); 
}


int main()

{

    int menu, pilihan;

    float p, l, r, luas, keliling, a, b , c, d, sisi, d1, d2, alas, alas1, alas2, tinggi ;



    kembali:

    	printf ("\t*********************************************************\n");
	printf ("\t|               SELAMAT DATANG DI PROGRAM               |\n");
	printf ("\t|              MENGHITUNG LUAS DAN KELILING             |\n");
	printf ("\t|         PRAKTIKUM ALGORITMA PEMROGRAMAN MODUL 1       |\n");
	printf ("\t|                     KELOMPOK 21                       |\n");
	printf ("\t*********************************************************\n");

        printf("Daftar Bangun Datar: \n");

        printf("1. Segitiga Sembarang\n");

        printf("2. Belah Ketupat\n");

        printf("3. Jajar Genjang\n");
        
        printf("4. Trapesium\n");
        
        printf("5. Lingkaran\n");

        printf("Pilihan Anda [1-5]? ");

        menu=validasi();

        printf("\n");



    switch(menu){

    case 1:

        printf("\nMasukkan Panjang Sisi 1 : ");
		
        a=validasiBil();
        
        printf("\nMasukkan Panjang Sisi 2 : ");
        
        b=validasiBil();
        
        printf("\nMasukkan Panjang Sisi 3 : ");
        
        c=validasiBil();

        luas = a+b+c*0.5;

        keliling = a+b+c;

        printf("\n");

        printf("Luas dari Segitiga Sembarang adalah adalah %f\n", luas);

        printf("Keliling dari Segitiga adalah %f\n", keliling);

        break;

    case 2:

        printf("\nMasukkan Diagonal 1 : ");

        d1=validasiBil();

        printf("\nMasukkan Diagonal 2 : ");

        d2=validasiBil();
        
        printf("\nMasukkan Sisi Belah Ketupat : ");
        
        sisi=validasiBil();
        
        luas = d1*d2*0.5;

        keliling = 4*sisi;

        printf("\n");

        printf("\nLuas Persegi Panjang adalah %f\n", luas);

        printf("\nkeliling Persegi Panjang adalah %f\n", keliling);

        break;

    case 3:

        printf("\nMasukkan Alas : ");
        
        alas=validasiBil();
        
        printf("\nMasukkan Tinggi : ");
        
        tinggi=validasiBil();
        
        printf("\nMasukkan Sisi Miring : ");
        
        b=validasiBil();
        
        luas = alas*tinggi;
        
        keliling = 2*alas+b;
        
        printf("\n");
        
        printf("Luas Jajar Genjang adalah %f\n", luas);
        
        printf("Keliling dari Jajar Genjang adalah %f\n", keliling);
        
        break;
        
    case 4:
    	
    	printf("\nMasukkan Alas 1 : ");
    	
    	alas1=validasiBil();
    	
    	printf("\nMasukkan Alas 2 : ");
    	
    	alas2=validasiBil();
    	
    	printf("\nMasukkan Tinggi Trapesium :");
    	
    	tinggi=validasiBil();
    	
    	printf("\nMasukkan Sisi 1 : ");
    	
    	a=validasiBil();
    	
    	printf("\nMasukkan Sisi 2 : ");
    	
    	b=validasiBil();
    	
    	printf("\nMasukkan Sisi 3 : ");
    	
    	c=validasiBil();
    	
    	printf ("\nMasukkan Sisi 4: ");
    	
    	d=validasiBil();
    	
    	luas = 0.5*alas1+alas2*tinggi;
    	
    	keliling = a+b+c+d;
    	
    	printf("\n");
    	
    	printf("Luas dari Trapesium adalah %f\n", luas);
    	
    	printf("Keliling dari Trapesium adalah %f\n", keliling);
    	
    	break;
    	
    case 5:
    	
    	printf("\nMasukkan Jari-jari Lingkaran: ");

        r=validasiBil();

        luas = 3.14 * r * r;

        keliling = 2 * 3.14 * r;

        printf("\n");

        printf("Luas Lingkaran adalah %f\n", luas);

        printf("Keliling Lingkaran adalah %f\n", keliling);

        break;
    
	 }

    printf("\n");

    printf("Tekan 1 untuk kembali ke Menu atau 2 untuk Keluar dari Program\n");

    printf("Pilihan Anda [1-2]? ");

    pilihan=validasi();

    printf("\n");



    switch(pilihan){

    case 1:

        goto kembali;

    case 2:

        goto keluar;

    }



    keluar:

        return 0;

}
