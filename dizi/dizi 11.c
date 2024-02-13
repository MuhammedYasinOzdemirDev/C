#include<stdio.h>
main(){
	int satir,sutun,i,j,c,topla;
	printf("satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("sutun sayisini giriniz:");
    scanf("%d",&sutun);
	int m1[satir][sutun],m2[satir][sutun],toplam[satir][sutun],carp[satir][sutun];
	printf("\nm1 matrisini giriniz\n");
	for(i=0;i<satir;i++){
	
		for(j=0;j<sutun;j++){
				printf("%dx%d sayisini giriniz:",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}printf("\n");}
	printf("\n m2 matrisi giriniz:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%dx%d sayisini giriniz:",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	} printf("\nM1:\n");
     for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}printf("\nM2:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	} printf("\nTOPLAM:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		toplam[i][j]=m1[i][j]+m2[i][j];
		printf("%d ",toplam[i][j]);
		}
		printf("\n");
	}printf("\nCARPIM:\n");
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
