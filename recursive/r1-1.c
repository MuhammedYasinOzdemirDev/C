#include<stdio.h>
#include<stdlib.h>
long f(int a){
if(a<1){
    return 1;
}
else{
    return a*f(a-1);
}
}
int main(){
   
   int i;
   for(i=0;i<30;i++){
       printf("%d\n",f(i));
   }
}