require "./cdl_opt_gen"
require "./h_opt_gen"
require 'optparse'

devdesc_json_fname = ARGV[0]
gen_dir = ARGV[1]
deviceNames = ARGV[2,ARGV.length]

class All_gen
   
	def self.all_gen(deviceNames,gen_dir)
		Cdl_gen.cdl_gen(deviceNames,gen_dir)
        H_gen.h_gen(deviceNames,gen_dir)
	end

    def self.option_property(propertyName, deviceName,gen_dir)
        Cdl_gen.option_property(propertyName, deviceName,gen_dir)
        H_gen.option_property(propertyName, deviceName,gen_dir)
    end
end

All_gen.all_gen(deviceNames,gen_dir)

opt = OptionParser.new

opt.on('-p','--add property''add property name') do |propertyName|
    deviceName = ARGV[2]
    propertyName = ARGV[4,ARGV.length]
    All_gen.option_property(propertyName, deviceName,gen_dir)
end

opt.parse(ARGV)


