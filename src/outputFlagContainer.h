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

	bool help;
	bool quit;

	// Required for pre-game:
	bool yes;
	bool no; // do we need no? could an absense of yes suffice in y/n situations?
	bool not;
	bool play;


} outputFlagContainer;

outputFlagContainer* resetOutputFlags(outputFlagContainer* outputFlags) {
	// free and malloc?
	outputFlags->help = false;
	outputFlags->quit = false;
	outputFlags->yes = false;
	outputFlags->no = false;
	outputFlags->not = false;
	outputFlags->play = false;

	return outputFlags;
}

#endif