#include <stdio.h>

const int CITY = 2;
const int WEEK = 7;

int main() {
  printf('hello world');

  int temperature[CITY][WEEK];

  //Store the values
  for (int i = 0; i < CITY; i++){
        for (int j = 0; j< WEEK; j++){
          printf("Enter temperature of City %d, Day %d : ", i+1, j+1);
          scanf("%d", &temperature[i][j]);
         
        }
  }
  
  printf("\n Displaying values :\n");

  for (int i = 0; i<CITY; i++){
    for (int j = 0; j<WEEK; j++){
        printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
    }
  }
  
  
  return 0;
}