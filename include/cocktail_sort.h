
// カクテルソート
void cocktailSort(int *array, int size) {
  int i, j, temp;
  for (i = 0; i < size / 2; i++) {
    for (j = i; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
    for (j = size - 2 - i; j > i; j--) {
      if (array[j] < array[j - 1]) {
        temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
      }
    }
  }
}
