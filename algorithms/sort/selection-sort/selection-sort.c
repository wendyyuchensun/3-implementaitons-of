#include <stdio.h>

void swap (int *a, int *b);

void selection_sort (int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min = i;

    for (int j = i + 1; j < len; j++) {
      if (arr[min] > arr[j]) {
        min = j;
      }
    }

   if (i != min) {
     swap(&arr[i], &arr[min]);
    }
  }
}

void swap (int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
