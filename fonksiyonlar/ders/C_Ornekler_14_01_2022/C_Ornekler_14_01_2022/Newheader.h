//#ifndef Newheader
/*
int sum(int,int);
int ustal(int, int);
int kareal(int);
#endif
*/
#define Newheader

int sum(int number1,int number2){
	int sum;
	sum= number1+number2;
	return sum;
}

int carpma(int number1,int number2){
	int carpim;
	carpim= number1*number2;
	return carpim;
}

int ustal(int number1, int number2){
	int sonuc=1;
	int i=1;
	for(i =1;i<=number2;i++){
		sonuc=sonuc*number1;
	}
	return sonuc;		
}

int kareal(int number){
	int	sonuc=1;
	sonuc=number*number;	
	
}
