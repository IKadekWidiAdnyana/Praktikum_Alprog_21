#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Mutiara/2105551085
// VALIDASI
float validasi(){
    float angka;
    char huruf;
    
    scanf("%f%c", &angka,&huruf);
    if(huruf != '\n'){
        printf("\n\n\t\t\t                [ERROR] INPUT SALAH \n");
        printf("\n\t\t\t      Masukkan Nilai Yang Benar      : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}

//VALIDASI PERULANGAN PROGRAM 
int valid_pilihan(){
    int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=1;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ 
    }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("\n\n\t\t\t                [ERROR] INPUT SALAH \n");
        printf("\n\t\t\t            Masukkan Nilai Yang Benar      : ");
        valid_pilihan();
    }else{
        val = atoi(angka);
        if(val>=0 && val<=1){
            return val;
        }else{
            printf("\n\n\t\t\t             [ERROR] INPUT  SALAH \n");
            printf("\n\t\t\t         Masukkan Nilai Yang Benar      : ");
            valid_pilihan();
        }
    }
}

void header(){
    printf("\n\t                    -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\n\n\t                       P E R H I T U N G A N   A N G S U R A N\n");
    printf("\n\t                    -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
}


// MAIN
int main(){
	double pokok_pinjaman,angsuran_pokok,bunga_bulan,total_bunga = 0,total_angsuran = 0;
	int lama_pinjam,i, ulang;
	double bunga;

	system("cls");
	header();
    printf("\n\n\t\t\t      Masukkan Pokok Pinjaman        : ");
	pokok_pinjaman=validasi();
	
	printf("\n\t\t\t      Masukkan Besar Bunga (PERSEN)  : ");
	bunga=validasi();
	
	printf("\n\t\t\t      Masukan Lama Peminjaman (BULAN): ");
	lama_pinjam=validasi();
	
	system("cls");

	header();
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
    printf("\n\t =========================================================================================\n");
    printf("\n\t\t\t      =============================================");
    printf("\n\t\t\t            Total Bunga   : Rp %.2f\n", total_bunga);
    printf("\n\t\t\t            Total Angsuran: Rp %.2f\n", total_angsuran);
    printf("\t\t\t       =============================================\n");
    printf("\n\t\t\t               -------------------------");
	printf("\n\t\t\t                   INGIN MENGULANG?");
	printf("\n\t\t\t                       1. Iya");
	printf("\n\t\t\t                       0. Tidak");
    printf("\n\t\t\t               -------------------------\n");
	printf("\n\t\t\t                Masukkan Pilihan Anda : ");
	ulang=valid_pilihan();

	if(ulang==1){
		main();
	}else if(ulang==0){
		system("cls");
		header();
		printf("\n\t\t\t                     TERIMA KASIH");
		printf("\n\t\t\t               TELAH MENGGUNAKAN PROGRAM");
		exit(0);
	}
	return 0;
}
