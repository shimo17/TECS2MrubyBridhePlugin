class Shimo
	def initialize
    	@lcd = EV3RT::LCD.new
	end
	
	def mcall_lcd(number)
		@lcd.print number
	end

	def lcd
		@lcd.print "05091997"
	end
end

class Ryo
	def initialize
    	@lcd = EV3RT::LCD.new
	end

	def mcall_hyoji(number)
		 @lcd.print number
	end

	def hyoji
		#@lcd.print "gunma_saitama_university"
		return "a"
	end
end