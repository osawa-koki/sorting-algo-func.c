
// クイックソート
void quickSort(int *array, int left, int right) {
  int i, j, pivot, tmp;

  if (left < right) {
    i = left;
    j = right + 1;
    pivot = array[left];

    do {
      do i++; while (array[i] < pivot);
      do j--; while (array[j] > pivot);
      if (i < j) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    } while (i < j);

    tmp = array[left];
    array[left] = array[j];
    array[j] = tmp;

    quickSort(array, left, j - 1);
    quickSort(array, j + 1, right);
  }
}
