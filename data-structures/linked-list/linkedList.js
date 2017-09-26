const genLinkedList = (...vals) => {
  let first, previous

  for (let i = 0; i < vals.length; i++) {
    const node = {val: vals[i]}

    if (i === 0) {
      first = previous = node
    } else {
      previous.next = node
      previous = node
    }
  }

  return first
}
