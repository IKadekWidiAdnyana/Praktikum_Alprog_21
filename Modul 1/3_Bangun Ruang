#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define PHI 3.14

//deklarasi variabel global//
int ulang_utama,ulang_operasi,ulang_hitung;
int menu_operasi;
char pilihan_operasi[100];
float luas_permukaan,volume,r,t,s,ts,tl,tp,tk;

//fungsi untuk validasi nilai//
float validasi_nilai(){
    int i = 0;
    int titik = 0;
    int salah = 0;
    float val;
    char angka[100];

    scanf("%s", &angka);

    while(angka[i] != '\0'){
        if(angka[0] == '.'){
            salah = 1;
            angka[0] = '\0';
        }else if(angka[i]>='0' && angka[i]<='9' || angka[i] == '.' || angka[0] == '-'){
            if(angka[i] == '.'){
            titik = titik + 1;
                if(titik > 1 || angka[i+1] == '\0'){
                    salah = 1;
                    angka[i] = '\0';
                }
            }
            i++;
        }else{
            salah = 1;
            angka[i] = '\0';
        }
    }

    val = atof(angka);

    if(salah == 1){
        printf("\t\t\tMasukkan salah!");
        printf("\n\t\t\tMasukkan angka yang benar : ");
        return validasi_nilai();
    }else if(val <= 0){
        printf("\t\t\tMasukkan tidak boleh kurang dari sama dengan 0 ! ");
        printf("\n\t\t\tMasukkan angka yang benar : ");
        return validasi_nilai();
    }else{
        return val;
    }
}

//Fungsi untuk validasi pilihan//
int validasi_pilihan(char target[100]){
    int i = 0;
    int titik = 0;
    int salah = 0;

    while(target[i] != '\0'){
        if(target[0] == '.'){
            salah = 1;
            target[0] = '\0';
        }else if(target[i]>='0' && target[i]<='9' || target[i] == '.' || target[0] == '-'){
            if(target[i] == '.'){
            	titik = titik + 1;
                if(titik > 1 || target[i+1] == '\0'){
                    salah = 1;
                    target[i] = '\0';
                }
            }
            i++;
        }else{
            salah = 1;
            target[i] = '\0';
        }
    }
    if(salah == 1){
        return 1;
	}else{
        return 0;
    }
}

//fungsi print menu oprasi//
void ke_menu_operasi(){
    printf("\n\n\n");
    printf("\t\t\t=============================================\n");
    printf("\t\t\t******* Selamat Datang Dalam Program ********\n");
    printf("\t\t\t***  Menghitung Luas Permukaan dan Volume ***\n");
    printf("\t\t\t**************  Bangun Ruang ****************\n");
    printf("\t\t\t=============================================\n");
    printf("\t\t\t*             Pilih Operasi:                *\n");
    printf("\t\t\t*             1. Luas Permukaan             *\n");
    printf("\t\t\t*             2. Volume                     *\n");
    printf("\t\t\t=============================================\n");
    printf("\t\t\t*  Jawaban: ");
    scanf("%s",&pilihan_operasi);
    menu_operasi = validasi_pilihan(pilihan_operasi);
}

