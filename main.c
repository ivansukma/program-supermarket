#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BKSP 8


int jumlah,kosong,i,d,jum,kondisi,hitung;
hitung = 0;
typedef struct Transaksi{
    int kode;
    char kategori [50];
    char merek [50];
    int harga;
    int jumlah;
    int subtotal;
};
struct Transaksi transaksi [10000];

struct sejarah {
    char activity [50];
    struct sejarah *lanjut;

};

struct sejarah *head = NULL, *curr = NULL, *node = NULL, *tunjuk = NULL;


void delay(void){
int delay;
delay=1;
while(delay<10000000){
delay++;
}
}
void pesan_tutup(void){
int i, panjg_char;
char pesan[]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','T','E','R','I','M','A',' ','K','A','S','I','H',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
i=0;panjg_char=strlen(pesan);
printf("\n\t ");
while(i<panjg_char){
printf("%c",pesan[i]);
delay();
i++;
}
pesan[i]=0;
printf("\n");
}
void garis(void){
int i;
for(i=1;i<=24;i++){
printf("= ");
delay();
}
printf("\n");
}
void login(){
    char user[6];
    char pass[100];
    int p=0;
    time_t t;
    time(&t);
    system("COLOR A");
    gotoxy(34,9);printf("=====================================================");
    gotoxy(34,11);printf("=====================================================");
    gotoxy(34,10);printf("\t\tSELAMAT DATANG DI TOKO SUKMA ^_^");
    gotoxy(34,18);printf("=====================================================");
    gotoxy(34,20);printf("=====================================================");
    gotoxy(34,12);printf("                                                     ");
    gotoxy(34,13);printf("                                                     ");
    gotoxy(34,14);printf("                                                     ");
    gotoxy(34,15);printf("                                                     ");
    gotoxy(34,16);printf("                                                     ");
    gotoxy(34,17);printf("                                                     ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    gotoxy(55,7);printf("++++MENU LOGIN++++ ");
    gotoxy(48,14);printf("Username  : ");
    gotoxy(48,15);printf("Password  : ");
    gotoxy(34,19);printf("\t\t\t      %s", ctime(&t));
    gotoxy(60,14);scanf("%s", &user);
    gotoxy(60,15);
    char ch;
    int i = 0;
    while(1){
        ch = getch();
        if(ch == ENTER || ch == TAB){
            pass[i] = '\0';
            break;
        }else if(ch == BKSP){
            if(i > 0){
                i--;
                printf("\b \b");
            }
        }else{
            pass[i++] = ch;
            printf("*");
        }
    }
    if(strcmp(user, "asd") == 0 && strcmp(pass, "asd") == 0){
        system("cls");
        gotoxy(5,22);
        system("COLOR 8");
        int i; char b[]={"10%======30%=======50%======60%======70%========80%=======100%------>SUCCESS"}; double j; int load =0;
        int c= strlen(b);
        system("cls");
            gotoxy(2,25); printf("===================================================================================================================");
            gotoxy(2,27); printf("===================================================================================================================");
        do{
        gotoxy(5,23);
        system("COLOR 4");
        printf("Loading In Progress ...");
        gotoxy(2,26);
        for(i=0;i < c;i++)
        {
        printf("%c",b[i]);
        for(j=0;j<=7777777;j++)
        {
        }
        }
        system("cls");
        load++;
        } while (load!=1);
        kondisi = 1;
        return main();
    }else{
        system("cls");
        return login();
    }
}
void input(){
hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin melakukan input");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
jumlah = 0;
system("cls");
printf("Masukkan jumlah jenis barang yang ingin dimasukkan : ");
scanf("%d",&jumlah);
for(int i = 0; i<jumlah; i++){
    printf("\n");
    printf("Barang ke - %d\n\n",i+1);
    printf("[*] Kode barang : ");
    scanf("%d",&transaksi[i].kode);
    printf("[*] Kategori barang : ");
    scanf("%s",&transaksi[i].kategori);
    printf("[*] Merek barang : ");
    scanf("%s",&transaksi[i].merek);
    printf("[*] Harga barang : ");
    scanf("%d",&transaksi[i].harga);
    printf("[*] Jumlah barang : ");
    scanf("%d",&transaksi[i].jumlah);
    printf("\n===============================\n");
    }
    kosong = 1;
    system("cls");
    return main();
    }

void tampilkan(){
hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin menampilkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
  if(kosong==1){
    system("cls");
    gotoxy(0,0);printf("=========================================================================\n");
    gotoxy(0,1);printf("Kode");
    gotoxy(10,1);printf("Kategori");
    gotoxy(24,1);printf("Merk");
    gotoxy(40,1);printf("Harga");
    gotoxy(56,1);printf("Jumlah Barang");
    gotoxy(0,2);printf("=========================================================================\n");
    for(i=0; i<jumlah; i++){
    gotoxy(0,i+3); printf("%d",transaksi[i].kode);
    gotoxy(10,i+3); printf("%s",transaksi[i].kategori);
    gotoxy(24,i+3); printf("%s",transaksi[i].merek);
    gotoxy(40,i+3); printf("%d",transaksi[i].harga);
    gotoxy(56,i+3); printf("%d",transaksi[i].jumlah);
    }
    gotoxy(0,i+4);printf("=====TEKAN ENTER UNTUK MELANJUTKAN=====");
     getch();
     system("cls");
     return main();
  }else{
    system("cls");
    printf("Tidak ada data ditampilkan !\n \n");
  }
  printf("=====TEKAN ENTER UNTUK MELANJUTKAN=====");
  getch();
  system("cls");
  return main();
}
void urutkan()

{
    system("cls");
    int pilihan_urutkan,j,a,d,x;
    printf("=====URUTKAN DATA=====\n");
    printf("1.Urutkan berdasarkan kode\n");
    printf("2.Urutkan berdasarkan kategori\n");
    printf("3.Urutkan berdasarkan Merek\n");
    printf("4.Urutkan berdasarkan Harga\n");
    printf("5.Urutkan berdasarkan Jumlah\n");
    printf("6.Kembali ke menu utama\n");
    printf("Pilihan : ");
    scanf("%d",&pilihan_urutkan);
    switch(pilihan_urutkan){
        case 1 ://KODE
            hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengurutkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
    for (i=1; i<jumlah; i++){
        for (j=0; j<i; j++){
            if (transaksi[i-j].kode < transaksi[i-1-j].kode){
            a = transaksi[i-j-1].kode;
            transaksi[i-1-j].kode = transaksi[i-j].kode;
            transaksi[i-j].kode = a;
            d = transaksi[i-j-1].harga;
            transaksi[i-1-j].harga = transaksi[i-j].harga;
            transaksi[i-j].harga = d;
            x = transaksi[i-j-1].jumlah;
            transaksi[i-1-j].jumlah = transaksi[i-j].jumlah;
            transaksi[i-j].jumlah = x;
            char temp [50];
            strcpy(temp,transaksi[i-1-j].kategori);
            strcpy(transaksi[i-1-j].kategori,transaksi[i-j].kategori);
            strcpy(transaksi[i-j].kategori,temp);
            char temp2 [50];
            strcpy(temp2,transaksi[i-1-j].merek);
            strcpy(transaksi[i-1-j].merek,transaksi[i-j].merek);
            strcpy(transaksi[i-j].merek,temp2);
            }
        }
    }
gotoxy(0,9);printf("Berdasarkan Kode");
gotoxy(0,10);printf("==============================================================================================\n");
printf(" Kode");
gotoxy(12,11); printf("Kategori");
gotoxy(32,11); printf("Nama");
gotoxy(48,11); printf("Harga");
gotoxy(60,11); printf("Jumlah");
gotoxy(0,12);printf("==============================================================================================\n");
for (i=0; i<jumlah; i++){
    gotoxy(1,i+13); printf("  %d",transaksi[i].kode);
    gotoxy(14,i+13); printf("%s",transaksi[i].kategori);
    gotoxy(32,i+13); printf("%s",transaksi[i].merek);
    gotoxy(46,i+13); printf("Rp %d",transaksi[i].harga);
    gotoxy(62,i+13); printf(" %d",transaksi[i].jumlah);
    printf("\n");
}printf("\n\n");
printf("====TEKAN ENTER UNTUK KE MENU URUTKAN====");
getch();
system("cls");
return urutkan();
break;
        case 2 : //KATEGORI
            hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengurutkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
        		for (i=1; i<jumlah; i++){
                for (j=0; j<i; j++){
                    if (strcmp(transaksi[i-j].kategori , transaksi[i-1-j].kategori)<0){
            a = transaksi[i-j-1].kode;
            transaksi[i-1-j].kode = transaksi[i-j].kode;
            transaksi[i-j].kode = a;
            d = transaksi[i-j-1].harga;
            transaksi[i-1-j].harga = transaksi[i-j].harga;
            transaksi[i-j].harga = d;
            x = transaksi[i-j-1].jumlah;
            transaksi[i-1-j].jumlah = transaksi[i-j].jumlah;
            transaksi[i-j].jumlah = x;
            char temp [50];
            strcpy(temp,transaksi[i-1-j].kategori);
            strcpy(transaksi[i-1-j].kategori,transaksi[i-j].kategori);
            strcpy(transaksi[i-j].kategori,temp);
            char temp2 [50];
            strcpy(temp2,transaksi[i-1-j].merek);
            strcpy(transaksi[i-1-j].merek,transaksi[i-j].merek);
            strcpy(transaksi[i-j].merek,temp2);
            }
        }
    }
    gotoxy(0,9);printf("Berdasarkan Kategori");
gotoxy(0,10);printf("==============================================================================================\n");
printf(" Kode");
gotoxy(12,11); printf("Kategori");
gotoxy(32,11); printf("Nama");
gotoxy(48,11); printf("Harga");
gotoxy(60,11); printf("Jumlah");
gotoxy(0,12);printf("==============================================================================================\n");
for (i=0; i<jumlah; i++){
    gotoxy(1,i+13); printf("  %d",transaksi[i].kode);
    gotoxy(14,i+13); printf("%s",transaksi[i].kategori);
    gotoxy(32,i+13); printf("%s",transaksi[i].merek);
    gotoxy(46,i+13); printf("Rp %d",transaksi[i].harga);
    gotoxy(62,i+13); printf(" %d",transaksi[i].jumlah);
    printf("\n");
}printf("\n\n");
printf("====TEKAN ENTER UNTUK KE MENU URUTKAN====");
getch();
system("cls");
return urutkan();

            break;
        case 3 :
            hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengurutkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
            for (i=1; i<jumlah; i++){
                for (j=0; j<i; j++){
                    if (strcmp(transaksi[i-j].merek , transaksi[i-1-j].merek)<0){
            a = transaksi[i-j-1].kode;
            transaksi[i-1-j].kode = transaksi[i-j].kode;
            transaksi[i-j].kode = a;
            d = transaksi[i-j-1].harga;
            transaksi[i-1-j].harga = transaksi[i-j].harga;
            transaksi[i-j].harga = d;
            x = transaksi[i-j-1].jumlah;
            transaksi[i-1-j].jumlah = transaksi[i-j].jumlah;
            transaksi[i-j].jumlah = x;
            char temp [50];
            strcpy(temp,transaksi[i-1-j].kategori);
            strcpy(transaksi[i-1-j].kategori,transaksi[i-j].kategori);
            strcpy(transaksi[i-j].kategori,temp);
            char temp2 [50];
            strcpy(temp2,transaksi[i-1-j].merek);
            strcpy(transaksi[i-1-j].merek,transaksi[i-j].merek);
            strcpy(transaksi[i-j].merek,temp2);
            }
        }
    }
    gotoxy(0,9);printf("Berdasarkan Merk");
gotoxy(0,10);printf("==============================================================================================\n");
printf(" Kode");
gotoxy(12,11); printf("Kategori");
gotoxy(32,11); printf("Nama");
gotoxy(48,11); printf("Harga");
gotoxy(60,11); printf("Jumlah");
gotoxy(0,12);printf("==============================================================================================\n");
for (i=0; i<jumlah; i++){
    gotoxy(1,i+13); printf("  %d",transaksi[i].kode);
    gotoxy(14,i+13); printf("%s",transaksi[i].kategori);
    gotoxy(32,i+13); printf("%s",transaksi[i].merek);
    gotoxy(46,i+13); printf("Rp %d",transaksi[i].harga);
    gotoxy(62,i+13); printf(" %d",transaksi[i].jumlah);
    printf("\n");
}printf("\n\n");
printf("====TEKAN ENTER UNTUK KE MENU URUTKAN====");
getch();
system("cls");
return urutkan();
            break;
        case 4 :
            hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengurutkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
            for (i=1; i<jumlah; i++){
        for (j=0; j<i; j++){
            if (transaksi[i-j].harga < transaksi[i-1-j].harga){
            a = transaksi[i-j-1].kode;
            transaksi[i-1-j].kode = transaksi[i-j].kode;
            transaksi[i-j].kode = a;
            d = transaksi[i-j-1].harga;
            transaksi[i-1-j].harga = transaksi[i-j].harga;
            transaksi[i-j].harga = d;
            x = transaksi[i-j-1].jumlah;
            transaksi[i-1-j].jumlah = transaksi[i-j].jumlah;
            transaksi[i-j].jumlah = x;
            char temp [50];
            strcpy(temp,transaksi[i-1-j].kategori);
            strcpy(transaksi[i-1-j].kategori,transaksi[i-j].kategori);
            strcpy(transaksi[i-j].kategori,temp);
            char temp2 [50];
            strcpy(temp2,transaksi[i-1-j].merek);
            strcpy(transaksi[i-1-j].merek,transaksi[i-j].merek);
            strcpy(transaksi[i-j].merek,temp2);
            }
        }
    }
gotoxy(0,9);printf("Berdasarkan Harga");
gotoxy(0,10);printf("==============================================================================================\n");
printf(" Kode");
gotoxy(12,11); printf("Kategori");
gotoxy(32,11); printf("Nama");
gotoxy(48,11); printf("Harga");
gotoxy(60,11); printf("Jumlah");
gotoxy(0,12);printf("==============================================================================================\n");
for (i=0; i<jumlah; i++){
    gotoxy(1,i+13); printf("  %d",transaksi[i].kode);
    gotoxy(14,i+13); printf("%s",transaksi[i].kategori);
    gotoxy(32,i+13); printf("%s",transaksi[i].merek);
    gotoxy(46,i+13); printf("Rp %d",transaksi[i].harga);
    gotoxy(62,i+13); printf(" %d",transaksi[i].jumlah);
    printf("\n");
}printf("\n\n");
printf("====TEKAN ENTER UNTUK KE MENU URUTKAN====");
getch();
system("cls");
return urutkan();
break;
        case 5 :
            hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengurutkan tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
 for (i=1; i<jumlah; i++){
        for (j=0; j<i; j++){
            if (transaksi[i-j].jumlah < transaksi[i-1-j].jumlah){
            a = transaksi[i-j-1].kode;
            transaksi[i-1-j].kode = transaksi[i-j].kode;
            transaksi[i-j].kode = a;
            d = transaksi[i-j-1].harga;
            transaksi[i-1-j].harga = transaksi[i-j].harga;
            transaksi[i-j].harga = d;
            x = transaksi[i-j-1].jumlah;
            transaksi[i-1-j].jumlah = transaksi[i-j].jumlah;
            transaksi[i-j].jumlah = x;
            char temp [50];
            strcpy(temp,transaksi[i-1-j].kategori);
            strcpy(transaksi[i-1-j].kategori,transaksi[i-j].kategori);
            strcpy(transaksi[i-j].kategori,temp);
            char temp2 [50];
            strcpy(temp2,transaksi[i-1-j].merek);
            strcpy(transaksi[i-1-j].merek,transaksi[i-j].merek);
            strcpy(transaksi[i-j].merek,temp2);
            }
        }
    }
gotoxy(0,9);printf("Berdasarkan Jumlah");
gotoxy(0,10);printf("==============================================================================================\n");
printf(" Kode");
gotoxy(12,11); printf("Kategori");
gotoxy(32,11); printf("Nama");
gotoxy(48,11); printf("Harga");
gotoxy(60,11); printf("Jumlah");
gotoxy(0,12);printf("==============================================================================================\n");
for (i=0; i<jumlah; i++){
    gotoxy(1,i+13); printf("  %d",transaksi[i].kode);
    gotoxy(14,i+13); printf("%s",transaksi[i].kategori);
    gotoxy(32,i+13); printf("%s",transaksi[i].merek);
    gotoxy(46,i+13); printf("Rp %d",transaksi[i].harga);
    gotoxy(62,i+13); printf(" %d",transaksi[i].jumlah);
    printf("\n");
}printf("\n\n");
printf("====TEKAN ENTER UNTUK KE MENU URUTKAN====");
getch();
system("cls");
return urutkan();
break;
        case 6 :
        system("cls");
        return main();

    }
}

void tambahkan(){
hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin menambahkan barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
system("cls");
int sum,j,z;

if (jum==1){
    printf("Jumlah barang yang akan ditambah : ");
    scanf("%d",&sum);
    z = jumlah + sum;
    for (j = jumlah; j < z; j++){
    printf("\n");
    printf("Barang ke - %d\n\n",(j+1));
    printf("[*] Kode barang : ");
    scanf("%d",&transaksi[j].kode);
    printf("[*] Kategori barang : ");
    scanf("%s",&transaksi[j].kategori);
    printf("[*] Merek barang : ");
    scanf("%s",&transaksi[j].merek);
    printf("[*] Harga barang : ");
    scanf("%d",&transaksi[j].harga);
    printf("[*] Jumlah barang : ");
    scanf("%d",&transaksi[j].jumlah);
    printf("\n===============================\n");
    }

} else {
printf("Jumlah barang yang akan ditambah : ");
scanf("%d",&sum);
z = jumlah + sum;
    for (j = jumlah; j < z; j++){
    printf("\n");
    printf("Barang ke - %d\n\n",(j+1));
    printf("[*] Kode barang : ");
    scanf("%d",&transaksi[j].kode);
    printf("[*] Kategori barang : ");
    scanf("%s",&transaksi[j].kategori);
    printf("[*] Merek barang : ");
    scanf("%s",&transaksi[j].merek);
    printf("[*] Harga barang : ");
    scanf("%d",&transaksi[j].harga);
    printf("[*] Jumlah barang : ");
    scanf("%d",&transaksi[j].jumlah);
    printf("\n===============================\n");
    }

}
    jumlah = j;
    jum = 1;
    kosong=1;
    printf("TEKAN ENTER UNTUK MELANJUTKAN");
      getch();
      system("cls");
        return main();
}



void cari()
{
    int b;
    system("cls");
    printf("Pencarian Berdasarkan:\n1. Kode\n2. Kategori\n3. Merek\n4. Harga\n5. Jumlah Barang\n6. Kembali\nPilihan: ");
    scanf("%d", &b);
    switch(b)
    {
    case 1:
        kod();
        break;
    case 2:
        category();
        break;
    case 3:
        merk();
        break;
    case 4:
        price();
        break;
    case 5:
        tot();
        break;
    case 6:
        system("cls");
        main();
        break;
    default:
        printf("Maaf, pilihan tidak ada!");
        getch();
        system("cls");
        cari();
        break;
    }
}
void kod()
{
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mencari barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}

    int c;
    system("cls");
    printf("+----------CARI BARANG----------+\n\nKode yang dicari: ");
    scanf("%d", &c);
    printf("==========================================================================\n");
    printf("Kode\tKategori\tNama\t\tHarga\t\tJumlah Barang\n");
    printf("==========================================================================\n");
    for(i = 0; i < jumlah+kosong ; i++)
    {
        if(c == transaksi[i].kode)
        {
            printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    cari();
}
void category()
{
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mencari barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
    char b[20];
    system("cls");
    printf("+----------CARI BARANG----------+\n\nKategori yang dicari: ");
    scanf("%s", &b);
    printf("==========================================================================\n");
    printf("Kode\tKategori\tMerek\t\tHarga\t\tJumlah Barang\n");
     printf("==========================================================================\n");
    for(i = 0; i < jumlah+kosong ; i++)
    {
        d = strcmp(b, transaksi[i].kategori);
        if(d == 0 || d == 32)
        {
            printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    cari();
}
void merk()
{
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mencari barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
    char b[20];
    system("cls");
    printf("+----------CARI BARANG----------+\n\nKategori yang dicari: ");
    scanf("%s", &b);
    printf("==========================================================================\n");
    printf("Kode\tKategori\tMerek\t\tHarga\t\tJumlah Barang\n");
     printf("==========================================================================\n");
    for(i = 0; i < jumlah+kosong ; i++)
    {
        d = strcmp(b, transaksi[i].merek);
        if(d == 0 || d == 32)
        {
            printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    cari();
}
void price()
{
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mencari barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
    int c;
    system("cls");
    printf("+----------CARI BARANG----------+\n\nKode yang dicari: ");
    scanf("%d", &c);
    printf("==========================================================================\n");
    printf("Kode\tKategori\tMerek\t\tHarga\t\tJumlah Barang\n");
    printf("==========================================================================\n");
    for(i = 0; i < jumlah+kosong ; i++)
    {
        if(c == transaksi[i].harga)
        {
            printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    cari();
}
void tot()
{
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mencari barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
    int c;
    system("cls");
    printf("+----------CARI BARANG----------+\n\nKode yang dicari: ");
    scanf("%d", &c);
    printf("==========================================================================\n");
    printf("Kode\tKategori\tMerek\t\tHarga\t\tJumlah Barang\n");
    printf("==========================================================================\n");
    for(i = 0; i < jumlah+kosong ; i++)
    {
        if(c == transaksi[i].jumlah)
        {
            printf("%d\t%s\t\t%s\t\t%d\t\t%d\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
        }
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    cari();
}


void hapus(){
hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin menghapus tabel");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}
int j;
system("cls");
char deleteName[20];
char deleteSurname[20];
char nullStr[20] = {"\0"};
char nullInt[20] = {"\0"};
int del;
if(kosong==1){
printf("=========================================================================\n");
printf("Kode\tKategori\tMerek\t\tHarga\t\tJumlah Barang\n");
printf("=========================================================================\n");
for(i=0; i<jumlah; i++){
printf("%d\t%s\t\t%s\t\t%d\t\t%d\n\n", transaksi[i].kode, transaksi[i].kategori, transaksi[i].merek, transaksi[i].harga,transaksi[i].jumlah);
    }
printf("\nMasukkan Kode Barang yang ingin dihapus");
printf("\nKode Barang : ");
scanf("%d",&del);


    for(i = 0; i < jumlah ; i++)
    {
        if(del == transaksi[i].kode)
        {
            for (j = i; j < jumlah+kosong-1; j++){
                transaksi[i].kode = transaksi[i+1].kode;
                strcpy(transaksi[i].kategori, transaksi[i+1].kategori);
                strcpy(transaksi[i].merek, transaksi[i+1].merek);
                transaksi[i].harga = transaksi[i+1].harga;
                transaksi[i].jumlah = transaksi[i+1].jumlah;
            }
            jumlah--;

        }
       }}else{
        printf("Input Data Terlebih dahulu,Baru Bisa menggunakan fitur ini sheyenk \n\n");
    }
    printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();


}

void edit(){
system("cls");
int i,will,kode;
printf("Apa yang ingin diedit : \n");
printf("1. Kategori\n");
printf("2. Merk\n");
printf("3. Harga\n");
printf("4. Jumlah\n");
printf("5. Kembali Ke Menu\n");
printf("Pilihan Anda : ");
scanf("%d",&will);



if (will==1){
        hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengedit barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}

    //KATEGORI
    system("cls");
    char jenis [50];
    if(kosong==1){
    system("cls");
    gotoxy(0,0);printf("=========================================================================\n");
    gotoxy(0,1);printf("Kode");
    gotoxy(10,1);printf("Kategori");
    gotoxy(24,1);printf("Merk");
    gotoxy(40,1);printf("Harga");
    gotoxy(56,1);printf("Jumlah Barang");
    gotoxy(0,2);printf("=========================================================================\n");
    for(i=0; i<jumlah; i++){
    gotoxy(0,i+3); printf("%d",transaksi[i].kode);
    gotoxy(10,i+3); printf("%s",transaksi[i].kategori);
    gotoxy(24,i+3); printf("%s",transaksi[i].merek);
    gotoxy(40,i+3); printf("%d",transaksi[i].harga);
    gotoxy(56,i+3); printf("%d",transaksi[i].jumlah);
    }printf("\n\n");}
    printf("Masukkan kode barang : ");
    scanf("%d",&kode);
    for (i = 0; i < jumlah; i++){
        if (transaksi[i].kode == kode){
            printf("Kategori Saat ini : %s\n",transaksi[i].kategori);
            printf("Masukkan Kategori yang baru : ");
            scanf("%s",&jenis);
            strcpy(transaksi[i].kategori, jenis);
        }
    }
    edit();

} else if (will==2){
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengedit barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}

    //MEREK
    system("cls");
    char type [50];
     if(kosong==1){
    system("cls");
    gotoxy(0,0);printf("=========================================================================\n");
    gotoxy(0,1);printf("Kode");
    gotoxy(10,1);printf("Kategori");
    gotoxy(24,1);printf("Merk");
    gotoxy(40,1);printf("Harga");
    gotoxy(56,1);printf("Jumlah Barang");
    gotoxy(0,2);printf("=========================================================================\n");
    for(i=0; i<jumlah; i++){
    gotoxy(0,i+3); printf("%d",transaksi[i].kode);
    gotoxy(10,i+3); printf("%s",transaksi[i].kategori);
    gotoxy(24,i+3); printf("%s",transaksi[i].merek);
    gotoxy(40,i+3); printf("%d",transaksi[i].harga);
    gotoxy(56,i+3); printf("%d",transaksi[i].jumlah);
    }printf("\n\n");}
    printf("Masukkan kode barang : ");
    scanf("%d",&kode);
    for (i = 0; i < jumlah; i++){
        if (transaksi[i].kode == kode){
            printf("Merek Saat ini : %s\n",transaksi[i].merek);
            printf("Masukkan Merek yang baru : ");
            scanf("%s",&type);
            strcpy(transaksi[i].merek, type);
        }
    }
    edit();

} else if (will==3){
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengedit barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}

    //HARGA
    system("cls");
    int warga;
     if(kosong==1){
    system("cls");
    gotoxy(0,0);printf("=========================================================================\n");
    gotoxy(0,1);printf("Kode");
    gotoxy(10,1);printf("Kategori");
    gotoxy(24,1);printf("Merk");
    gotoxy(40,1);printf("Harga");
    gotoxy(56,1);printf("Jumlah Barang");
    gotoxy(0,2);printf("=========================================================================\n");
    for(i=0; i<jumlah; i++){
    gotoxy(0,i+3); printf("%d",transaksi[i].kode);
    gotoxy(10,i+3); printf("%s",transaksi[i].kategori);
    gotoxy(24,i+3); printf("%s",transaksi[i].merek);
    gotoxy(40,i+3); printf("%d",transaksi[i].harga);
    gotoxy(56,i+3); printf("%d",transaksi[i].jumlah);
    }printf("\n\n");}
    printf("Masukkan kode barang : ");
    scanf("%d",&kode);
    for (i = 0; i < jumlah; i++){
        if (transaksi[i].kode == kode){
            printf("Harga Saat ini : %d\n",transaksi[i].harga);
            printf("Masukkan Harga yang baru : ");
            scanf("%d",&warga);
            transaksi[i].harga = warga;
        }
    }
    edit();

} else if (will==4){
    hitung++;
node = (struct sejarah*) malloc(sizeof(struct sejarah));
strcpy(node -> activity, "Admin mengedit barang");
if (head==NULL){
    head = node;
    curr = node;
    tunjuk = node;
} else {
    curr -> lanjut = node;
    curr = node;
    tunjuk = node;
}

    //JUMLAH
    system("cls");
    int pulau;
     if(kosong==1){
    system("cls");
    gotoxy(0,0);printf("=========================================================================\n");
    gotoxy(0,1);printf("Kode");
    gotoxy(10,1);printf("Kategori");
    gotoxy(24,1);printf("Merk");
    gotoxy(40,1);printf("Harga");
    gotoxy(56,1);printf("Jumlah Barang");
    gotoxy(0,2);printf("=========================================================================\n");
    for(i=0; i<jumlah; i++){
    gotoxy(0,i+3); printf("%d",transaksi[i].kode);
    gotoxy(10,i+3); printf("%s",transaksi[i].kategori);
    gotoxy(24,i+3); printf("%s",transaksi[i].merek);
    gotoxy(40,i+3); printf("%d",transaksi[i].harga);
    gotoxy(56,i+3); printf("%d",transaksi[i].jumlah);
    }printf("\n\n");}
    printf("Masukkan kode barang : ");
    scanf("%d",&kode);
    for (i = 0; i < jumlah; i++){
        if (transaksi[i].kode == kode){
            printf("Jumlah Barang Saat ini : %d\n",transaksi[i].jumlah);
            printf("Masukkan Jumlah Barang yang baru : ");
            scanf("%d",&pulau);
            transaksi[i].jumlah = pulau;
        }
    }
    edit();

} else if (will==5){
    system("cls");
    return main();

} else {
    printf("Salah Pilihan !!! MOHON DIULANG");
    getch();
    edit();
}


}

void riwayat(){
int i;
system("cls");

tunjuk = head;
for (i = 0; i < hitung; i++){
        printf("%d.\t%s\n",i+1,tunjuk -> activity);
      tunjuk = tunjuk -> lanjut;

}

printf("\n\nTekan Enter untuk Kembali ke Menu");
    getch();
    system("cls");
    main();
}

COORD koordinat={0,0};
void gotoxy(int x, int y)
{
koordinat.X=x;
koordinat.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),koordinat);
}

void main(){
if (kondisi ==1){
int  pil;
gotoxy(21,5);printf("                     PROGRAM DATA TRANSAKSI TOKO SUKMA      ");

    gotoxy(21,5);printf("||");
    gotoxy(102,5);printf("||");
    gotoxy(21,4);printf("||===============================================================================||");
    gotoxy(21,6);printf("||===============================================================================||");
    gotoxy(21,7);printf("||                                                                               ||");
    gotoxy(21,8);printf("||                                                                               ||");
    gotoxy(21,9);printf("||                                                                               ||");
    gotoxy(21,10);printf("||                                                                               ||");
    gotoxy(21,11);printf("||                                                                               ||");
    gotoxy(21,12);printf("||                                                                               ||");
    gotoxy(21,13);printf("||                                                                               ||");
    gotoxy(21,14);printf("||                                                                               ||");
    gotoxy(21,15);printf("||                                                                               ||");
    gotoxy(21,16);printf("||                                                                               ||");
    gotoxy(21,17);printf("||                                                                               ||");
    gotoxy(21,18);printf("||                                                                               ||");
    gotoxy(21,19);printf("||===============================================================================||");
    gotoxy(21,20);printf("||                                                                               ||");
    gotoxy(21,21);printf("||===============================================================================||");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(30,8);printf("Menu: ");
    gotoxy(30,9);printf("1. Menambah Transaksi Barang");
    gotoxy(30,10);printf("2. Menampilkan Daftar Transaksi");
    gotoxy(30,11);printf("3. Menambahkan Data Transaksi Toko");
    gotoxy(30,12);printf("4. Menghapus Data Transaksi Toko");
    gotoxy(30,13);printf("5. Mengedit Data Transaksi Toko");
    gotoxy(30,14);printf("6. Mencari Data Transaksi Toko");
    gotoxy(30,15);printf("7. Melihat Riwayat Data Transaksi Toko");
    gotoxy(30,16);printf("8. Mengurutkan Data Transaksi Toko");
    gotoxy(30,17);printf("9. Keluar Program ");
    gotoxy(30,20);printf("Masukkan Pilihan : ");
    scanf("%d",&pil);
    if (pil==1){
        input();
    } else if (pil==2){
          tampilkan();
    } else if (pil==3){
        tambahkan();

    } else if (pil==4){
        hapus();

    } else if (pil==5){
        edit();

    } else if (pil==6){
        cari();

    } else if (pil==7){
        riwayat();

    } else if (pil==8){
        urutkan();

    } else if (pil==9){
            system("cls");
         gotoxy(30,9);garis();
        pesan_tutup();
         gotoxy(30,14);garis();
         system("cls");
        return 0;

    } else {
       gotoxy(49,20);printf("Pilihan tidak ada !\n");
        getch();
        system("cls");
        return main();

    }
} else {
    login();
}
}

