#include <stdio.h>
#include <string.h>


void welcome();
void biner();
int pangkat();
int cekdesimal();
int cekbiner();


int main() { 
   int x,dec; 
    char oct[6],bin[16],hex[4];
	char pilihan; 
    menu:
    system("cls");
	printf("\n\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||                     MENU UTAMA                   ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
    printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [1] Bilangan Desimal ke Biner                   ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ||  [2] Bilangan Biner ke Desimal                   ||\n");
	printf("\t\t\t\t ||                                                  ||\n");
	printf("\t\t\t\t ++--------------------------------------------------++\n");
	printf("\t\t\t\t ||  [3] | Keluar dari program                       ||\n");
	printf("\t\t\t\t ++------------------------ --------------------------++\n");
	printf("\t\t\t\t || >> Masukkan Pilihan : ");
    scanf("%d",&x); 
    switch(x) { 
        case 1:
        			desimal:
                    system("cls");
                    printf("\t\t\t\t ++--------------------------------------------------++\n");
                    printf("\t\t\t\t ||        Konversi Bilangan Desimal ke Biner        ||\n");
                    printf("\t\t\t\t ++--------------------------------------------------++\n");
                    printf("\t\t\t\t || >> Masukan angka desimal (Maksimal 65535): ");
                    scanf("%d",&dec);
                    if(cekdesimal(dec) != 0) {
                        printf("\t\t\t\t || >> Input salah");
                        break;
                    }
                    printf("\t\t\t\t || >> Biner: ");
                    biner(dec);
                    printf("\n\t\t\t\t Tekan y untuk kembali ke menu, \n\t\t\t\ttekan t untuk mengulang:");
                    fflush(stdin);
                    scanf("%c",&pilihan);
                    switch(pilihan){
                    	case'y':
                    		goto menu;
                    		break;
                    	case 't':
                    		goto desimal;
					}
					break;
        case 2:
        			biner:
                    system("cls");
                    printf("\t\t\t\t ++--------------------------------------------------++\n");
                    printf("\t\t\t\t ||        Konversi Bilangan Biner ke Desimal        ||\n");
                    printf("\t\t\t\t ++--------------------------------------------------++\n");
                    printf("\t\t\t\t || >>Masukan angka biner (Maksimal 16 bit): ");
                    scanf("%s",bin);
                    if(cekbiner(bin,&dec) != 0) {
                        printf("\t\t\t\t || >>Input salah");
                        break;
                    }
                    printf("\t\t\t\t || >> Desimal: %d",dec);
                    printf("\n\t\t\t\t Tekan y untuk kembali ke menu, \n\t\t\t\ttekan t untuk mengulang:");
                    fflush(stdin);
                    scanf("%c",&pilihan);
                    switch(pilihan){
                    	case'y':
                    		goto menu;
                    		break;
                    	case 't':
                    		goto biner;
					}
					break;

        case 3:
                    system("cls");
                    printf("\n\n\n");
                    printf("\t\t\t >>  Terima kasih telah menggunakan program kami! << \n");
                    printf("\t\t\t >>               ENTER 1X UNTUK KELUAR!          << ");
                    break;

        default: printf("Inputan yang anda masukkan salah!\n");
    } //end case
    return 0;
} //end main


void biner(int n) {
    if (n > 0) {
        biner(n/2);
        printf("%d",n%2);
    }
}

int pangkat(int n,int x) {
    int nilai=1,i;
    for (i=0;i<x;i++) {
        nilai=nilai*n;
    }
    return nilai;
}

int cekdesimal(int x) {
    //checking
    if (x < 0)    { //no minus
        return 1;
    }
    //end of checking, all is right
    return 0;
}

int cekbiner(char str[],int *x) {
    int i,dec = 0;

    //checking
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return 1;
        }
    }
    //end of checking, all is right

    for (i =0; i <  strlen(str) ; i++)
    {
        if (str[i] - '0' == 1) {
            dec = dec + pangkat(2,strlen(str)-1-i);
        }
    }
    *x = dec;
    return 0;
}
