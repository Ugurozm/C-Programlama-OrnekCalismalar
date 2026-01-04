#include <stdio.h>
#include <stdlib.h>



int main() 
{
	/*FILE*dosya;char kelime[30];
	strcpy(kelime,"Merhaba dunya");
	dosya=fopen("testDosyasi2.txt","a");	
	int i=0,y=0;
	for(y=0;y<10;y++)
	{
		for(i=0;i<strlen(kelime);i++)
		{
			putc(kelime[i],dosya);
		}
		putc("\n",dosya);
	}*/
	
	FILE*dosya;
	dosya=fopen("textDosyasi2","r");
	int c;
	do
	{
		c=getc(dosya);
		putchar(c);
		
	}while(c!=EOF);
	
	fclose(dosya);
	
	
	
	
	
	return 0;
}
