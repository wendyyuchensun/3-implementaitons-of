#include <stdio.h>

int linearsearch (int arr[], int length, int target) {
  for (int i = 0; i < length; i++) {
    if (arr[i] == target) {
      return arr[i];
    }
  }

  return -1;
}
