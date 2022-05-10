#include <stdio.h>

#include <stdlib.h>



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

        scanf("%d", &menu);

        printf("\n");



    switch(menu){

    case 1:

        printf("Masukkan Panjang Sisi 1 : ");

        scanf("%f", &a);
        
        printf("Masukkan Panjang Sisi 2 : ");
        
        scanf("%f", &b);
        
        printf("Masukkan Panjang Sisi 3 : ");
        
        scanf("%f", &c);

        luas = a+b+c*0.5;

        keliling = a+b+c;

        printf("\n");

        printf("Luas dari Segitiga Sembarang adalah adalah %f\n", luas);

        printf("Keliling dari Segitiga adalah %f\n", keliling);

        break;

    case 2:

        printf("Masukkan Diagonal 1 : ");

        scanf("%f", &d1);

        printf("Masukkan Diagonal 2 : ");

        scanf("%f", &d2);
        
        printf("Masukkan Sisi Belah Ketupat : ");
        
        scanf("%f", &sisi);

        luas = d1*d2*0.5;

        keliling = 4*sisi;

        printf("\n");

        printf("Luas Persegi Panjang adalah %f\n", luas);

        printf("keliling Persegi Panjang adalah %f\n", keliling);

        break;

    case 3:

        printf("Masukkan Alas : ");
        
        scanf("%f", &alas);
        
        printf("Masukkan Tinggi : ");
        
        scanf("%f", &tinggi);
        
        printf("Masukkan Sisi Miring : ");
        
        scanf("%f", &b);
        
        luas = alas*tinggi;
        
        keliling = 2*alas+b;
        
        printf("\n");
        
        printf("Luas Jajar Genjang adalah %f\n", luas);
        
        printf("Keliling dari Jajar Genjang adalah %f\n", keliling);
        
        break;
        
    case 4:
    	
    	printf("Masukkan Alas 1 : ");
    	
    	scanf("%f", &alas1);
    	
    	printf("Masukkan Alas 2 : ");
    	
    	scanf("%f", &alas2);
    	
    	printf("Masukkan Tinggi Trapesium :");
    	
    	scanf("%f", &tinggi);
    	
    	printf("Masukkan Sisi 1 : ");
    	
    	scanf("%f", &a);
    	
    	printf("Masukkan Sisi 2 : ");
    	
    	scanf("%f", &b);
    	
    	printf("Masukkan Sisi 3 : ");
    	
    	scanf("%f", &c);
    	
    	printf ("Masukkan Sisi 4: ");
    	
    	scanf("%F", &d);
    	
    	luas = 0.5*alas1+alas2*tinggi;
    	
    	keliling = a+b+c+d;
    	
    	printf("\n");
    	
    	printf("Luas dari Trapesium adalah %f\n", luas);
    	
    	printf("Keliling dari Trapesium adalah %f\n", keliling);
    	
    	break;
    	
    case 5:
    	
    	printf("Masukkan Jari-jari Lingkaran: ");

        scanf("%f", &r);

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

    scanf("%d", &pilihan);

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
