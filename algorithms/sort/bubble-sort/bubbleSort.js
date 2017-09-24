const bubbleSort = arr => {
  let swapped

  do {
    swapped = false

    for (let i = 0; i < arr.length; i++) {
      if (arr[i] > arr[i + 1]) {
        [arr[i], arr[i + 1]] = [arr[i + 1], arr[i]]
        swapped = swapped || true
      }
    }
  } while (swapped)

  return arr
}
