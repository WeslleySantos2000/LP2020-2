#include <stdio.h>

int main(void) {
  int num1,num2;

  scanf("%i %i",&num1,&num2);

  if(num2 > num1){
    printf("%i %i %i %i %i %i\n",num1-1,num1,num1+1,num2-1,num2,num2+1);
  }
  else{  printf("%i %i %i %i %i %i",num2-1,num2,num2+1,num1-1,num1,num1+1);
  }
  return 0;
}
