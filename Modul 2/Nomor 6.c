#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Mutiara/2105551085

float validasi(){			
    float angka;
    char huruf;
    
    scanf("%f%c", &angka,&huruf);
    if(huruf != '\n'){
        printf("\n\n\t\t\t                [ERROR] INPUT SALAH \n");
        printf("\n\t\t\t          Masukkan Nilai Yang Benar      : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}

void judul(){
    printf("\n\t                    :::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\n\t                       P E R H I T U N G A N   A N G S U R A N\n");
    printf("\n\t                    :::::::::::::::::::::::::::::::::::::::::::::::");
}

void pilihan_ulang (){
	int ulang;
	printf("\n\t\t\t               ::::::::::::::::::::::::");
	printf("\n\t\t\t               INGIN MENGULANG PROGRAM?");
	printf("\n\t\t\t                       1. IYA");
	printf("\n\t\t\t                       0. TIDAK");
        printf("\n\t\t\t               ::::::::::::::::::::::::");
	printf("\n\t\t\t                Masukkan Pilihan Anda : ");
	ulang=validasi();
	if (ulang == 1){
		main();
	}
	else if (ulang == 0){
		system("cls");
		judul();
		printf("\n\t\t\t                     TERIMA KASIH");
		printf("\n\t\t\t               TELAH MENGGUNAKAN PROGRAM");
		exit(0);
	}
	else{
		system("cls");
		judul();
		printf ("\n\t\t\t        ||[INPUT SALAH] SILAHKAN INPUT ULANG!\n");
		pilihan_ulang();
	}	
}
int main(){
	double pokok_pinjaman,angsuran_pokok,bunga_bulan,total_bunga = 0,total_angsuran = 0, bunga;
	int lama_pinjam,i;

	system("cls");
	judul();
        printf("\n\n\t\t\t      Masukkan Pokok Pinjaman        : ");
	pokok_pinjaman=validasi();
	
	printf("\n\t\t\t      Masukkan Besar Bunga (PERSEN)  : ");
	bunga=validasi();
	
	printf("\n\t\t\t      Masukan Lama Peminjaman (BULAN): ");
	lama_pinjam=validasi();
	
	system("cls");

	judul();
        printf("\n\n\t\t\t                     DETAIL ANGSURAN \n");
        printf("\n\t                    -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	bunga = bunga/100;
        angsuran_pokok = pokok_pinjaman/lama_pinjam;

	
       printf("\n\n\tBULAN\t\tBUNGA\t\tANGSURAN POKOK\t\tANGSURAN PERBULAN\n");
       for(i = 1;i<=lama_pinjam;i++){
          bunga_bulan = (pokok_pinjaman-((i-1)*angsuran_pokok))*(bunga/12);
          total_bunga = total_bunga + bunga_bulan;
          total_angsuran += (angsuran_pokok+bunga_bulan);
          printf("\t %d\t\tRp. %.2f\tRp. %.2f\t\tRp. %.2f\n", i, bunga_bulan, angsuran_pokok, angsuran_pokok+bunga_bulan);
       }
       printf("\n\t ___________________________________________________________________________\n");
       printf("\n\t\t\t      _______________________________________________\n");
       printf("\n\t\t\t            Total Bunga   : Rp %.2f\n", total_bunga);
       printf("\n\t\t\t            Total Angsuran: Rp %.2f\n", total_angsuran);
       printf("\t\t\t      _______________________________________________\n");
       pilihan_ulang();
    
       return 0;
}
