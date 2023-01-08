
// カウントソート
void countingSort(int *array, int size) {
  int i, j, max = 0;
  for (i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  int count[max + 1];
  for (i = 0; i <= max; i++) {
    count[i] = 0;
  }
  for (i = 0; i < size; i++) {
    count[array[i]]++;
  }
  for (i = 0, j = 0; i <= max; i++) {
    for (; count[i] > 0; count[i]--) {
      array[j++] = i;
    }
  }
}
