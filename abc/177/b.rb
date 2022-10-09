s = gets.chomp
t = gets.chomp

def count_diff_chars(s1, s2)
  diff_chars = 0
  s1.length.times do |i|
    diff_chars += s1[i] != s2[i] ? 1 : 0
  end
  diff_chars
end

offset = 0
min_diff_chars = t.length
while offset + t.length <= s.length
  diff_chars = count_diff_chars(s.slice(offset, t.length), t)
  min_diff_chars = [min_diff_chars, diff_chars].min
  offset += 1
end

puts min_diff_chars
