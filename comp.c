#include<stdio.h>
int main(void ){
  int score;
  int target = 90;
  printf("Enter your score (90  - 100) :");
  scanf("%d",&score);
  if (score > target){
    printf("congratulations ");
  }
  else if ( score == target){
    printf("its a tie");
  }
  else{
    printf("All the best ");
  }

  return 0;
}