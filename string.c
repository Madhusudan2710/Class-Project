#include <stdio.h>

int main(void) {
  char str1[] = "To be or not to be ";
  char str2[] = "That is the question";
  unsigned int count = 0;
  while (str1[count]!= '\0'){
    count++;
  }
  printf("The length of the string \%s is %d\n",str1,count);
  unsigned int count2 = 0;
    while (str2[count2]!= '\0'){
        count2++;
    }
    printf("The length of the string \"%s\" is %d character \n",str2,count2);
  return 0;}