def binary_search sorted_arr, target
  return nil if sorted_arr.empty?

  middle_indx = (sorted_arr.length / 2).floor
  middle_elm = sorted_arr[middle_indx]

  if middle_elm == target
    middle_elm
  elsif sorted_arr.length > 1
    if middle_elm > target
      binary_search sorted_arr.take(middle_indx), target
    elsif middle_elm < target
      binary_search sorted_arr.drop(middle_indx + 1), target
    end
  else
    nil
  end
end
