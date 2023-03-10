#include <stdio.h>
#include <string.h>
#include "../include/bubble_sort.h"
#include "../include/selection_sort.h"
#include "../include/insertion_sort.h"
#include "../include/merge_sort.h"
#include "../include/quick_sort.h"
#include "../include/heap_sort.h"
#include "../include/counting_sort.h"
#include "../include/bucket_sort.h"
#include "../include/shell_sort.h"
#include "../include/comb_sort.h"
#include "../include/cycle_sort.h"
#include "../include/pancake_sort.h"
#include "../include/gnome_sort.h"
#include "../include/stooge_sort.h"
#include "../include/pigeonhole_sort.h"
#include "../include/odd-even_sort.h"
#include "../include/cocktail_sort.h"
#include "../include/sleep_sort.h"
#include "../include/strand_sort.h"

int main() {
  // 配列を宣言する
  int array[] = {5, 2, 4, 1, 3, 6, 8, 7, 9, 0, 2, 4, 1, 3, 6, 8, 7, 9, 0, 5};
  int size = sizeof(array) / sizeof(array[0]);

  // 配列を表示する
  printf("Unsorted Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Bubble Sort *****\n");

  // 配列のコピー
  int bubbleSort_array[size];
  memcpy(bubbleSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  bubbleSort(bubbleSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", bubbleSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Selection Sort *****\n");

  // 配列のコピー
  int selectionSort_array[size];
  memcpy(selectionSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  selectionSort(selectionSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", selectionSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Insertion Sort *****\n");

  // 配列のコピー
  int insertionSort_array[size];
  memcpy(insertionSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  insertionSort(insertionSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", insertionSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Merge Sort *****\n");

  // 配列のコピー
  int mergeSort_array[size];
  memcpy(mergeSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  mergeSort(mergeSort_array, 0, size - 1);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", mergeSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Quick Sort *****\n");

  // 配列のコピー
  int quickSort_array[size];
  memcpy(quickSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  quickSort(quickSort_array, 0, size - 1);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", quickSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Heap Sort *****\n");

  // 配列のコピー
  int heapSort_array[size];
  memcpy(heapSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  heapSort(heapSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", heapSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Counting Sort *****\n");

  // 配列のコピー
  int countingSort_array[size];
  memcpy(countingSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  countingSort(countingSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", countingSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Bucket Sort *****\n");

  // 配列のコピー
  int bucketSort_array[size];
  memcpy(bucketSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  bucketSort(bucketSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", bucketSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Shell Sort *****\n");

  // 配列のコピー
  int shellSort_array[size];
  memcpy(shellSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  shellSort(shellSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", shellSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Comb Sort *****\n");

  // 配列のコピー
  int combSort_array[size];
  memcpy(combSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  combSort(combSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", combSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Cycle Sort *****\n");

  // 配列のコピー
  int cycleSort_array[size];
  memcpy(cycleSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  cycleSort(cycleSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", cycleSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Pancake Sort *****\n");

  // 配列のコピー
  int pancakeSort_array[size];
  memcpy(pancakeSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  pancakeSort(pancakeSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", pancakeSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Gnome Sort *****\n");

  // 配列のコピー
  int gnomeSort_array[size];
  memcpy(gnomeSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  gnomeSort(gnomeSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", gnomeSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Stooge Sort *****\n");

  // 配列のコピー
  int stoogeSort_array[size];
  memcpy(stoogeSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  stoogeSort(stoogeSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", stoogeSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Pigeonhole Sort *****\n");

  // 配列のコピー
  int pigeonholeSort_array[size];
  memcpy(pigeonholeSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  pigeonholeSort(pigeonholeSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", pigeonholeSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Odd-Even Sort *****\n");

  // 配列のコピー
  int oddEvenSort_array[size];
  memcpy(oddEvenSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  oddevenSort(oddEvenSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", oddEvenSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Cocktail Sort *****\n");

  // 配列のコピー
  int cocktailSort_array[size];
  memcpy(cocktailSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  cocktailSort(cocktailSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", cocktailSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  printf("***** Sleep Sort *****\n");

  printf("***** Not Implemented *****\n");

  // ===== ===== ===== ===== =====

  printf("***** Strand Sort *****\n");

  // 配列のコピー
  int strandSort_array[size];
  memcpy(strandSort_array, array, sizeof(array));

  // 配列を昇順に並べる
  strandSort(strandSort_array, size);

  // 配列を表示する
  for (int i = 0; i < size; i++) {
    printf("%d ", strandSort_array[i]);
  }
  printf("\n");

  // ===== ===== ===== ===== =====

  return 0;
}
