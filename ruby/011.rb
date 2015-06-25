require 'matrix'

GROUP_SIZE = 4

file = File.read("011.dat")

def group(collection)
  collection.map.with_index {|item, index| collection.slice(index,GROUP_SIZE)}
                .select{|item| item.size == GROUP_SIZE}
end

def multiply(groups)
  groups.map{|group| group.reduce(:*)}
end

def each_group(collection_of_collections)
  collection_of_collections.flat_map {|collection| group(collection) }
end

def matrix(file)
  file.lines.map{|k| k.split.map(&:to_i) }
end

def lines(matrix)
  matrix
end

def columns(matrix)
  Matrix.columns(matrix).to_a
end

def diagonals_left(matrix)
  matrix.map.with_index{|e,i| [*e,0].rotate(1*i)}.transpose
end

def diagonals_right(matrix)
  matrix.map.with_index{|e,i| [*e,0].rotate(-1*i)}.transpose
end

def max(collection)
  collection.max
end

lines_max = max(multiply(each_group(lines(matrix(file)))))
columns_max = max(multiply(each_group(columns(matrix(file)))))

diagonals_left_max = max(multiply(each_group(diagonals_left(matrix(file)))))
diagonals_right_max = max(multiply(each_group(diagonals_right(matrix(file)))))

puts max([lines_max, columns_max, diagonals_left_max, diagonals_right_max])

