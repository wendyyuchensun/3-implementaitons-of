def insertion_sort arr
  1.upto(arr.length - 1) do |i|
    key = arr[i]

    j = i - 1

    while arr[j] > key && j >= 0
      arr[j + 1] = arr[j]
      j -= 1
    end

    arr[j + 1] = key
  end

  arr
end
