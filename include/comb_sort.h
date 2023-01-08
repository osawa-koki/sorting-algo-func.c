#include <stdbool.h>

// コムソート
void combSort(int *array, int size) {
  int gap = size;
  bool swapped = true;
  while (gap > 1 || swapped) {
    if (gap > 1) {
      gap = (int)(gap / 1.247330950103979);
    }
    swapped = false;
    for (int i = 0; i + gap < size; i++) {
      if (array[i] > array[i + gap]) {
        int temp = array[i];
        array[i] = array[i + gap];
        array[i + gap] = temp;
        swapped = true;
      }
    }
  }
}
