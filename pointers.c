#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int num = 150;
  int *pNum = NULL;

  pNum = &num;
  printf("Num address is : %p\n",&num);
  printf("Num address is : %p\n",&pNum);
  printf("The value of pNum is : %p\n",pNum);
  printf("The value of what pNum is pointting  : %d\n",*pNum);
  return 0;
}