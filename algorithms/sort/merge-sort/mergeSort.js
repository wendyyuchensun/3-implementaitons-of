const mergeSort = arr => {
  if (arr.length < 2) return arr

  const middle = Math.floor(arr.length / 2),
        left = arr.slice(0, middle),
        right = arr.slice(middle)

  return merge(mergeSort(left), mergeSort(right))
}

const merge = (arr1, arr2) => {
  let result = []

  while (arr1.length && arr2.length) {
    const min = arr1[0] < arr2[0] ? arr1.splice(0, 1) : arr2.splice(0, 1)
    result = result.concat(min)
  }

  return result.concat(arr1.length ? arr1 : arr2)
}
