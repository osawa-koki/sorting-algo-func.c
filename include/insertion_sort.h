
// 挿入ソート
void insertionSort(int *array, int size) {
  int i, j, tmp;
  for (i = 1; i < size; i++) {
    tmp = array[i];
    for (j = i - 1; j >= 0 && array[j] > tmp; j--) {
      array[j + 1] = array[j];
    }
    array[j + 1] = tmp;
  }
}
