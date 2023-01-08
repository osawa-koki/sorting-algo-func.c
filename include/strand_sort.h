
// ストランドソート
void strandSort(int *array, int size) {
  int i, j, temp;
  for (i = 0; i < size; i++) {
    for (j = i; j < size; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
