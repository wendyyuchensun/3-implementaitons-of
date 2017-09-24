#include <stdio.h>

void swap (int *a, int *b);

void bubblesort (int arr[], int len) {
  int swapped;

  do {
    swapped = 0;

    for (int i = 0; i < len - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        swapped = swapped || 1;
      }
    }
  } while (swapped);
}

void swap (int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
