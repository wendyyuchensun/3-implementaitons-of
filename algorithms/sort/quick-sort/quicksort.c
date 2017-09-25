#include <stdio.h>

void swap (int *a, int *b);

void quicksort (int *arr, int left, int right) {
  if (left >= right) {
    return;
  }

  int pivot = arr[left];
  int i = left + 1, j = right;

  while (1) {
    while (i <= right) {
      if (arr[i] > pivot) {
        break;
      }
      i++;
    }

    while (j > left) {
      if (arr[j] < pivot) {
        break;
      }
      j--;
    }

    if (i > j) {
      break;
    }
    swap(&arr[i], &arr[j]);
  }

  swap(&arr[left], &arr[j]);

  quicksort(arr, left, j - 1);
  quicksort(arr, j + 1, right);
}

void swap (int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
