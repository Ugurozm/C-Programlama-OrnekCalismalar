#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,k,n,satir,sutun;
	
	printf("satir sayisi giriniz\n");
	scanf("%d",&satir);
	
	printf("sutun sayisi giriniz\n");
	scanf("%d",&sutun);
	
	int matris [satir][sutun];
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++)
		{
			
				printf("degeriniz \n [%d]  [%d]\n",i+1,j+1);
				scanf("%d",&matris[i][j]);
		}				
	}	
		
	
	for(k=0;k<satir;k++)
	{
		
		for(n=0;n<sutun;n++)
		{
			
			printf("%d \n",matris[k][n]);	
			
		}
	}	
		
	
	
	
	return 0;
}
