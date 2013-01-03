For January, the game that will be made will be a simple text-based adventure
game in the style of various "Interactive Fiction" games of the past. It will
understand basic, common requests and have a simple inventory.

Basic Idea:
	WHILE(TRUE) {
		GET(USERINPUT) // GET USERINPUT as a char[], get indices of tokens?
		PARSE(USERINPUT) // read through tokens for recognizable language/grammar
		RESPOND_TO(USERINPUT) // display results, including any new "setting" information.
	}

Game Plot: You are an investigative something or other and you are trying to find out the
scoop on someone. You can look through trash, break into house (or enter back door),
and possibly even call someone else to confer details? Twist ending of being the perp, not the cop? (too 9:05…)

End is either getting attacked by who you are investigating or making the call on what's going on?