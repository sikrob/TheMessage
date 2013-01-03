// TheMessage
// First entry of One Game A Month challenge.

#include <stdio.h>
#include <stdbool.h>

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
	while(true) {
		puts("Please choose an option:\n 1) Play The Message     2) Quit");
		// get user input

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