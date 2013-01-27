// playerStateContainer
// This will hold what the player has done and what room the player is in.
// May include the inventory here in a "what the player has" context so it
// can still fit the outlined idea for a player's state.

#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#ifndef PLAYERSTATECONTAINER_H
#define PLAYERSTATECONTAINER_H

typedef struct {

	bool inBedroom;
	bool inHallway;
	bool inKitchen;
	bool hasNote;
	bool hasBat;
	bool hasActedInHallway;

} playerStateContainer;

playerStateContainer *resetPlayerStateFlags(playerStateContainer *playerFlags) {
	playerFlags->inBedroom = false;
	playerFlags->inHallway = false;
	playerFlags->inKitchen = false;
	playerFlags->hasNote = false;
	playerFlags->hasBat = false;
	playerFlags->hasActedInHallway = false;

	return playerFlags;
}

#endif