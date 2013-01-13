// TheMessage
// First entry of One Game A Month challenge.

// main.c
// This file is meant to only carry two functions: main() and run(). Anything else should be put into a relatively
// descriptive header file, preferably along with other related functions. If any header is *too* big OR small, it
// may be necesssary to move things around again for my sanity.
#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif
#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#include "outputFlagContainer.h"
#include "messageParserPieces.h"
#include "gameloop.h"
#include "messages.h"

#ifndef MAX_INPUT
#define MAX_INPUT 64
#endif

void run() {
	displayIntroMessage();

	char *userInput = NULL;

	outputFlagContainer *outputFlags; // is this necessary with only ints in the struct? I do not remember manual memory management!
	// in more reading, I'm 90% certain we do not need malloc for this since ints; malloc is for dynamic stuff and I'm not convinced structs are dynamic intrinsically.
	// but we're keeping it for now so we don't have to worry about it.

	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		outputFlags = getUserInput(userInput); // are we going to pass in an outputFlagContainer by reference or just return one? If byRef, we could also do a return value… but to what end?

		if (outputFlags->HELP) {
			// play help message.
		}
		else if (outputFlags->YES || outputFlags->PLAY) {
			gameloop();
		} else if (outputFlags->QUIT || outputFlags->NO) {
			puts("recog'd quit");
			break;
		} else {
			puts("I'm sorry, I didn't recoginze your input – would you like to play (yes) or quit (quit)?"); // fix so we recog play later
		}
	}

	free(outputFlags);
}


int main(int argc, char * argv[]) {
	run();
	return 0;
}