#include <stdio.h>

int main(void) {
  int num,cem,cinquenta,vinte,dez,cinco,dois;

  scanf("%i",&num);

    cem=num/100;
    num=num%100;
    cinquenta=num/50;
    num=num%50;
    vinte=num/20;
    num=num%20;
    dez=num/10;
    num=num%10;
    cinco=num/5;
    num=num%5;
    dois=num/2;
    num=num%2;
    

  printf("%i notas de R$ 100\n%i notas de R$ 50\n%i notas de R$ 20\n%i notas de R$10\n%i notas de R$ 5\n%i notas de R$ 2\n%i notas de R$ 1",cem,cinquenta,vinte,dez,cinco,dois,num);

  
  return 0;
}
