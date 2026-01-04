#include <stdio.h>
#include <stdlib.h>
/*
kaç kitap alýnacaðý kullanýcýdan girdi alýnsýn 
10 kitaptan fazlaysa %5 indirim
20 kitaptan fazlaysa %10 indirim
30 kitaptan fazlaysa %15 indirim 
ödenecek ücreti yazdýr
*/

// önce fiyat toplanýp sonra indirim uygulanmasý daha mantýklý:)
int main() {
int kitapsayi,toplam=0,a,i,k,fiyat,toplam2=0,toplam4=0,yenifiyat,toplam3;
printf("Satin almak istedignin kitap adetini giriniz\n");
scanf("%d",&kitapsayi);
if(kitapsayi<10){
	for(a=0;a<kitapsayi;a++){
		printf("urun fiyati giriniz\n");
		scanf("%d",&fiyat);
		toplam=toplam+fiyat;
	}
printf("odenecek tutar  %d",toplam);
	
	
}
else if(kitapsayi>=10 && kitapsayi<20){
	for(i=0;i<kitapsayi;i++){
		printf("Urun fiyatý girinizn\n");
		scanf("%d",&fiyat);
		yenifiyat=fiyat*0.90;
		toplam2=toplam2+yenifiyat;
	}
printf("odenecektutar %d",toplam2);
}	

else if(kitapsayi>=20 && kitapsayi<30){
	for(k=0;k<kitapsayi;k++){
		printf("Urun fiyatý giriniz\n");
		scanf("%d",&fiyat);
		yenifiyat=fiyat*0.90;
		toplam3=toplam3+yenifiyat;
	}
	printf("odenecektutar %d",toplam3);
}
	else if (kitapsayi>=30){
	for(i=0;i<kitapsayi;i++){
		printf("Urun fiyati giriniz\n");
		scanf("%d",&fiyat);
		yenifiyat=fiyat*0.85;
		toplam4=toplam4+yenifiyat;
	}
	printf("odenecektutar %d",toplam4);
}
	
	
	return 0;
}
