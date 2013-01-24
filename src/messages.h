// messages.h

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef MESSAGES_H
#define MESSAGES_H


void displayTitle() {
	puts("\n---------------\n| THE MESSAGE |\n---------------");
}

void displayIntroMessage() {
	puts("An interactive fiction game by Robert Sikorski.");
	puts("This work is free, open source, and may only be used, redistributed, or modified on condition of the same");
	puts("being true for the end result.");

	puts("\nWelcome to The Message\n\"The Message\" is a short text adventure game with a rudimentary parser.");
	puts("Simple command entries are the basis here, with all options explained in the 'help' action.\n");
}

void displayQuitMessage() {
	puts("\nThanks for playing The Message.");
}

void displayBadInputMessage() {
	puts("\nI'm sorry, I didn't recognize your input; please try again.");
}

void displayHelpMessage() {
	puts("\nCommon commands in this game include:");
	puts("help quit yes no play go get use");
	puts("\"go\" has syntax for a destination: go [destination]");
	puts("\"get\" has syntax for picking items up: get [item]");
	puts("\"use\" has syntax for using items: use [item]");
	puts("There are a couple of other commands which you may find, but this is enough to get by.");
}

void displayPreGameMenu() {
	puts("\nWould you like to play or quit? Please choose one.");
}

void displayBadGetUseInputMessage() {
	puts("\nThat is either not something around you or not an interesting item.");
}

void playerInBedroomGotNote() {
	puts("\nYou pick up the note.");
}

void playerInBedroomGotBat() {
	puts("\nYou pick up the bat. It feels quite trusty.");
}

void playerInBedroomUseBat() {
	puts("\nYou swing your bat around your bedroom and, in your gusto, break part of your dresser. Oops!");
}

void playerInHallwayUseBat() {
	puts("\nYou use the bat on the menacing shadow and – crack! – you make contact with it in a surprise attack!");
}

void playerInBedroom() {
	puts("\nYour bedroom is small but functional, with a dresser, closet, and bed. No small amount of clothing littered the");
	puts("floor and there may have been some old food stuffed into a corner. The door to your room leads to a hallway and is");
	puts("open; some of the room's mess prevents it from closing anyway. A full length mirror is on one wall.");
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

void playerInBedroomNote() {
	puts("\nYou noticed a folded note which fell down from your bed to the floor. It sits oddly neatly upon the room's mess.");
}

void playerInBedroomBat() {
	puts("\nA trusty looking bat leans between your bed and dresser.");
}

void playerInHallway() {
	puts("\nPlayer is in hallway.");
}

void playerInKitchen() {
	puts("\nPlayer is in kitchen.");
}

#endif