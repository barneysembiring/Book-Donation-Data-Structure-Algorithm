#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void CetakBuku (Buku * isi){
    while (isi != NULL){
        	printf("=====Buku=====\n");
            printf("ISBN\t\t: %s\n", isi->ISBN);
	        printf("Judul Buku\t: %s\n", isi->JudulBuku);
	        printf("Jenis Buku\t: %s\n", isi->JenisBuku);
	        printf("Author\t\t: %s\n\n\n", isi->Author);
	        printf("=====Nama Donatur=====\n");
	        printf("NIDN\t\t: %s\n", isi->NIDN);
	        printf("Nama\t\t: %s\n", isi->Nama);
	        printf("Nomor Telepon\t: %s\n", isi->NoTelp);
	        puts (" ");
	        isi = isi->ptrNextBuku;
        }
}

void SearchBook (Buku * isi, char * cari){
    while (isi != NULL){
        if(strcmp(isi->ISBN, cari) == 0){
        	printf("=====Buku=====\n");
            printf("ISBN\t\t: %s\n", isi->ISBN);
	        printf("Judul Buku\t: %s\n", isi->JudulBuku);
	        printf("Jenis Buku\t: %s\n", isi->JenisBuku);
	        printf("Author\t\t: %s\n\n\n", isi->Author);
	        printf("=====Nama Donatur=====\n");
	        printf("NIDN\t\t: %s\n", isi->NIDN);
	        printf("Nama\t\t: %s\n", isi->Nama);
	        printf("Nomor Telepon\t: %s\n", isi->NoTelp);
	        puts (" ");
        }
        isi = isi->ptrNextBuku;
    }
}
void cariBuku (Buku * isi, char * donat){
	while (isi !=NULL){
		if(strcmp(isi->NIDN, donat)==0){
	        printf("=====Nama Donatur=====\n");
	        printf("NIDN\t\t: %s\n", isi->NIDN);
	        printf("Nama\t\t: %s\n", isi->Nama);
	        printf("Nomor Telepon\t: %s\n\n", isi->NoTelp);

        	printf("=====Buku=====\n");
            printf("ISBN\t\t: %s\n", isi->ISBN);
	        printf("Judul Buku\t: %s\n", isi->JudulBuku);
	        printf("Jenis Buku\t: %s\n", isi->JenisBuku);
	        printf("Author\t\t: %s\n\n\n", isi->Author);
		}
		isi = isi->ptrNextBuku;
	}
}

void tambahBook (Buku ** buku ,  char ISBN[30], char JudulBuku[30], char JenisBuku[30], char Author[30], char NIDN[30], char Nama[30], char NoTelp[30]){
	Buku * khusus_tambah = (Buku *)calloc(1,sizeof(Buku));
	strcpy(khusus_tambah->ISBN, ISBN);
	strcpy(khusus_tambah->JudulBuku, JudulBuku);
	strcpy(khusus_tambah->JenisBuku, JenisBuku);
	strcpy(khusus_tambah->Author, Author);
	strcpy(khusus_tambah->NIDN, NIDN);
	strcpy(khusus_tambah->Nama, Nama);
	strcpy(khusus_tambah->NoTelp, NoTelp);
	khusus_tambah->ptrNextBuku = (*buku);
	(*buku) = khusus_tambah;
}

