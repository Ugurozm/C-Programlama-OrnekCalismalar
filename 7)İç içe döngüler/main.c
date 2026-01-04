#include <stdio.h>
#include <stdlib.h>

/*Ýç içe 5 kez This is great idea yazýsý yazdýralým 3 kez bu döngü tekrar etsin ----------- ile birbirinden yayrýlsýn*/

int main(int argc, char *argv[]) {
	
	int i,a;
	for(a=0;a<3;a++){
	
	for(i=0;i<5;i++){
		printf("This is great idea\n");
	}
	printf("---------------\n");
}
	
	return 0;
}
