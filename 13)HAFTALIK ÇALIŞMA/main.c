#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int dersnotu[3][4]={0};
	int i,j,toplam=0,ortalama=0;
	int dersortalamalari[]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&dersnotu[i][j]);
			printf("%d. ogrencinin %d ders notu %d dir\n",i+1,j+1,dersnotu[i][j]);
			toplam=toplam+dersnotu[i][j];
		}
		ortalama=toplam/4;
		dersortalamalari[i]=ortalama;
	}
	for(i=0;i<3;i++)
	{
		printf("%d. ogrencinin 4 dersten almis oldugu notlarin ortalamasi %d dir.\n",i+1,dersortalamalari[i]);
	}
	
	return 0;
}
