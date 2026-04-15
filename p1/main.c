#include <stdio.h>
int main(void) {
  int answer = 0, guess = 0, trial = 0;
  scanf("%d", &answer);
  
  do {
    trial += 1;
    scanf("%d", &guess);
    if (guess > answer) {
      printf("%d>?\n", guess);
    }
    else if (guess < answer) {
      printf("%d<?\n", guess);
    }
  } while(guess != answer);
  
  printf("%d==?\n", guess);
  printf("%d\n", trial);
  
return 0;
}
