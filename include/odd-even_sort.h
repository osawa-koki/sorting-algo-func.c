
// 奇偶転置ソート
void oddevenSort(int *array, int size) {
  int i, j, temp;
  for (i = 0; i < size; i++) {
    for (j = i % 2; j < size - 1; j += 2) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
