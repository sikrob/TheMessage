// outputFlagContainer
// This is essentially our big ball of comprehension; we look for keywords and then make decisions
// based on those keywords, and this is where we find out which keywords were found.

// Right now, not dealing with malloc – not entirely sure when that is appropriate vs just simple
// declaration, but I'll look more into that once I have the first 'yay/nay' choice down.

#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#ifndef OUTPUTFLAGCONTAINER_H
#define OUTPUTFLAGCONTAINER_H

typedef struct {

	bool HELP;
	bool QUIT;
	bool YES;
	bool NO;
	bool PLAY;
	bool GO;
	bool BEDROOM;
	bool HALLWAY;
	bool KITCHEN;
	bool NOTE;
	bool GET;
//	bool DROP;
	bool BAT;
	bool READ;
	bool USE;

} outputFlagContainer;

outputFlagContainer *resetOutputFlags(outputFlagContainer* outputFlags) {

	outputFlags->HELP = false;
	outputFlags->QUIT = false;
	outputFlags->YES = false;
	outputFlags->NO = false;
	outputFlags->PLAY = false;
	outputFlags->GO = false;
	outputFlags->BEDROOM = false;
	outputFlags->HALLWAY = false;
	outputFlags->KITCHEN = false;
	outputFlags->NOTE = false;
	outputFlags->GET = false;
//	outputFlags->DROP = false;
	outputFlags->BAT = false;
	outputFlags->READ = false;
	outputFlags->USE = false;

	return outputFlags;
}

#endif