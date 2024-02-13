#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
	const int size=20;
	int i,temp,aranan,j,orta,bas=0,bit=size-1;
	int dizi[size];
	srand(time(NULL));
	for(i=0;i<size;i++){
		dizi[i]=rand()%10;
    printf("%d  ",dizi[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(dizi[i]>dizi[j]){
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
		
	}
    printf("\n\n");
	for(i=0;i<size;i++){
		printf("%d  ",dizi[i]);
	}
	scanf("%d",&aranan);
while(bas<=bit){
		orta=(bas+bit)/2;
	   if(dizi[orta]>aranan){
	   	bit=orta-1;
	   }
	   else if(dizi[orta]<aranan){
	   	bas=orta+1;
	   }
	   else{
	   	printf("%d. aranan sayisi %d .elemaninda",aranan,orta+1);break;
	   }
	}
	
    
    return 0;
    getchar();
}