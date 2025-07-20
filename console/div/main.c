#include <stdio.h>
#include <math.h>

int div(int, int);

int main (int argc, char *argv[]) {
  int ret;
  ret = div(15, 4);
  printf("%d\n", ret);

  return 0;
}

int div (int div, int divisor) {
  int ret;
  int left = 0;
  int right = div;
  int mid;

  while (left <= right) {
    mid = (left + right) >> 1;
    if (mid * divisor <= div) {
      ret = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return ret;

}
