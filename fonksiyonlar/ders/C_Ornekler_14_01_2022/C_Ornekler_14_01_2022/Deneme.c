#include <stdio.h>
#include <stdlib.h>
#include "Newheader.h"


int main() {
	int a=2, b=5;
	
	printf("%d \n",sum(a,b));
	printf("%d \n",carpma(a,b));
	printf("%d \n", ustal(a,b));
	printf("%d, %d \n",kareal(a),kareal(b));
	printf("%d \n",sum(kareal(a),kareal(b)));
}
