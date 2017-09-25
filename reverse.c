#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int array1[10];
  int x;
  for (x = 0; x < 9; x++) {
    array1[x] = rand();
  }
  array1[9] = 0;
  printf("The original array:\n");
  for (x = 0; x < 10; x++) {
    printf("arr[%d]: %d\n", x, array1[x]);
  }
  int array2[10];
  int *ip1 = &array1[9];
  int *ip2 = &array2[0];
  for (x = 0; x < 10; x++) {
    *ip2 = *ip1;
    ip1--;
    ip2++;
  }
  printf("The second array:\n");
  for (x = 0; x < 10; x++) {
    printf("arr[%d]: %d\n", x, array2[x]);
  }
  return 0;
}
