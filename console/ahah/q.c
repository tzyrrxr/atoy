#include <stdio.h>
#include <stdlib.h>
#include "q.h"

void console_game () {
  int n;
  int ans = 8;
  int status;

  system("clear");
  do {
    printf("Input your number (0-9): ");
    scanf ("%d", &n);
    while(getchar() != '\n');
    
    if (n != ans) {
      printf("Wrong. Try again.\n");
    } else {
      printf("Yes, you are right.\n");
    }

  } while (n != ans);

  printf ("bye\n");

  return;

}
