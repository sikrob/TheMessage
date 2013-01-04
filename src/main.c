// TheMessage
// First entry of One Game A Month challenge.

#include <stdio.h>
#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#include "outputFlagContainer.h"

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

	char user_input[MAX_INPUT]; // shit, bad practice!
	char *userInput = NULL;     // what will I do? (later)

	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		userInput = fgets(user_input, MAX_INPUT-1, stdin);
		// what's the best way to parse this, really?
		// current thought:
		// fscanf(,s,) while uI != done
		// 		look for 

		// if play: enter main loop
		game();
		// if quit: break
		break;
	}
}


int main(int argc, char * argv[]) {
	run();
	return 0;
}