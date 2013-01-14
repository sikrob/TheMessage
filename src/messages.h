// messages.h

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef MESSAGES_H
#define MESSAGES_H

void displayIntroMessage() {
	puts("\n---------------\n| THE MESSAGE |\n---------------");
	puts("An interactive fiction game by Robert Sikorski.");
	puts("This work is free, open source, and may only be used, redistributed, or modified on condition of the same");
	puts("being true for the end result.");

	puts("\nWelcome to The Message\n\"The Message\" is a short text adventure game with a rudimentary parser.");
	puts("Simple command entries are the basis here, with all options explained in the 'help' action.\n");
}

void displayQuitMessage() {
	puts("Thanks for playing The Message.");
}

void displayBadInputMessage() {
	puts("I'm sorry, I didn't recognize your input; please try again.");
}

void displayHelpMessage() {
	puts("\nCommon commands in this game include: yes, no, play, quit, go [destination]");
	puts("Tips: go [destination] could be something like \"go door\"\n");
}

void displayPreGameMenu() {
	puts("Would you like to play or quit? Please choose one.");
}

#endif