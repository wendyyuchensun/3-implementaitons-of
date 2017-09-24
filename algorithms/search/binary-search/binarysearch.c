#include <stdio.h>

int binarysearch (int sorted_arr[], int length, int target) {
  int first = 0;
  int last = length - 1;

  while (first <= last) {
    int middle = (last - first) / 2 + first;
    int middle_elm = sorted_arr[middle];

    if (middle_elm == target) {
      return middle_elm;
    }
    else if (middle_elm > target) {
      last = middle - 1;
    }
    else if (middle_elm < target) {
      first = middle + 1;
    }
  }

  return -1;
}
