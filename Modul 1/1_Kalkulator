#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int validasi_pilihan(char target[100]){
    int i = 0;
    int titik = 0;
    int salah = 0;
    int ulang_utama;

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
    }else{
        return val;
    }
}

int validasi_nilai2(){
    int i = 0;
    int titik = 0;
    int salah = 0;
    int val;
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

    val = atoi(angka);

    if(salah == 1){
        printf("\t\t\tMasukkan salah!");
        printf("\n\t\t\tMasukkan angka yang benar : ");
        return validasi_nilai();
    }else{
        return val;
    }
}

int main (){
    int mod_a,mod_b,hasil_mod,pilihan2,ulang_utama,menu_utama,ulang_hitung,tanya_lagi,tanya_lagi2;
    float a,b,hasil;
    char pilihan[1],jawaban;

    do{
        ulang_utama=0;
        system("cls");
        printf("\n\n\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t******* Selamat Datang Dalam Program ********\n");
        printf("\t\t\t*********** Kalkulator Sederhana ************\n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t              Kelompok 21 \n");
        printf("\t\t\t=============================================\n");
        printf("\t\t\t\tPilih Operasi : \n");
        printf("\n\t\t\t\t\t1. Penjumlahan");
        printf("\n\t\t\t\t\t2. Pengurangan");
        printf("\n\t\t\t\t\t3. Perkalian");
        printf("\n\t\t\t\t\t4. Pembagian");
        printf("\n\t\t\t\t\t5. Modulus");
        printf("\n\n\t\t\t=============================================\n");
        printf("\t\t\tJawaban : ");
        scanf("%s",&pilihan);
        menu_utama = validasi_pilihan(pilihan);

        if(menu_utama==0){
            pilihan2 = atoi(pilihan);

            if((pilihan2>=1)&&(pilihan2<=5)){

                if(pilihan2==1){
                    do{
                        ulang_hitung=0;
                        system("cls");
                        printf(" =======================================================================================\n");
                        printf("                                 Kalkulator Penjumlahan\n");
                        printf(" =======================================================================================\n");
                        printf("\n                              Masukan bilangan pertama: ");
                        a= validasi_nilai();
                        printf("\n                              Masukan bilangan kedua: ");
                        b= validasi_nilai();

                        hasil= a + b;

                        printf("\n\n\t\t*******************************************************\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t* Maka, Hasil penjumlahan dua bilangan diatas adalah: *\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*                     %.2f + %.2f = %.2f              *\n",a,b,hasil);
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*******************************************************\n\n\n");
                        printf(" =======================================================================================\n");
                        do{
                            tanya_lagi=0;
                            printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali (y/t)?  ");
                            scanf("%s",&jawaban);

                            if (jawaban=='y'){
                                ulang_hitung=1;
                            }else if (jawaban=='t'){
                                do{
                                    tanya_lagi2=0;
                                    system("cls");
                                    printf("\n\n\n");
                                    printf("\n\n\t\t*******************************************************\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*******************************************************\n");
                                    printf("\t\tJawab y/t :");
                                    scanf("%s",&jawaban);
                                    if (jawaban=='y'){
                                        ulang_utama=1;
                                    }else if (jawaban!='y' && jawaban!='t'){
                                        printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        tanya_lagi2=1;
                                    }
                                }while(tanya_lagi2==1);

                            }else{
                                printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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

                    }while(ulang_hitung==1);

                }else if(pilihan2==2){
                    do{
                        ulang_hitung=0;
                        system("cls");
                        printf(" =======================================================================================\n");
                        printf("                                 Kalkulator Pengurangan\n");
                        printf(" =======================================================================================\n");
                        printf("\n                              Masukan bilangan pertama: ");
                        a = validasi_nilai();
                        printf("\n                              Masukan bilangan kedua: ");
                        b = validasi_nilai();

                        hasil= a-b ;

                        printf("\n\n\t\t*******************************************************\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t* Maka, Hasil pengurangan dua bilangan diatas adalah: *\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*                  %.2f - %.2f = %.2f                 *\n",a,b,hasil);
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*******************************************************\n\n\n");
                        printf(" =======================================================================================\n");
                        do{
                            tanya_lagi=0;
                            printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali (y/t)?  ");
                            scanf("%s",&jawaban);

                            if (jawaban=='y'){
                                ulang_hitung=1;
                            }else if (jawaban=='t'){
                                do{
                                    tanya_lagi2=0;
                                    system("cls");
                                    printf("\n\n\n");
                                    printf("\n\n\t\t*******************************************************\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*******************************************************\n");
                                    printf("\t\tJawab y/t :");
                                    scanf("%s",&jawaban);
                                    if (jawaban=='y'){
                                        ulang_utama=1;
                                    }else if (jawaban!='y' && jawaban!='t'){
                                        printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        tanya_lagi2=1;
                                    }
                                }while(tanya_lagi2==1);

                            }else{
                                printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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

                    }while(ulang_hitung==1);

                }else if(pilihan2==3){
                    do{
                        ulang_hitung=0;
                        system("cls");
                        printf(" =======================================================================================\n");
                        printf("                                 Kalkulator Perkalian\n");
                        printf(" =======================================================================================\n");
                        printf("\n                              Masukan bilangan pertama: ");
                        a = validasi_nilai();
                        printf("\n                              Masukan bilangan kedua: ");
                        b = validasi_nilai();

                        hasil= a * b;

                        printf("\n\n\t\t*******************************************************\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t* Maka, Hasil perkalian dua bilangan diatas adalah:   *\n");
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*               %.2f x %.2f = %.2f                    *\n",a,b,hasil);
                        printf("\t\t*                                                     *\n");
                        printf("\t\t*******************************************************\n\n\n");
                        printf(" =======================================================================================\n");
                        do{
                            tanya_lagi=0;
                            printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali (y/t)?  ");
                            scanf("%s",&jawaban);

                            if (jawaban=='y'){
                                ulang_hitung=1;
                            }else if (jawaban=='t'){
                                do{
                                    tanya_lagi2=0;
                                    system("cls");
                                    printf("\n\n\n");
                                    printf("\n\n\t\t*******************************************************\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*******************************************************\n");
                                    printf("\t\tJawab y/t :");
                                    scanf("%s",&jawaban);
                                    if (jawaban=='y'){
                                        ulang_utama=1;
                                    }else if (jawaban!='y' && jawaban!='t'){
                                        printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        tanya_lagi2=1;
                                    }
                                }while(tanya_lagi2==1);

                            }else{
                                printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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

                    }while(ulang_hitung==1);

                }else if(pilihan2==4){
                    do{
                        ulang_hitung=0;
                        system("cls");
                        printf(" =======================================================================================\n");
                        printf("                                 Kalkulator Pembagian\n");
                        printf(" =======================================================================================\n");
                        printf("\n                              Masukan bilangan pertama: ");
                        a = validasi_nilai();
                        printf("\n                              Masukan bilangan kedua: ");
                        b =validasi_nilai();

                        if(b==0){
                            printf("\n\n\t\t*******************************************************\n");
                            printf("\t\t*                                                     *\n");
                            printf("\t\t* Maka, Hasil pembagian dua bilangan diatas adalah    *\n");
                            printf("\t\t*                  TIDAK TERDEFINISI                  *\n");
                            printf("\t\t*******************************************************\n\n\n");
                        }else{
                            hasil= a / b;

                            printf("\n\n\t\t*******************************************************\n");
                            printf("\t\t*                                                     *\n");
                            printf("\t\t* Maka, Hasil pembagian dua bilangan diatas adalah:   *\n");
                            printf("\t\t*                                                     *\n");
                            printf("\t\t*                 %.2f : %.2f = %.2f                  *\n",a,b,hasil);
                            printf("\t\t*                                                     *\n");
                            printf("\t\t*******************************************************\n\n\n");
                            printf(" =======================================================================================\n");
                        }
                       do{
                            tanya_lagi=0;
                            printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali (y/t)?  ");
                            scanf("%s",&jawaban);

                            if (jawaban=='y'){
                                ulang_hitung=1;
                            }else if (jawaban=='t'){
                                do{
                                    tanya_lagi2=0;
                                    system("cls");
                                    printf("\n\n\n");
                                    printf("\n\n\t\t*******************************************************\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*******************************************************\n");
                                    printf("\t\tJawab y/t :");
                                    scanf("%s",&jawaban);
                                    if (jawaban=='y'){
                                        ulang_utama=1;
                                    }else if (jawaban!='y' && jawaban!='t'){
                                        printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        tanya_lagi2=1;
                                    }
                                }while(tanya_lagi2==1);

                            }else{
                                printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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

                    }while(ulang_hitung==1);

                }else if(pilihan2==5){
                    do{
                        ulang_hitung=0;
                        system("cls");
                        printf(" =======================================================================================\n");
                        printf("                                 Kalkulator Modulus\n");
                        printf(" =======================================================================================\n");
                        printf("\n                              Masukan bilangan pertama: ");
                        mod_a = validasi_nilai2();
                        printf("\n                              Masukan bilangan kedua: ");
                        mod_b = validasi_nilai2();

                        if(mod_b==0){
                            printf("\n\n\t\t*******************************************************\n");
                            printf("\t\t*                                                     *\n");
                            printf("\t\t* Maka, Hasil pembagian dua bilangan diatas adalah    *\n");
                            printf("\t\t*                  TIDAK TERDEFINISI                  *\n");
                            printf("\t\t*******************************************************\n\n\n");
                            ulang_hitung=1;
                        }else{
                            hasil_mod= mod_a % mod_b;

                            printf("\n\n\t\t*******************************************************\n");
                            printf("\t\t*                                                     *\n");
                            printf("\t\t*         Maka, Sisa dari Pembagian Bilangan          *\n");
                            printf("\t\t*            %d oleh bilangan %d adalah: %d              *\n",mod_a,mod_b,hasil_mod);
                            printf("\t\t*                                                     *\n");
                            printf("\t\t*******************************************************\n\n\n");
                            printf(" =======================================================================================");
                        }
                        do{
                            tanya_lagi=0;
                            printf("\n\t\t\tApakah Anda Ingin Menghitung Kembali (y/t)?  ");
                            scanf("%s",&jawaban);

                            if (jawaban=='y'){
                                ulang_hitung=1;
                            }else if (jawaban=='t'){
                                do{
                                    tanya_lagi2=0;
                                    system("cls");
                                    printf("\n\n\n");
                                    printf("\n\n\t\t*******************************************************\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*                Kembali Ke Menu Utama?               *\n");
                                    printf("\t\t*                                                     *\n");
                                    printf("\t\t*******************************************************\n");
                                    printf("\t\tJawab y/t :");
                                    scanf("%s",&jawaban);
                                    if (jawaban=='y'){
                                        ulang_utama=1;
                                    }else if (jawaban!='y' && jawaban!='t'){
                                        printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        printf(".");
                                        Sleep(1000);
                                        tanya_lagi2=1;
                                    }
                                }while(tanya_lagi2==1);

                            }else{
                                printf("\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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

                    }while(ulang_hitung==1);
                }
            }else{
                printf("\n\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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
            printf("\n\t\t\tMasukkan salah ! Masukkan pilihan yang benar");
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
    }while (ulang_utama == 1);

    printf("\n\n\t\t\t\t\tTerima Kasih");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    system("cls");


}
