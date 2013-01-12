// TheMessage
// First entry of One Game A Month challenge.
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

#ifndef MAX_INPUT
#define MAX_INPUT 64
#endif

void intro() {
	puts("\n---------------\n| THE MESSAGE |\n---------------");
	puts("An interactive fiction game by Robert Sikorski.");
	puts("This work is free, open source, and may only be used, redistributed, or modified on condition of the same");
	puts("being true for the end result.");

	puts("\nWelcome to The Message\n\"The Message\" is a short text adventure game with a rudimentary parser.");
	puts("Simple command entries are the basis here, with all options explained in the 'help' action.\n");
}

void game() {
	while(true) {
		puts("entered the game loop");
		break;
	}
}

void run() {
	intro();

	char *userInput = NULL;

	outputFlagContainer *outputFlags; // is this necessary with only ints in the struct? I do not remember manual memory management!
	// in more reading, I'm 90% certain we do not need malloc for this since ints; malloc is for dynamic stuff and I'm not convinced structs are dynamic intrinsically.
	// but we're keeping it for now so we don't have to worry about it.

	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		outputFlags = getUserInput(userInput); // are we going to pass in an outputFlagContainer by reference or just return one? If byRef, we could also do a return value… but to what end?

		if (outputFlags->yes) {
			game();
		} else if (outputFlags->quit) {
			puts("recog'd quit");
			// if quit: break
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