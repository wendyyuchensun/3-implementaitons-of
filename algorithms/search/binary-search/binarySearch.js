const binarySearch = (sortedArr, target) => {
  let first = 0,
      last = sortedArr.length - 1,
      middle, middleElm

  while (first <= last) {
    middle = Math.floor((last - first) / 2 + first)
    middleElm = sortedArr[middle]

    if (middleElm === target) {
      return middleElm
    } else if (middleElm < target) {
      first = middle + 1
    } else if (middleElm > target) {
      last = middle - 1
    }
  }

  return null
}
