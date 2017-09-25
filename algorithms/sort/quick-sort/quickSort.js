const quickSort = (arr, left, right) => {
  if (left >= right) return

  const pivot = arr[left]
  let i = left + 1, j = right

  while (true) {
    while (i <= right) {
      if (arr[i] > pivot) {
        break
      }
      i++
    }

    while (j > left) {
      if (arr[j] < pivot) {
        break
      }
      j--
    }

    if (i > j) break
    [arr[i], arr[j]] = [arr[j], arr[i]]
  }

  [arr[left], arr[j]] = [arr[j], arr[left]]

  quickSort(arr, left, j - 1)
  quickSort(arr, j + 1, right)

  return arr
}

console.log(quickSort([3, 66, 7, -9, 100], 0, 4))
