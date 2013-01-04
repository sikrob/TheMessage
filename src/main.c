// TheMessage
// First entry of One Game A Month challenge.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#include "outputFlagContainer.h"~

#define MAX_INPUT 64

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
		//
		break;
	}
}

void run() {
	intro();

	char user_input[MAX_INPUT]; // shit, bad practice in the naming convention…
	char *userInput = NULL;     // what will I do? (later)
	char *userInputToken = NULL;

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer)); // is this necessary with only ints in the struct? I do not remember manual memory management!
	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		userInput = fgets(user_input, MAX_INPUT-1, stdin);

		// This next bit should be popped out into a function, probably into its own file for maximum benefit. Could possibly also pull the output flags? Might be tricky to do
		// here. 

		// destructively pull tokens, one at a time.
		userInputToken = strtok(userInput, " ");
		while (userInputToken != NULL) {
			// handle token
		}

		// if play: enter main loop
		game();
		// if quit: break
		break;
	}

	free(outputFlags);
}


int main(int argc, char * argv[]) {
	run();
	return 0;
}