#include <stdio.h>
#include <stdlib.h>

int validasiMenu() {
    int nilai;
 char check;
 
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
     fflush(stdin);
  printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang : ");
        return validasiMenu();
        printf("\n===============================================\n");
 } else if (nilai < 0 || nilai > 3) {
  printf("\nNilai yang anda masukan tidak valid!\nPilih 1-3: ");
  return validasiMenu();
        printf("\n===============================================\n"); 
 } else {
        return nilai;
    }
}

int validasiHanoi() {
    int nilai;
 char check;
 
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
     fflush(stdin);
  printf("\nNilai yang anda masukan tidak valid!\nMohon masukan angka : ");
        return validasiHanoi();
        printf("\n===============================================\n");
 } else if (nilai <= 0) {
  printf("\nNilai yang anda masukan tidak valid!\nMohon masukan bilangan bukan negatif : ");
  return validasiHanoi();
        printf("\n===============================================\n"); 
 } else {
        return nilai;
    }
}

void menghitungHanoi(int n, int a,int b,int c) {
 if (n==1) {
  printf("Pindahkan cakram paling atas dari tiang %c ke tiang %c\n", a, c);
 } else {
  menghitungHanoi(n-1,a,c,b);
        menghitungHanoi(1,a,b,c);
        menghitungHanoi(n-1,b,a,c);
 }
}

void rekursifHanoi(int n, char a, char b, char c) {
 int m; //jumlah cakram
 char x, y, z; //tiang
 int langkah;
 
 printf("==================================\n");
 printf("          PROGRAM HANOI           \n");
 printf("            REKURSIF              \n");
 printf("==================================\n");
 printf("Masukan jumlah cakram yang diinginkan : ");
 m=validasiHanoi();
 system("cls");
 
 langkah=(1<<m)-1;
 
 //output hasil
 printf("\nLangkah minimum untuk memindahkan %d cakram yaitu : %d\n\n", m, langkah);
 printf("Langkah-langkah pemindahan cakram : \n\n");
 menghitungHanoi(m, 'A', 'B', 'C');
 
}

void iteratifHanoi(int n, char tiangA, char tiangB, char tiangC) {
 int m; //jumlah cakram
 int i; //perulangan
 int langkah;
 char tiang[3];
 tiang[0]=tiangA;
    tiang[1]=tiangB;
    tiang[2]=tiangC;
 
 printf("==================================\n");
 printf("          PROGRAM HANOI           \n");
 printf("            ITERATIF              \n");
 printf("==================================\n");
 printf("Masukan jumlah cakram yang diinginkan : ");
 m=validasiHanoi();
 system("cls");
 
 langkah=(1<<m)-1;
 
 //output hasil
 printf("\nLangkah minimum untuk memindahkan %d cakram yaitu : %d\n\n", m, langkah);
 printf("Langkah-langkah pemindahan cakram : \n\n");
    if (m%2==0){
        tiang[1] = tiangC;
        tiang[2] = tiangB;
    }
    for(i = 1; i <=langkah; i++){
        printf("Pindahkan cakram paling atas dari tiang %c ke tiang %c\n", tiang[(i&i-1)%3], tiang[((i|i-1)+1)%3]);
    }
}

int main() {
 int menu;
 int m;
 char ulang;
 char hitung;
 
 do{
  system("cls");

 printf("\t\t\t\t==================================\n");
 printf("\t\t\t\t     PROGRAM MENARA HANOI         \n");
 printf("\t\t\t\t             OLEH:                \n");
 printf("\t\t\t\t          KELOMPOK 21             \n");
 printf("\t\t\t\t==================================\n");
 printf("\n\n\n\n\n\t\t\t\t\t********* ");
 printf("\n\t\t\t\t\t* Tekan Enter untuk memulai *   ");
 printf("\n\t\t\t\t\t*********\n\n\n  ");
 system("pause");
 system("cls");
 printf("==================================\n");
 printf("               MENU               \n");
 printf("           MENARA HANOI         \n\n");
 printf("      1.    Hanoi Rekursif        \n");
 printf("      2.    Hanoi Iteratif        \n");
 printf("      3.    Keluar                \n");

printf("==================================\n");
 printf("Masukan angka yang anda inginkan : ");
 menu=validasiMenu();
 system("cls");
 do {
  system("cls");
 if (menu==1) {
  rekursifHanoi(m, 'A', 'B', 'C');
 } else if (menu==2) {
  iteratifHanoi(m, 'A', 'B', 'C');
 } else {
 }
 printf("\n\n-------------------------------");
 printf("\nUlangi Menghitung (Y/T) ? ");
 scanf("%s", &hitung);
 } while (hitung == 'Y' || hitung == 'y');
  system("cls");
  
 printf("\n\nUlangi Lagi (Y/T) ? ");
 scanf("%s", &ulang);
 } while (ulang == 'Y' || ulang == 'y');
  system("cls");
  printf ("-----------------------------------------------\n");
  printf ("* TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM KAMI *\n");
  printf ("*             FROM KELOMPOK 21                *\n");
  printf ("-----------------------------------------------\n");
 return 0;
}



