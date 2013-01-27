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
	playerStateContainer *playerFlags = malloc(sizeof(playerStateContainer));
	playerFlags = resetPlayerStateFlags(playerFlags);

	displayTitle();
	// Always start waking up in bed with the note falling down.
	playerFlags->inBedroom = true;
	playerInBedroomWakeUp();

	while(true) {
		if (playerFlags->inBedroom) {
			playerInBedroom();
			if (!playerFlags->hasNote) {
				playerInBedroomNote();
			}
			if (!playerFlags->hasBat) {
				playerInBedroomBat();
			}

			outputFlags = getUserInput(outputFlags);
			if (outputFlags->GO && outputFlags->HALLWAY) {
				playerFlags->inBedroom = false;
				playerFlags->inHallway = true;

			} else if (outputFlags->GET) { // all this get and use stuff should be busted out into a separate function
				if (outputFlags->NOTE) {
					playerInBedroomGotNote();
					playerFlags->hasNote = true;
				} else if (outputFlags->BAT) {
					playerInBedroomGotBat();
					playerFlags->hasBat = true;
				} else {
					displayBadGetUseInputMessage();
				}

			} else if (outputFlags->USE) {
				if (outputFlags->BAT && playerFlags->hasBat) {
					playerInBedroomUseBat();
				} else {
					displayBadGetUseInputMessage();
				}

			} else if (outputFlags->READ) {
				if (outputFlags->NOTE) {
					if (playerFlags->hasNote) {
						playerReadNote();
					} else {
						playerNotReadNote();
					}
				} else {
					displayBadGetUseInputMessage();
				}
			}else {
				displayBadInputMessage();
			}

		} else if (playerFlags->inHallway) {
			if (playerFlags->hasActedInHallway) {
				playerInHallwayTimeout();
				winMessage();
				endGameMessage();
				break;
			}
			playerInHallway();
			outputFlags = getUserInput(outputFlags);


			if (outputFlags->GO && outputFlags->BEDROOM) {
				playerFlags->inHallway = false;
				playerFlags->inBedroom = true;
				playerFlags->hasActedInHallway = true;
			} else if (outputFlags->GO && outputFlags->KITCHEN) {
				playerFlags->inHallway = false;
				playerFlags->inKitchen = true;
				playerFlags->hasActedInHallway = true; // should be unnecessary here 
			} else if (outputFlags->USE) {
				if (outputFlags->BAT && playerFlags->hasBat) {
					playerInHallwayUseBat();
					loseMessage();
					endGameMessage();
					break;
				} else {
					displayBadGetUseInputMessage();
				}

			} else {
				displayBadInputMessage();
			}

		} else if (playerFlags->inKitchen) {
			playerInKitchen();
			winMessage();
			endGameMessage();
			break;
		}

	}

	free(playerFlags);
}

#endif