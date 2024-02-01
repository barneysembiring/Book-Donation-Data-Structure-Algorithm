#ifndef BOOK_HEADER
#define BOOK_HEADER

typedef struct SBuku Buku;

struct SBuku{
    char ISBN[30];
    char JudulBuku[30];
    char JenisBuku[30];
    char Author[30];
    char NIDN[30];
    char Nama[30];
    char NoTelp[30];
    Buku * ptrNextBuku;
};

void cariBuku (Buku * isi, char * donat);
void CetakBuku (Buku * isi);
void SearchBook (Buku * isi, char * cari);
void tambahBook (Buku ** buku ,  char ISBN[30], char JudulBuku[30], char JenisBuku[30], char Author[30], char NIDN[30], char Nama[30], char NoTelp[30]);


#endif
