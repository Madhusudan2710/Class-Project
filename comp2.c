#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello World\n");
  printf("Variables of type char occupy %u\n", sizeof(char));
  printf("Variables of type short occupy %u\n", sizeof(short));
  printf("Variables of type float occupy %u\n", sizeof(float));

  int score = 95;
  int target = 90;

  if(score>target){
    printf("Congratulations\n");
  }
  else if(score == target){
    printf("Its a tie\n");
  }
  else{
    printf("All the best\n");
  }
  enum weekday{Monday , Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
  enum weekday today = Friday;
  switch (today){
    case Monday : printf("Today is Monday ");
      break;
    case Tuesday: printf("Today is Tuesday");
      break;
    case Wednesday: printf("Today is Wednesday");
      break;
    case Thursday : printf("Today is Thursday");
      break;
    case Friday: printf("Today is Friday");
      break;
    default : printf ("Invalid input");
      break;
  }
  //syntax
  //if (condition){
    //code
  //}
  return 0;
}
