	#include <stdio.h>
	#include <stdlib.h>
	
	/*
	GALERÝ PROGRAMINA HOÞGELDÝNÝZ YAZISI ÇIKACAKTIR
	 Galericinin 4 tane menü seçeneði bulunmaktadýr.
	1-ARABA KAYDET
	2-ARABA SAT
	3-RAPOR AL 
	4-PROGRAMDAN ÇIKIÞ
	araba kaydederke arabanýn markasý,plakasý,eski sahibinin adý,kilometresi,aracýn yýlý,aracýn alýþ fiyatý ekrana girilmektedir.
	araba satarken plakasý,kilometresi,aracýn yýlý,satýþ fiyatý ekrana girilmektedir.
	rapora al kýsmýnda kaç tane araç giriþi yapýldýðý ve kaç araç satýldýðý bilgisi rapor olarak verilmektedir.
	alýþfiyatý alisfiyat dizisinde satýþ fiyatlarý satýþfiyat dizisinde yer almaktadýr.
	 */
	
	int main() {
		
		int secim,km,giris=0,satis=0,yil,toplam;
		char marka[10],eskisahibi,plaka[9];
		float alisfiyat,satisfiyat;
		printf("--------GALERI PROGRAMINA GOSGELDINIZ--------\n");
		
		do
		{
			printf(" 1-ARABA KAYDET\n 2-ARABA SAT\n 3-RAPOR AL\n 4-CIKIS YAP\n");
			scanf("%d",&secim);
			
		if(secim==1)
		{
			printf("araba bilgilerini giriniz\n");
			printf("arabanin plakasi\n");
			scanf("%s",&plaka);
			printf("arabanin markasi\n");
			scanf("%s",&marka);
			printf("arabanin eski sahbibi\n");
			scanf("%s",&eskisahibi);
			printf("arabanin kilometresi\n");
			scanf("%d",&km);
			printf("arabanin yili\n");
			scanf("%d",&yil);
			printf("arabanin alis fiyati\n");
			scanf("%f",&alisfiyat);
			giris+=1;
			toplam+=1;
		}
		
		else if(secim==2)
		{
			printf("arabanin plakasi\n");
			scanf("%s",&plaka);
			printf("arabanin kilometresi\n");
			scanf("%d",&km);
			printf("arabanin yili\n");
			scanf("%d",&yil);
			printf("arabanin alis fiyati\n");
			scanf("%f",&satisfiyat);
			satis+=1;
			toplam-=1;
		}	
		
		else if(secim==3)
		{
			printf("\n---RAPOR EKRANI---\n");
			printf("Giris yapilan arac sayisi %d satis yapila arac sayisi %d",giris,satis);
		}
		else printf("Hatali tuslama yaptiniz");
			
		}while(secim!=4);
		
		
		
		
		
		
		return 0;
	}
