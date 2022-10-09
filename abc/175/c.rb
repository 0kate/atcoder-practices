x, k, d = gets.split(" ").map {|n| n.to_i}

direction = (x - 1).abs < (x + 1).abs ? -1 : +1
while (x + direction).abs < x.abs
  x += direction
end
puts x
