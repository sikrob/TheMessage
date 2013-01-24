// gameloop.h
#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#include "outputFlagContainer.h"
#include "playerStateContainer.h"
#include "messageParserPieces.h"
#include "messages.h"

#ifndef GAMELOOP_H
#define GAMELOOP_H

void gameloop(outputFlagContainer *outputFlags) {

	// do we need to set our outputFlags again?

	playerStateContainer *playerFlags = malloc(sizeof(playerStateContainer));

	// Always start waking up in bed with the note falling down.
	playerFlags->inBedroom = true;
	playerInBedroomWakeUp();
	playerInBedroomNoteFall();

	while(true) {
		if (playerFlags->inBedroom) {
			playerInBedroom();
			outputFlags = getUserInput(outputFlags);
			if (outputFlags->GO && outputFlags->HALLWAY) {
				playerFlags->inBedroom = false;
				playerFlags->inHallway = true;
			}
		} else if (playerFlags->inHallway) {
			playerInHallway();
			outputFlags = getUserInput(outputFlags);
			if (outputFlags->GO && outputFlags->BEDROOM) {
				playerFlags->inHallway = false;
				playerFlags->inBedroom = true;
			} else if (outputFlags->GO && outputFlags->KITCHEN) {
				playerFlags->inHallway = false;
				playerFlags->inKitchen = true;
			}
		} else if (playerFlags->inKitchen) {
			playerInKitchen();
			outputFlags = getUserInput(outputFlags);
			if (outputFlags->GO && outputFlags->HALLWAY) {
				// can't leave the kitchen once you go in
				// End game if attempt to leave (but not the bad ending.)
			}
		}

	}

	free(playerFlags);
}

#endif