#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void rastgele(char f[])
{
	int i ;
	char sesliharfler[5],sessizharfler[21] ;
	srand(time(0)) ;
	strcpy(sesliharfler,"aeiou") ;
	strcpy(sessizharfler,"bcdfghjklmnpqrstvwxyz") ;
	
	for(i=0;i<5;i++)
	{
		if(i%2==1)
		{
			f[i]=sesliharfler[rand()%5] ;
		}
		if(i%2==0)
		{
			f[i]=sessizharfler[rand()%21] ;
		}
		printf("%c",f[i]) ;
	}
}

main(){
	char kelime[50];
	rastgele(kelime);
	return 0;
}
