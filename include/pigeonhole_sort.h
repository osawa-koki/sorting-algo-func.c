#include <stdlib.h>

// 鳩ノ巣ソート
void pigeonholeSort(int *array, int size) {
  int min = array[0], max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
    if (array[i] > max) {
      max = array[i];
    }
  }
  int range = max - min + 1;
  int *holes = (int *)malloc(sizeof(int) * range);
  for (int i = 0; i < range; i++) {
    holes[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    holes[array[i] - min]++;
  }
  int index = 0;
  for (int i = 0; i < range; i++) {
    while (holes[i]--) {
      array[index++] = i + min;
    }
  }
  free(holes);
}
