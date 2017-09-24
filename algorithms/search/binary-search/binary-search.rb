def binary_search sorted_arr, target
  first = 0
  last = sorted_arr.length - 1

  while first <= last
    middle = ((last - first) / 2 + first).floor
    middle_elm = sorted_arr[middle]

    if middle_elm == target
      break middle_elm
    elsif middle_elm > target
      last = middle - 1
    elsif middle_elm < target
      first = middle + 1
    end
  end
end
