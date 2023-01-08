#include <stdlib.h>

// パンケーキソート
void pancakeSort(int *array, int size) {
  int i, j, k, max, *temp;
  for (i = size - 1; i > 0; i--) {
    max = 0;
    for (j = 1; j <= i; j++) {
      if (array[j] > array[max]) {
        max = j;
      }
    }
    if (max == i) {
      continue;
    }
    if (max != 0) {
      temp = (int *)malloc(sizeof(int) * (max + 1));
      for (j = 0; j <= max; j++) {
        temp[j] = array[max - j];
      }
      for (j = 0; j <= max; j++) {
        array[j] = temp[j];
      }
      free(temp);
    }
    temp = (int *)malloc(sizeof(int) * (i + 1));
    for (j = 0; j <= i; j++) {
      temp[j] = array[i - j];
    }
    for (j = 0; j <= i; j++) {
      array[j] = temp[j];
    }
    free(temp);
  }
}
