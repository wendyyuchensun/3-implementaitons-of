def selection_sort arr
  n = arr.length - 1

  n.times do |i|
    min = i

    i.next.upto(n) do |j|
      min = j if arr[min] > arr[j]
    end

    arr[i], arr[min] = arr[min], arr[i] if min != i
  end

  arr
end
