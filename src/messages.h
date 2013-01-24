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

void playerInBedroom() {
	puts("\nYour bedroom is small but functional, with a dresser, closet, and bed. No small amount of clothing littered the");
	puts("floor and there may have been some old food stuffed into a corner. Your door is open and some of the rooms mess");
	puts("prevents it from closing anyway. A full length mirror is on one wall.");
}

void playerInBedroomWakeUp() {
	puts("\nYou wake up in your bedroom, face down on your bed. Your nose feels raw and crusty, and you have to shake your");
	puts("arm for a while to wake it up as you sit up in your bed. Your clothes are the same ones you were wearing the");
	puts("day before; apparently you were too tired to be bothered to change into sleepwear.");
	puts("\nThe day before was far from your best. After having dinner with your parents, you came home and mused about how");
	puts("your life was pretty well down the shitter, and between the people who called themselves friends but didn't");
	puts("return calls and the people who you saw everyday at the exact same job they had been doing for ten or more");
	puts("years, you had lost a fair amount of faith that things were getting better.");
}

void playerInBedroomNoteFall() {
	puts("\nYou notice from the corner of an eye a folded note falling down from your bed onto the floor.");
}

void playerInHallway() {
	puts("\nPlayer is in hallway.");
}

void playerInKitchen() {
	puts("\nPlayer is in kitchen.");
}

#endif