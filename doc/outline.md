For January, the game that will be made will be a simple text-based adventure
game in the style of various "Interactive Fiction" games of the past. It will
understand basic, common requests and have a simple inventory.

Basic Idea:
	WHILE(TRUE) {
		GET(USERINPUT) // GET USERINPUT as a char[], get indices of tokens?
		PARSE(USERINPUT) // read through tokens for recognizable language/grammar
		RESPOND_TO(USERINPUT) // display results, including any new "setting" information.
	}

####Plot:
Similar to 9:05, we want to present the player with a situation which will
make them do one thing on instinct – but, if they look around, it will be
obvious that the first possibility is incorrect.

The set up will be such that the player will think they are being threatened
in their home. They may grab a weapon from their room before going downstairs
and killing the invaders – only to learn that it was their surprise birthday
party, and they just killed one of the guests (who was holding a piñata bat)
and also that the player character is something like twelve years old.