//Fungsi untuk memilih ulang//
void ulang_kembali(){
    char jawaban;
    int tanya_lagi,tanya_lagi2,tanya_lagi3;

    do{
        tanya_lagi=0;
        printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali(y/t)?");
        scanf("%s",&jawaban);

        if(jawaban=='y'){
            system("cls");
            ulang_hitung=1;

        }else if (jawaban == 't'){
            do{
                tanya_lagi2=0;
                system("cls");
                printf("\n\n\n");
                printf("\n\n\t\t*******************************************************\n");
                printf("\t\t*                                                     *\n");
                printf("\t\t*                Kembali Ke Menu Operasi?             *\n");
                printf("\t\t*                                                     *\n");
                printf("\t\t*******************************************************\n");
                printf("\t\tJawab y / t :");
                scanf("%s",&jawaban);

                if(jawaban=='y'){
                    ulang_operasi=1;

                }else if (jawaban=='t'){
                    do{
                        tanya_lagi3=0;
                        system("cls");
                        printf("\n\n\n");
                        printf("\n\n\t\t*******************************************************\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*******************************************************\n");
                        printf("\t\tJawab y / t :");
                        scanf("%s",&jawaban);

                        if (jawaban=='y'){
                            ulang_utama=1;

                        }else if (jawaban!='y' && jawaban!='t'){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            tanya_lagi2=1;
                        }
                    }while (tanya_lagi3==1);
                }else{
                    printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                    Sleep(1000);
                    printf(".");
                    Sleep(1000);
                    printf(".");
                    Sleep(1000);
                    printf(".");
                    Sleep(1000);
                    tanya_lagi2=1;
                }
            }while (tanya_lagi2==1);
        }else{
            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            tanya_lagi=1;
        }
    }while (tanya_lagi==1);
}

//Kumpulan fungsi rumus untuk Bidang//
float luas_permukaan_tabung(){

    luas_permukaan = (2*PHI*r*r) + (PHI*(2*r)*t);

    return luas_permukaan;
}

float volume_tabung(){

	volume =  (PHI*r*r)*t;

	return volume;
}

float luas_permukaan_bola(){

	luas_permukaan = 4*PHI*r*r;

	return luas_permukaan;
}

float volume_bola(){

	volume = (4/3) * PHI * r * r *r;

	return volume;
}

float luas_permukaan_limas_segiempat(){

	luas_permukaan = (s * s) + (4*(s * ts / 2));

	return luas_permukaan;
}

float volume_limas_segiempat(){

	volume = (1/3) * (tl* (s * s));

	return volume;
}

float luas_permukaan_prisma_segitiga(){

	luas_permukaan = (2*(s * ts)) + (3*(s * tp));

	return luas_permukaan;
}

float volume_prisma_segitiga(){

	volume = (s * ts /2) * tp;

	return volume;
}

float luas_permukaan_kerucut(){

	luas_permukaan = (PHI*r*r) + (PHI*r*s);

	return luas_permukaan;
}

float volume_kerucut(){

	volume = 0.34 * (PHI*r*r) * tk;

	return volume;
}


