def linear_search arr, target
  arr.each do |elm|
    return elm if elm == target
  end
  nil
end
