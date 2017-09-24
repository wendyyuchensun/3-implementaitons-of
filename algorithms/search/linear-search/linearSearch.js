const linearSearch = (arr, target) => {
  let match = null

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      match = arr[i]
      break
    }
  }

  return match
}
