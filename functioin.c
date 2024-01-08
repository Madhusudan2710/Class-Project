#include <stdio.h>
int add();
int main(){
  printf("hello \n");
  printf("The sum = %d ",add());
}
  
int add(){
  int a = 5, b = 6;
  int result = 0;

  result = a + b;
  return result;
}