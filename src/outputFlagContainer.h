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

typedef struct outputFlagContainer{
	// Required for pre-game:
	bool yes;
	bool no;
	bool not;
	bool play;
	bool quit;
	bool don_t;
	bool help;

} outputFlagContainer;

#endif