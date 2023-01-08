
// ノームソート
void gnomeSort(int *array, int size) {
  int i = 1, j = 2, tmp;
  while (i < size) {
    if (array[i - 1] <= array[i]) {
      i = j;
      j++;
    } else {
      tmp = array[i];
      array[i] = array[i - 1];
      array[i - 1] = tmp;
      i--;
      if (i == 0) {
        i = j;
        j++;
      }
    }
  }
}
