#include <stdio.h>
#include <stdlib.h>

/*
3öðrencinin sýnav notu klavye ile girdi alýnsýn(for döngüsü kullanýlacak ve notlar dizilerde saklanacak)
1.öðrencinin1 2.öðrencinin2 3. öðrencinin3 notu ekranda yazdýrýlsýn
Her sýnav için aðýrlýklý not ortalamasý bulunup ekrana yazdýrýlsýn
 */

int main() {
	
	int i,j,sonuc;
	int matris[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d. ogrencinin %d.notunu giriniz\n",i+1,j+1);
		scanf("%d",&matris[i][j]);
	    }
	}
	
	sonuc=matris[0][0]+matris[1][1]+matris[2][2];
	printf("ogrencilerin ilk notlari toplami:%d\n",sonuc);
	
	for(i=0;i<3;i++)
	{
		printf("%d. sinavin ortlamasi %d dir\n",i+1,(matris[0][i]+matris[1][i]+matris[2][i])/3);
	}
	
	return 0;
}
