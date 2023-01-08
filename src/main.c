#include <stdio.h>
#include <string.h>
#include "../include/bubble_sort.h"
#include "../include/selection_sort.h"

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

  return 0;
}
