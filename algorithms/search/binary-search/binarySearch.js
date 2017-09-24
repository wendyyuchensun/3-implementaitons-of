const binarySearch = (sortedArr, target) => {
  if (sortedArr.length === 0) return null

  const middleIndx = getMiddleIndxFrom(sortedArr),
        middleElm = sortedArr[middleIndx]

  if (middleElm === target) return middleElm

  if (sortedArr.length > 1) {
    if (middleElm > target) return binarySearch(sortedArr.slice(0, middleIndx - 1), target)
    else if (middleElm < target) return binarySearch(sortedArr.slice(middleIndx + 1), target)
  }

  return null
}

const getMiddleIndxFrom = arr => Math.floor(arr.length / 2)
