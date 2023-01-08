
// ストゥージソート
void stoogeSort(int *array, int size) {
  if (size < 2) {
    return;
  }
  if (array[0] > array[size - 1]) {
    int temp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = temp;
  }
  if (size > 2) {
    int t = (int)(size / 3);
    stoogeSort(array, size - t);
    stoogeSort(array + t, size - t);
    stoogeSort(array, size - t);
  }
}
