def quick_sort arr, left, right
  return arr if left >= right

  pivot = arr[left]
  i = left + 1
  j = right

  while true
    while i <= right
      break if arr[i] > pivot
      i += 1
    end

    while j > left
      break if arr[j] < pivot
      j -= 1
    end

    break if i > j
    arr[i], arr[j] = arr[j], arr[i]
  end

  arr[left], arr[j] = arr[j], arr[left]

  quick_sort arr, left, j - 1
  quick_sort arr, j + 1, right

  arr
end
