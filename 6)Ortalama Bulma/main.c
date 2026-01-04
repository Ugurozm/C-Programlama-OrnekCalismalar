#include <stdio.h>
#include <stdlib.h>

/*kullanýcýdan istedði kadar sayý al
bu sayýlar pozitif mi kontrol ettir
kaç sayý girildiðini ve girilen sayýlarýn ortalamasýný ekrana yazdýr
 */

int main(int argc, char *argv[]) {
  int i;
  float ogrencinot,toplam;
  i=1;
  ogrencinot=0;
  toplam=0;
  do{ 
  		printf("%. ogrencinin notunu giriniz\n",i);
  		scanf("%f",&ogrencinot);
  		if(ogrencinot==0) break;
  		if(ogrencinot<0){
  			printf("yanlis sayi girdiniz");
  			continue;
  		}
  		else toplam+=ogrencinot;	
		 i++;   	  	
    }while(ogrencinot!=0);
printf("%d tane not girdiniz\n toplamý %f",i-1,toplam);

	return 0;
}
