require 'optparse'
opt = OptionParser.new
opt.on('-a', '--add [ITEM]', 'add an item') do |val|
  if val != nil
    puts "Add #{val}"
  else
    puts "Add something"
  end
end
opt.parse(ARGV)