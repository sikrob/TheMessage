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
	puts("There are a couple of other commands which you may find, but this is enough to win or lose.");
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

void loseMessage() {
	puts("\nA light snaps on and you see your father tumble to the grown in the kitchen, blood pouring from his");
	puts("head. Someone screams and you look around the room, suddenly nauseous as you see a cake, presents, and");
	puts("a birthday surprise banner. Your family converges on you and takes the bat from your hands and your");
	puts("world fades to black as you pass out.");

	puts("\nThe next day on evening news:");
	puts("\"Well, here is a grim story for you: A young boy, afraid that burglers were finding their way into his");
	puts("house, assaulting and killing his own father before his family was able to subdue him - to top it all");
	puts("off, it was at his surprise 12th birthday party! Hopefully this is the only overly vigilant child in");
	puts("town, but just in case, watch out! This is channel 9 at 9; good night.\"");
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

void playerReadNote() {
	puts("\nYou read the note, which states in a familiar barely legible scrawl, \"We'll be waiting for you when you least");
	puts("expect it.\"");
}

void playerNotReadNote() {
	puts("\nYou do not have a note to read.");
}

void playerInBedroomBat() {
	puts("\nA trusty looking bat leans between your bed and dresser.");
}

void playerInHallway() {
	puts("\nThe hallway is dark and narrow. The door to your bedroom is behind you and the way to the kitchen is in front.");
	puts("You can hear a quiet shifting sound of someone in the kitchen and can just make out a shape of a person crouched");
	puts("just inside the doorless entryway to the kitchen.");
}

void playerInHallwayTimeout() {
	puts("\nYou stand in the hallway in horror as a shadowy figure approaches until it stops just short of you and reaches");
	puts("a shadowy arm to the wall and flips the light switch. Your father regards you in the now well lit hallway and he");
	puts("says, \"Hey, you coming in to the kitchen or not? I hate to ruin the surprise but your party isn't going to wait");
	puts("forever!\"");
}

void winMessage() {
	puts("\nYou follow your dad into the kitchen and see your family gathered beneath a banner which reads, \"SURPRISE\" and");
	puts("cake and presents on the table.  Your mother walks up to you and wipes at your face with a napkin, saying, \"Did");
	puts("you even wash up from when you tumbled down the stairs last night? You still have blood on your face!\" Following");
	puts("her to the table, you see your cake with twelve lit candles. Happy birthday!");
}

void playerInKitchen() {
	puts("\nYou walk toward the kitchen and suddenly the figure jumps out at you and hits the kitchen light. You see your dad");
	puts("just as he and everyone else shouts, \"Surprise!\"");
}

void endGameMessage() {
	puts("\nThanks for playing The Message! I hope you enjoyed it!");
}

#endif