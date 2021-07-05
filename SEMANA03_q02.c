#include <stdio.h>

int main(void) {
  int a,b,c;

  scanf("%i %i %i",&a,&b,&c);

  if(a > b+c){
    printf("Candidato A");
  }
  else if(b > a+c){
    printf("Candidato B");
  }
  else if(c > a+b){
    printf("Candidato C");
  }
  else{
    printf("SEGUNDO TURNO");
  }
  return 0;
}