//Fungsi Utama
int main (){
    char pilihan_utama[100];
    int menu_utama,pilihan,pilihan2;

    do{
        system("cls");
        ulang_utama=0;
        printf("\n\n\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t======= Selamat Datang Dalam Program ========\n");
        printf("\t\t\t***  Menghitung Luas Permukaan dan Volume ***\n");
        printf("\t\t\t==============  Bangun Ruang ================\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t-------------- Kelompok 21 ------------------ \n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t*           Pilih Bangun:                   *\n");
        printf("\t\t\t*           1. Tabung                       *\n");
        printf("\t\t\t*           2. Bola                         *\n");
        printf("\t\t\t*           3. Limas Segiempat              *\n");
        printf("\t\t\t*           4. Prisma Segitiga              *\n");
        printf("\t\t\t*           5. Kerucut                      *\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t* Jawab: ");
        scanf("%s",&pilihan_utama);
        menu_utama =  validasi_pilihan(pilihan_utama);

        if (menu_utama==0){
            pilihan = atoi(pilihan_utama);

            if ((pilihan>=1)&&(pilihan<=5)){

                if(pilihan == 1){
                    do{
                        system("cls");
                        ulang_operasi=0;
                        ke_menu_operasi();

                        if(menu_operasi==0){
                            pilihan2 = atoi(pilihan_operasi);

                            if ((pilihan2==1)||(pilihan2==2)){

                                if(pilihan2 ==1){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Luas Permukaan Tabung
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t**  Menghitung Luas Permukaan Bangun Ruang **\n");
                                        printf("\t\t\t****************** Tabung *******************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari - Jari Tabung (cm): ");
                                        r = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Tabung (cm): ");
                                        t = validasi_nilai();

                                        luas_permukaan_tabung();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ***** Menghitung Luas Permukaan Bangun Ruang *****\n");
                                        printf("\t\t     ********************* Tabung *********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Luas Permukaan Tabung tersebut adalah \n");
                                        printf("\t\t       = (2x L.alas) + L.selimut \n");
                                        printf("\t\t       = (2x (PHI x (r)^2) + (t x (PHI x (2 x r))\n");
                                        printf("\t\t       = (2x (PHI x (%.2f)^2) + (%.2f x (PHI x (2 x %.2f))\n",r,t,r);
                                        printf("\t\t       = %.2f cm^2\n",luas_permukaan);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);

                                }else if (pilihan2==2){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Volume Tabung
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t****** Menghitung Volume Bangun Ruang *******\n");
                                        printf("\t\t\t****************** Tabung *******************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari - Jari Tabung (cm): ");
                                        r = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Tabung (cm): ");
                                        t = validasi_nilai();

                                        volume_tabung();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ********* Menghitung Volume Bangun Ruang *********\n");
                                        printf("\t\t     ********************* Tabung *********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Volume Tabung tersebut adalah \n");
                                        printf("\t\t       = Luas alas x Tinggi tabung\n");
                                        printf("\t\t       = (PHI x (r)^2) x t\n");
                                        printf("\t\t       = (PHI x (%.2f)^2) x %.2f\n",r,t);
                                        printf("\t\t       = %.2f cm^3\n",volume);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);
                                }

                            }else {
                                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                system("cls");
                                ulang_operasi = 1;
                            }

                        }else if (menu_operasi==1){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            system("cls");
                            ulang_operasi = 1;
                        }

                    }while(ulang_operasi ==1);

                }else if(pilihan == 2){
                    do{
                    system("cls");
                    ulang_operasi=0;
                    ke_menu_operasi();

                    if(menu_operasi==0){
                            pilihan2 = atoi(pilihan_operasi);

                            if ((pilihan2==1)||(pilihan2==2)){

                                if(pilihan2 ==1){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Luas Permukaan Bola
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t**  Menghitung Luas Permukaan Bangun Ruang **\n");
                                        printf("\t\t\t******************* Bola ********************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari - Jari Bola (cm): ");
                                        r = validasi_nilai();

                                        luas_permukaan_bola();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ***** Menghitung Luas Permukaan Bangun Ruang *****\n");
                                        printf("\t\t     ********************** Bola **********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Luas Permukaan Bola tersebut adalah \n");
                                        printf("\t\t       = 4 x PHI x (r)^2)\n");
                                        printf("\t\t       = 4 x PHI x (%.2f)^2)\n",r);
                                        printf("\t\t       = %.2f cm^2\n",luas_permukaan);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);

                                }else if (pilihan2==2){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Volume Bola
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t****** Menghitung Volume Bangun Ruang *******\n");
                                        printf("\t\t\t******************* Bola ********************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari - Jari Tabung (cm): ");
                                        r = validasi_nilai();

                                        volume_bola();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ********* Menghitung Volume Bangun Ruang *********\n");
                                        printf("\t\t     ********************** Bola **********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Volume Bola tersebut adalah \n");
                                        printf("\t\t       = 4/3 (PHI x (r)^2)\n");
                                        printf("\t\t       = 4/3 (PHI x (%2.f)^2)\n",r);
                                        printf("\t\t       = %.2f cm^3\n",volume);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);
                                }

                            }else {
                                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                system("cls");
                                ulang_operasi = 1;
                            }

                        }else if (menu_operasi==1){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            system("cls");
                            ulang_operasi = 1;
                        }

                   }while(ulang_operasi ==1);

                }else if(pilihan == 3){
                    do{
                    system("cls");
                    ulang_operasi=0;
                    ke_menu_operasi();

                    if(menu_operasi==0){
                            pilihan2 = atoi(pilihan_operasi);

                            if ((pilihan2==1)||(pilihan2==2)){

                                if(pilihan2 ==1){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Luas Permukaan Limas Segiempat
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t**  Menghitung Luas Permukaan Bangun Ruang **\n");
                                        printf("\t\t\t************* Limas Segiempat ***************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Sisi Alas (cm): ");
                                        s = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Segitiga Selimut (cm): ");
                                        ts = validasi_nilai();

                                        luas_permukaan_limas_segiempat();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ***** Menghitung Luas Permukaan Bangun Ruang *****\n");
                                        printf("\t\t     ***************** Limas Segiempat ****************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Luas Permukaan Limas Segiempat tersebut adalah \n");
                                        printf("\t\t       = L.alas + (4 x L. segitiga selimut) \n");
                                        printf("\t\t       = (s x s) + (4 x (s * ts : 2))\n");
                                        printf("\t\t       = (%.2f x %.2f) + (4 x (%.2f * %.2f : 2))\n",s,s,s,ts);
                                        printf("\t\t       = %.2f cm^2\n",luas_permukaan);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);

                                }else if (pilihan2==2){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Volume Limas Segiempat
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t****** Menghitung Volume Bangun Ruang *******\n");
                                        printf("\t\t\t************* Limas Segiempat ***************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Sisi Alas (cm): ");
                                        s = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Limas Segiempat (cm): ");
                                        tl = validasi_nilai();

                                        volume_limas_segiempat();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ********* Menghitung Volume Bangun Ruang *********\n");
                                        printf("\t\t     ***************** Limas Segiempat ****************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Volume Limas Segiempat tersebut adalah \n");
                                        printf("\t\t       = 1/3 x (Luas Alas x Tinggi Limas)\n");
                                        printf("\t\t       = 1/3 x ((s x s) x tl\n");
                                        printf("\t\t       = 1/3 x ((%.2f x %.2f) x %.2f\n",s,s,tl);
                                        printf("\t\t       = %.2f cm^3\n",volume);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);
                                }

                            }else {
                                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                system("cls");
                                ulang_operasi = 1;
                            }

                        }else if (menu_operasi==1){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            system("cls");
                            ulang_operasi = 1;
                        }

                   }while(ulang_operasi ==1);

                }else if(pilihan == 4){
                    do{
                    system("cls");
                    ulang_operasi=0;
                    ke_menu_operasi();

                    if(menu_operasi==0){
                            pilihan2 = atoi(pilihan_operasi);

                            if ((pilihan2==1)||(pilihan2==2)){

                                if(pilihan2 ==1){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Luas Permukaan Prisma Segitiga
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t**  Menghitung Luas Permukaan Bangun Ruang **\n");
                                        printf("\t\t\t************** Prisma Segitiga **************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Sisi Alas (cm): ");
                                        s = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Alas (cm): ");
                                        ts = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi prisma (cm): ");
                                        tp = validasi_nilai();

                                        luas_permukaan_prisma_segitiga();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ***** Menghitung Luas Permukaan Bangun Ruang *****\n");
                                        printf("\t\t     ***************** Prisma Segitiga ****************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Luas Permukaan Prisma Segitiga tersebut adalah \n");
                                        printf("\t\t       = (2x L.alas) + L.selimut \n");
                                        printf("\t\t       = (2x (s x ts :2) + (tp x s)\n");
                                        printf("\t\t       = (2x (%.2f x %.2f :2) + (%.2f x %.2f)\n",s,ts,tp,s);
                                        printf("\t\t       = %.2f cm^2\n",luas_permukaan);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);

                                }else if (pilihan2==2){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Volume Prisma Segitiga
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t****** Menghitung Volume Bangun Ruang *******\n");
                                        printf("\t\t\t************** Prisma Segitiga **************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Sisi Alas (cm): ");
                                        s = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi alas (cm): ");
                                        ts = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi prisma (cm): ");
                                        tp = validasi_nilai();

                                        volume_limas_segiempat();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ********* Menghitung Volume Bangun Ruang *********\n");
                                        printf("\t\t     ***************** Prisma Segitiga ****************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Volume Prisma Segitiga tersebut adalah \n");
                                        printf("\t\t       = Luas Alas x Tinggi Prisma\n");
                                        printf("\t\t       = (s x ts :2) x tp\n");
                                        printf("\t\t       = (&.2f x &.2f :2) x &.2f\n",s,ts,tp);
                                        printf("\t\t       = %.2f cm^3\n",volume);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);
                                }

                            }else {
                                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                system("cls");
                                ulang_operasi = 1;
                            }

                        }else if (menu_operasi==1){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            system("cls");
                            ulang_operasi = 1;
                        }

                   }while(ulang_operasi ==1);

                }else if(pilihan == 5){
                    do{
                    system("cls");
                    ulang_operasi=0;
                    ke_menu_operasi();

                    if(menu_operasi==0){
                            pilihan2 = atoi(pilihan_operasi);

                            if ((pilihan2==1)||(pilihan2==2)){

                                if(pilihan2 ==1){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Luas Permukaan Kerucut
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t**  Menghitung Luas Permukaan Bangun Ruang **\n");
                                        printf("\t\t\t******************* Kerucut *****************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari-jari Alas (cm): ");
                                        r = validasi_nilai();
                                        printf("\t\t\t   Masukan Sisi Garis Pelukis (cm): ");
                                        s = validasi_nilai();

                                        luas_permukaan_kerucut();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ***** Menghitung Luas Permukaan Bangun Ruang *****\n");
                                        printf("\t\t     ********************* Kerucut ********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Luas Permukaan Kerucut tersebut adalah \n");
                                        printf("\t\t       = L.alas + L.selimut \n");
                                        printf("\t\t       = (PHI x (r)^2) + (PHI x r x s)\n");
                                        printf("\t\t       = (PHI x (%.2f)^2) + (PHI x %.2f x %.2f)\n",r,r,s);
                                        printf("\t\t       = %.2f cm^2\n",luas_permukaan);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);

                                }else if (pilihan2==2){
                                    do{
                                        system("cls");
                                        ulang_hitung=0;

                                        //Volume Kerucut
                                        printf("\n\n\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t****** Menghitung Volume Bangun Ruang *******\n");
                                        printf("\t\t\t******************* Kerucut *****************\n");
                                        printf("\t\t\t=============================================\n");
                                        printf("\t\t\t   Masukan Jari-jari Alas (cm): ");
                                        r = validasi_nilai();
                                        printf("\t\t\t   Masukan Tinggi Kerucut (cm): ");
                                        tk = validasi_nilai();

                                        volume_kerucut();

                                        system("cls");
                                        printf("\n\n\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     ********* Menghitung Volume Bangun Ruang *********\n");
                                        printf("\t\t     ********************* Kerucut ********************\n");
                                        printf("\t\t     ==================================================\n");
                                        printf("\t\t     Volume Kerucut tersebut adalah \n");
                                        printf("\t\t       = (1/3) x Luas Alas x Tinggi Kerucut\n");
                                        printf("\t\t       = (1/3) x (PHI x (r)^2) x tk\n");
                                        printf("\t\t       = (1/3) x (PHI x (%.2f)^2) x %.2f\n",r,tk);
                                        printf("\t\t       = %.2f cm^3\n",volume);
                                        printf("\t\t     ==================================================\n");
                                        ulang_kembali();

                                    }while(ulang_hitung == 1);
                                }

                            }else {
                                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                printf(".");
                                Sleep(1000);
                                system("cls");
                                ulang_operasi = 1;
                            }

                        }else if (menu_operasi==1){
                            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            printf(".");
                            Sleep(1000);
                            system("cls");
                            ulang_operasi = 1;
                        }

                   }while(ulang_operasi ==1);

                }

            }else{
                printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                system("cls");
                ulang_utama = 1;
            }

        }else if (menu_utama==1){
            printf("\t\t\tMasukkan yang anda masukan salah ! Masukkan pilihan yang benar");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            printf(".");
            Sleep(1000);
            system("cls");
            ulang_utama = 1;
        }


    }while(ulang_utama == 1);

    printf("\n\n\t\t\t\t\tTERIMA KASIH");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    system("cls");
}
