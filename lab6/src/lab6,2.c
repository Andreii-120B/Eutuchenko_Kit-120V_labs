#include <stdio.h>
#define LEN 120

int main()
{

  int mass[LEN] = {};
  int chet = 0;
  for (int i = 2; chet < LEN; i++) {
    for (int j = 2; j < i; j++) {
      if (i % j == 0) { break; }
      else {
        if (i == (j + 1)) {
          mass[chet] = i;
          printf ("%d  ", mass[chet]);
          chet++;
        }
        else { continue; }
      }


    }
  }
}
