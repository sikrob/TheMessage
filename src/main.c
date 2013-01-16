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

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer));

	while(true) {
		displayPreGameMenu();

		outputFlags = getUserInput(outputFlags);
		if (outputFlags->HELP) {
			displayHelpMessage();
		} else if (outputFlags->YES || outputFlags->PLAY) {
			gameloop();
		} else if (outputFlags->QUIT || outputFlags->NO) {
			displayQuitMessage();
			break;
		} else {
			displayBadInputMessage();
		}
	}

	free(outputFlags);
}


int main(int argc, char * argv[]) {
	run();
	return 0;
}