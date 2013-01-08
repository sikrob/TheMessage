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

void getUserInput(char *userInput) {
	char user_input[MAX_INPUT]; // shit, bad practice in the naming convention…
	char *userInputToken = NULL;

	// Tokens to search for:
	char yes[] = "yes";

	userInput = fgets(user_input, MAX_INPUT-1, stdin);
	userInputToken = strtok(userInput, " "); // Destructive, pulls one token at a time.
	// fgets provides newline characters, which fuck everything up forever.

	char tmp[strlen(userInputToken)]; // ideally reduce scope on this later !!!!!!!!!!!!!!!!!!!!

	char *newLineCheck = strchr(userInputToken, '\n');
	if (newLineCheck) {
		strncpy(tmp,userInputToken,strlen(userInputToken)-1); // Removing that pesky newline.
		userInputToken = tmp;
	}

	while (userInputToken != NULL) { // NULL = no (more) tokens.
		// handle token
		if (0 == strcmp(userInputToken, yes)) {
			puts("bear");
		}

		userInputToken = strtok(NULL, " "); // Destructive, pulls one token at a time.
	}
	// is there a way to make sure we delete the array?
}

void run() {
	intro();

	char *userInput = NULL;     // what will I do? (later)

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer)); // is this necessary with only ints in the struct? I do not remember manual memory management!
	// in more reading, I'm 90% certain we do not need malloc for this since ints; malloc is for dynamic stuff and I'm not convinced structs are dynamic intrinsically.

	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		getUserInput(userInput); // are we going to pass in an outputFlagContainer by reference or just return one? If byRef, we could also do a return value… but to what end?

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