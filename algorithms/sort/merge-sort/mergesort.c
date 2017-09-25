#include <stdio.h>

void merge (int arr[], int l, int m, int r) {
  // tmp left & right
  int leftlen = m - l + 1;
  int rightlen = r - m;

  int left[leftlen];
  for (int i = 0; i < m + 1; i++) {
    left[i] = arr[l + i];
  }

  int right[rightlen];
  for (int j = 0; j < r - m; j++) {
    right[j] = arr[m + 1 + j];
  }

  // merge
  int i = 0, j = 0, k = l;

  while (i < leftlen && j < rightlen) {
    if (left[i] < right[j]) {
      arr[k] = left[i];
      i++;
    }
    else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < leftlen) {
    arr[k] = left[i];
    i++;
    k++;
  }

  while (j < rightlen) {
    arr[k] = right[j];
    j++;
    k++;
  }
}

void mergesort (int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergesort(arr, l, m);
    mergesort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}
