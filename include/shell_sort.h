
// シェルソート
void shellSort(int *array, int size) {
  int i, j, tmp, h;
  for (h = 1; h < size / 9; h = 3 * h + 1)
    ;
  for (; h > 0; h /= 3) {
    for (i = h; i < size; i++) {
      tmp = array[i];
      for (j = i - h; j >= 0 && array[j] > tmp; j -= h) {
        array[j + h] = array[j];
      }
      array[j + h] = tmp;
    }
  }
}
