#include<stdio.h>
main()
{
	int menuu=3,yemek[15],i,j;
	char menu[15][15],ymk[15][15][15];
		for(i=0;i<menuu;i++){
	    printf("%d. menunu ismini giriniz:",i+1);		
		scanf("%s",menu[i]);
		printf("%s menusunde kac cesit olacaksa giriniz:",menu[i]),
		scanf("%d",&yemek[i]);
		printf("\n");
		for(j=0;j<yemek[i];j++){
			printf("%s munusunun %d. cesitini giriniz:",menu[i],j+1);
			scanf("%s",ymk[i][j]);
		}
		printf("\n");
	}printf("\n**************MENU***************\n\n");
	for(i=0;i<menuu;i++){
		printf("%s menu:\n\n",menu[i]);
		for(j=0;j<yemek[i];j++){
			printf("***\t\t\t%d .yemek :%s                      \t\t\t***\n",j+1,ymk[i][j]);
		}
		printf("\n");
	}
}
