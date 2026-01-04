#include <stdio.h>
#include <stdlib.h>

// SABÝT DEÐERLER (Programýn her yerinde kullanmak için)
#define KAT_SAYISI 5
#define RAF_SAYISI 10

// GLOBAL DEÐÝÞKENLER
// Depo matrisi: 0=Boþ, Diðer sayýlar=Kutu ID
int depo[KAT_SAYISI][RAF_SAYISI]; 
float gunlukCiro = 0.0;

// FONKSÝYON PROTOTÝPLERÝ (Ýmza Tanýmlarý)
void depoGorsellestir();
void malKabul();
void sevkiyatYap();
void sistemCikis();
void dosyaOku();

int main() {
    int secim;

    // Program baþlarken eski durumu dosyadan yükle
    dosyaOku(); 

    printf("=== AKILLI DEPO YONETIM SISTEMINE HOS GELDINIZ ===\n");

    while(1) { // Sonsuz Döngü
        printf("\n--- MENU ---\n");
        printf("1. Mal Kabul (Urun Ekle)\n");
        printf("2. Sevkiyat Yap (Urun Cikar)\n");
        printf("3. Depo Durumunu Goster\n");
        printf("4. Kaydet ve Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                malKabul();
                break;
            case 2:
                sevkiyatYap();
                break;
            case 3:
                depoGorsellestir();
                break;
            case 4:
                sistemCikis();
                return 0; // Programý sonlandýr
            default:
                printf("Hatali secim! Lutfen tekrar deneyin.\n");
        }
    }
    return 0;
}

// 1. DOSYADAN OKUMA FONKSÝYONU
// Program açýldýðýnda önceki stok durumunu matrise geri yükler.
void dosyaOku() {
    FILE *dosya = fopen("stok_durumu.txt", "r");
    if (dosya == NULL) {
        // Dosya yoksa depo boþ baþlar (Matris zaten 0 baþlatýlýr ama garanti olsun)
        int i, j;
        for(i=0; i<KAT_SAYISI; i++) {
            for(j=0; j<RAF_SAYISI; j++) {
                depo[i][j] = 0;
            }
        }
    } else {
        // Dosya varsa verileri matrise aktar
        int i, j;
        for(i=0; i<KAT_SAYISI; i++) {
            for(j=0; j<RAF_SAYISI; j++) {
                fscanf(dosya, "%d", &depo[i][j]);
            }
        }
        fclose(dosya);
    }
}

// 2. GÖRSELLEÞTÝRME FONKSÝYONU
// Matrisin o anki halini ekrana basar.
void depoGorsellestir() {
    int i, j;
    printf("\n--- DEPO GUNCEL DURUMU ---\n");
    printf("     R0 R1 R2 R3 R4 R5 R6 R7 R8 R9\n"); // Raf numaralarý görseli
    for(i=0; i<KAT_SAYISI; i++) {
        printf("Kat%d ", i+1);
        for(j=0; j<RAF_SAYISI; j++) {
            if(depo[i][j] == 0) {
                printf("[_] "); // Boþ raf
            } else {
                printf("[D] "); // Dolu raf (Ýçinde sayý var)
            }
        }
        printf("\n");
    }
    printf("Not: [_]: Bos, [D]: Dolu\n");
}

// 3. MAL KABUL (EKLEME) FONKSÝYONU
// Matrisi tarar, ilk boþ yere (0 olan yere) ürünü koyar.
void malKabul() {
    int i, j;
    int kutuID;
    int yerBulundu = 0; // Bayrak (Flag) deðiþkeni

    printf("Kutu ID giriniz (Orn: 101): ");
    scanf("%d", &kutuID);

    // Ýç içe döngü ile boþ yer arama
    for(i=0; i<KAT_SAYISI; i++) {
        for(j=0; j<RAF_SAYISI; j++) {
            if(depo[i][j] == 0) { // Boþ yer bulundu
                depo[i][j] = kutuID;
                printf("Basarili: Urun Kat %d, Raf %d konumuna yerleþtirildi.\n", i+1, j+1);
                yerBulundu = 1;
                break; // Ýç döngüden çýk
            }
        }
        if(yerBulundu == 1) break; // Dýþ döngüden çýk
    }

    if(yerBulundu == 0) {
        printf("UYARI: Depo tamamen dolu! Mal kabul yapilamiyor.\n");
    }
}

// 4. SEVKÝYAT (SÝLME) FONKSÝYONU
// Koordinat alýr, ürünü siler (0 yapar) ve ciroyu hesaplar.
void sevkiyatYap() {
    int kat, raf;
    float ucret = 0.0;

    printf("Urunun bulundugu Kat (1-5): ");
    scanf("%d", &kat);
    printf("Urunun bulundugu Raf (0-9): ");
    scanf("%d", &raf);

    // Dizi indeksi 0'dan baþlar, kullanýcý 1 girerse biz 0. indexe bakmalýyýz
    int satirIndex = kat - 1;
    int sutunIndex = raf;

    // Sýnýr Kontrolü (Hata önleme)
    if(satirIndex < 0 || satirIndex >= KAT_SAYISI || sutunIndex < 0 || sutunIndex >= RAF_SAYISI) {
        printf("HATA: Gecersiz koordinat girdiniz!\n");
        return;
    }

    // Doluluk Kontrolü
    if(depo[satirIndex][sutunIndex] == 0) {
        printf("HATA: Bu raf zaten bos!\n");
    } else {
        // Sevkiyat Ýþlemi
        printf("Urun ID: %d sevk ediliyor...\n", depo[satirIndex][sutunIndex]);
        depo[satirIndex][sutunIndex] = 0; // Matris hücresini sýfýrla

        // Ücret Hesabý (Senaryo gereði basit bir formül)
        // Sabit ücret 50 TL + Kat baþýna 10 TL ek hizmet bedeli
        ucret = 50.0 + (kat * 10.0);
        gunlukCiro += ucret;
        
        printf("Islem Tamamlandi. Hizmet Bedeli: %.2f TL\n", ucret);
    }
}

// 5. ÇIKIÞ VE KAYDETME FONKSÝYONU
// Matrisi ve ciroyu dosyalara yazar.
void sistemCikis() {
    int i, j;
    
    // 1. Stok durumunu kaydet (Write modu - üzerine yazar)
    FILE *fStok = fopen("stok_durumu.txt", "w");
    if(fStok != NULL) {
        for(i=0; i<KAT_SAYISI; i++) {
            for(j=0; j<RAF_SAYISI; j++) {
                fprintf(fStok, "%d ", depo[i][j]);
            }
            fprintf(fStok, "\n"); // Her katý yeni satýra yaz
        }
        fclose(fStok);
        printf("Stok durumu 'stok_durumu.txt' dosyasina kaydedildi.\n");
    }

    // 2. Ciroyu kaydet (Append modu - ekleme yapar)
    FILE *fCiro = fopen("gunluk_ciro.txt", "a");
    if(fCiro != NULL) {
        fprintf(fCiro, "Cikis Yapilan Ciro: %.2f TL\n", gunlukCiro);
        fclose(fCiro);
        printf("Gunluk ciro 'gunluk_ciro.txt' dosyasina eklendi.\n");
    }

    printf("Programdan cikiliyor. Iyi gunler!\n");
}
