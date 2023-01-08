
// サイクルソート
void cycleSort(int *array, int size){
  int writes = 0;
  for (int cycle_start = 0; cycle_start <= size - 2; cycle_start++) {
    int item = array[cycle_start];
    int pos = cycle_start;
    for (int i = cycle_start + 1; i < size; i++) {
      if (array[i] < item) {
        pos++;
      }
    }
    if (pos == cycle_start) {
      continue;
    }
    while (item == array[pos]) {
      pos += 1;
    }
    if (pos != cycle_start) {
      int temp = item;
      item = array[pos];
      array[pos] = temp;
      writes++;
    }
    while (pos != cycle_start) {
      pos = cycle_start;
      for (int i = cycle_start + 1; i < size; i++) {
        if (array[i] < item) {
          pos += 1;
        }
      }
      while (item == array[pos]) {
        pos += 1;
      }
      if (item != array[pos]) {
        int temp = item;
        item = array[pos];
        array[pos] = temp;
        writes++;
      }
    }
  }
}
