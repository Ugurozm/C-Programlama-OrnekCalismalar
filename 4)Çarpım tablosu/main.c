#include <stdio.h>
#include <stdlib.h>

//girilen sayýnýn ç10a kadar olan çarpanlarýný yazdýran program

int main(int argc, char *argv[]) {
  int i,sayi;
  sayi=0;
  i=1;
  
  printf("1 ile 10 arasinda bir sayi yaziniz");
  scanf("%d",&sayi);
  
  if(sayi<1 || sayi>10){
  	printf("Yanlis tuslama yaptiniz\n");
  	return 0;
  }
  
  
  	while(i<=10){
  		printf("%d x %d = %d\n",sayi,i,sayi*i);
  		i++;
	  }
	
	return 0;
}
