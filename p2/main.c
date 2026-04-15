#include <stdio.h>
int main(void) {
  int N = 0, count1 = 0, count2 = 0, ch_count = 0, num_count = 0;
  char a = 0;
  scanf("%d", &N);
  
  for (int i = 0; i <= N; i++) {
    scanf("%c", &a);
    
    if (a >= 'a' && a <= 'z') {
        count1 += 1;
    }
    else if (count1 > ch_count) {
        ch_count = count1;
        count1 = 0;
    }
    else {
        count1 = 0;
    }
    
    if (a >= '0' && a <= '9') {
        count2 += 1;
    }
    else if (count2 > num_count) {
        num_count = count2;
        count2 = 0;
    }
    else {
        count2 = 0;
    }
  }
  
  printf("%d\n", ch_count);
  printf("%d", num_count);
  
return 0;
}
