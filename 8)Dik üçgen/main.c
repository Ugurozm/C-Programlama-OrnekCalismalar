#include <stdio.h>
#include <stdlib.h>

// Ýç içe döngüleri kullanarak dik üçgenlerý * sembolü ile oluþturacaðýz

int main(int argc, char *argv[]) {
 int sayi,i,a;
printf("sayi giriniz\n");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++){
	for(a=1;a<=i;a++){
		printf("*");
	}
	printf("\n");
}

	
	return 0;
}
