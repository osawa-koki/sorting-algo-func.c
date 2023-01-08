#include <stdlib.h>

// バケットソート
void bucketSort(int *array, int size) {
  int i, j, k, max, min, *bucket;
  max = min = array[0];
  for (i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }
  bucket = (int *)malloc(sizeof(int) * (max - min + 1));
  for (i = 0; i < max - min + 1; i++) {
    bucket[i] = 0;
  }
  for (i = 0; i < size; i++) {
    bucket[array[i] - min]++;
  }
  for (i = min, j = 0; i <= max; i++) {
    for (k = 0; k < bucket[i - min]; k++) {
      array[j++] = i;
    }
  }
  free(bucket);
}
