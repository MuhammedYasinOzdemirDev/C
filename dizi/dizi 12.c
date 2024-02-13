#include<stdio.h>
main()
{
	int i,j,c,satir,sutun,topla;
	printf("satir sayisini giriniz:");
	scanf("%d",&satir);
	printf("sutun sayisini giriniz:");
	scanf("%d",&sutun);
	int m1[satir][sutun],m2[satir][sutun],toplam[i][j],carp[satir][sutun];
	printf("\nm1 matrisini giriniz:\n\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%dx%d'yi giriniz:",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}	printf("\nm2 matrisini giriniz:\n\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%dx%d'yi giriniz:",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}printf("\nm1:\n\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}printf("\nm2:\n\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}printf("\nToplam:\n\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	printf("\nCarpim:\n\n");
		for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			topla=0;
	for(c=0;c<2;c++){
		topla+=m1[i][c]*m2[c][j];
	}
	carp[i][j]=topla;
	printf("%d ",carp[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
