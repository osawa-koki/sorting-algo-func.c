
// ヒープソート
void heapSort(int *array, int size) {
  int i, j, k, v;
  for (i = 1; i < size; i++) {
    v = array[i];
    j = i;
    k = (j - 1) / 2;
    while (j > 0 && array[k] < v) {
      array[j] = array[k];
      j = k;
      k = (j - 1) / 2;
    }
    array[j] = v;
  }
  for (i = size - 1; i >= 0; i--) {
    v = array[i];
    array[i] = array[0];
    j = 0;
    k = 1;
    while (k < i) {
      if (k + 1 < i && array[k] < array[k + 1]) {
        k++;
      }
      if (array[k] <= v) {
        break;
      }
      array[j] = array[k];
      j = k;
      k = j * 2 + 1;
    }
    array[j] = v;
  }
}
