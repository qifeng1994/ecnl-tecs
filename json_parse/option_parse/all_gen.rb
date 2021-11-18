require "./cdl_opt_gen"
require "./h_opt_gen"
require "./cfg_opt_gen"
require "./callback_opt_gen"
require 'optparse'


class All_gen
   
	def self.all_gen
		Cdl_gen.cdl_gen
        H_gen.h_gen
        Cfg_gen.cfg_gen
        Callback_gen.callback_gen
	end

    def self.option_property(propertyName)
        Cdl_gen.option_property(propertyName)
        H_gen.option_property(propertyName)
        Cfg_gen.option_property(propertyName)
        Callback_gen.option_property(propertyName)
    end
end

All_gen.all_gen

opt = OptionParser.new

opt.on('-p','--add property''add property name') do |propertyName|
    propertyName = ARGV[4,ARGV.length]
    All_gen.option_property(propertyName)
end

opt.parse(ARGV)

