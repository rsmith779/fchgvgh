#include <stdio.h>

void red() {

  printf("\033[0;31m");

}

void green() {

  printf("\033[0;32m");

}

int main() {

/*
  for(int i = 0; i <= 10; i++){

    printf("%d\n", i);
  }
*/
  int i;
  printf("Enter Number: ");
  scanf("%19d", i);
  if (i < 2) {
    green();
    printf("Correct!!");

  }
  
  else {
    red();
    printf("Wrong!!!!!!!!!!!!!!!");

  }
  return 0;
}
