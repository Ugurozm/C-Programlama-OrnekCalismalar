#include <stdio.h>
#include <stdlib.h>

int main() {
	float ucret; 
	int gorusme, ekdk;
	
	printf("Kac dakika gorusme gerceklestirdiniginizi giriniz: ");
	scanf("%d", &gorusme);
	
	if(gorusme > 4){
		ekdk = gorusme - 4;
		ucret = 0.30 + (ekdk * 0.07);
		printf("Toplam odemeniz gereken miktar: %.2f TL", ucret);
	}
	else {
		printf("Odemeniz gereken tutar: 0.30 TL");
	} 
	
	return 0;
}
