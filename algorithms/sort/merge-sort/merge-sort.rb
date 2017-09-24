def merge_sort arr
  return arr if arr.size < 2

  middle = (arr.length / 2).floor
  left = arr.take middle
  right = arr.drop middle

  merge merge_sort(left), merge_sort(right)
end

def merge arr1, arr2
  result = []

  while !arr1.empty? && !arr2.empty?
    min = arr1[0] < arr2[0] ? arr1.delete_at(0) : arr2.delete_at(0)
    result << min
  end

  result.concat(!arr1.empty? ? arr1 : arr2)
end
