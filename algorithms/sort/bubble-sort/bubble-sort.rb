def bubble_sort arr
  len = arr.length

  loop do
    swapped = false

    (len - 1).times do |i|
      if (arr[i] > arr[i + 1])
        arr[i], arr[i + 1] = arr[i + 1], arr[i]
        swapped = swapped || true
      end
    end

    break if not swapped
  end

  arr
end
