
// 選択ソート
void selectionSort(int *array, int size) {
  int i, j, min, tmp;
  for (i = 0; i < size - 1; i++) {
    min = i;
    for (j = i + 1; j < size; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }
    tmp = array[i];
    array[i] = array[min];
    array[min] = tmp;
  }
}
