#include <stdio.h>
#include <stdlib.h>
int ebob(int a, int b)
{
  while (a!=b)
  {
     if(a>b){
         return ebob(a-b,b);
     }
     else{
         return ebob(b-a,a);
     }
  }
  return a;
  
}
int main(){
printf("%d",ebob(84,7));
}