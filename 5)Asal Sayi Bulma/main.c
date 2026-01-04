#include <stdio.h>
#include <stdlib.h>
/*sayý girdisi al
Girilen sayý pozitif mi kontrol et
sayýnýn yarýsýný bul ve yarýsýna kadar olan tüm sayýlara tek tek böl mod al
mod 0a eþit olan varsa sayý asal deðildir 
mod hiçbirþeye eþit olmazsa sayý asal sayýdýr yazdýr*/

int main(int argc, char *argv[]) {
 int sayi,i;
 sayi=0;
 i=2;
 
 printf("pozitif bir sayi giriniz\n");
 scanf("%d",&sayi);
 
   if(sayi<0){
    printf("Gecersiz sayi girdiniz");
	 return 0;  }	
 //while içinde sayýlar teker teker artarak if bloðunu kontro etmeli
while(i<sayi/2){
	if(sayi%i==0){
		printf("%d sayisi %d sayisina bolundugunden asal sayi degildir",sayi,i);
		return 0;
	}	
	i++;
} 
	printf("%d asay sayidir",sayi);	
return 0;
}
