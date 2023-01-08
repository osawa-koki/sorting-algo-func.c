
void bubbleSort(int array[], int size) {
  // 配列の要素数分繰り返す
  for (int i = 0; i < size; i++) {
    // 配列の最後から i 番目の要素まで繰り返す
    for (int j = size - 1; j > i; j--) {
      // 隣り合う要素を比較し、大小が逆なら交換する
      if (array[j] < array[j - 1]) {
        int temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
      }
    }
  }
}
