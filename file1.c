#include <stdio.h>

#define FILENAME "Test.txt"

int main(void) {
  printf("Hello World\n");

  FILE *fp = NULL;
  char ch = ' ';
  int linesCount = 0;
  
  fp = fopen(FILENAME, "r");

  if(fp == NULL){
    printf("File does not exist\n");
    return -1;
  }

  while((ch = fgetc(fp))!= EOF){
    if(ch == '\n'){
      ++linesCount;
    }
  }

  fclose(fp);
  fp = NULL;

  printf("Total numer of lines are : %d\n", ++linesCount);
  
  return 0;
}