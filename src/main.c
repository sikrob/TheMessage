// TheMessage
// First entry of One Game A Month challenge.

#include <stdio.h>
#include <stdlib.h>
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

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer)); // is this necessary with only ints in the struct? I do not remember manual memory management!
	while(true) {
		puts("Would you like to play or quit? (Choose one.)");
		userInput = fgets(user_input, MAX_INPUT-1, stdin);

		int i = 0;
		while (i < 3) {
			char FLOYD[MAX_INPUT];
			char *floyd = FLOYD;
			int cad = sscanf(userInput, "%*s %*s %*s %*s %s ", floyd);

			// knowing how this works now, my initial thought is loop to create a string that could scan up to, say, 20 words, stopping as soon as a blank occurred.
			// already seeing where even some C++ would be handy.
			// well, I'm sufficiently convinced I *could* code a brute force method – to the Internet!
			// And naturally, there is an easier way (phew); check the bookmark for the Stack Overflow question on Tokenizing strings in C.

			puts(floyd);
			i++;
		}
		// what's the best way to parse this, really?
		// current thought:
		// fscanf(,s,) while uI != done
		// 		look for 


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