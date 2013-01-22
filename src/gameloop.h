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

	// Always start waking up in bed.
	playerFlags->inBedroom = true;

	while(true) {
		if (playerFlags->inBedroom) {
			playerInBedroom();
			outputFlags = getUserInput(outputFlags);
			// 	if (outputFlags->go && outputFlags->hallway)) {
			//		playerFlags->inBedroom = false;
			//		playerFlags->inHallway = true;
			// 	}
		} else if (playerFlags->inHallway) {
			playerInHallway();
			outputFlags = getUserInput(outputFlags);
			// 	if (outputFlags->go && outputFlags->bedroom)) {
			//		playerFlags->inHallway = false;
			//		playerFlags->inBedroom = true;
			// 	} else if (outputFlags->go && outputFlags->kitchen) {
			// 		playerFlags->inHallway = false;
			// 		playerFlags->inKitchen = true;
			// 	}
		} else if (playerFlags->inKitchen) {
			playerInKitchen();
			outputFlags = getUserInput(outputFlags);
			// 	if (outputFlags->go && hallway) {
			// 		// can't leave the kitchen once you go in
			// 		// End game if attempt to leave (but not the bad ending.)
			//	}
		}

		break;
	}

	free(playerFlags);
}

#endif