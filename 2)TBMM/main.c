#include <stdio.h>
#include <stdlib.h>
/*
3 farklý partiden kaç üye olduðunu girdi al
katýlým saðlayan üye oraný %70 ve üstüyse oturum baþlatýlabilir
katýlým daha az ise gerekli katýlým saðlanamadý de ve kaç kiþi daha gerektiðini yazdýr
(mevcut 600 milletvekili)
*/

int main() {
	int akp,mhp,chp,katilimci,toplamvekil,gereklivekil;
	printf("akp den katilim saglayan milletvekili sayisi giriniz \n");
	scanf("%d",&akp);
	printf("mhp den katilim saglayan milletvekili sayisi giriniz \n");
	scanf("%d",&mhp);
	printf("chp den katilim saglayan milletvekili sayisi giriniz \n");
	scanf("%d",&chp);
	toplamvekil=600;
	katilimci=akp+mhp+chp;
	gereklivekil=420-katilimci;	
	if(katilimci>=420){
		printf("Oturum basatilabilir %d katilimci mevcut",katilimci);		
	}
	else if (katilimci<420)  printf("Gerekli katilim saglanamadi %d kisi eksik",gereklivekil);
	
	
	
	
	
	
	
	return 0;
}
