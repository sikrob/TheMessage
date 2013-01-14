//messageParserPieces
#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif
#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif
#ifndef STDBOOL_H
#define STDBOOL_H
#include <stdbool.h>
#endif

#ifndef CTYPE_H
#define CTYPE_H
#include <ctype.h>
#endif

#ifndef MAX_INPUT
#define MAX_INPUT 64
#endif

#include "outputFlagContainer.h"

#ifndef MESSAGEPARSERPIECES_H
#define MESSAGEPARSERPIECES_H


outputFlagContainer* getUserInput() {
	char *userInput = NULL;
	char user_input[MAX_INPUT];
	char *userInputToken = NULL;
	char *tmp = NULL;
	char *finalCharacterCheck = NULL;

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer));
	outputFlags = resetOutputFlags(outputFlags);

	// Tokens to search for:
	char HELP[] = "HELP";
	char QUIT[] = "QUIT";

	char YES[] = "YES";
	char NO[] = "NO";
	char PLAY[] = "PLAY";

	userInput = fgets(user_input, MAX_INPUT-1, stdin);
	int i = 0;
	while(userInput[i]) {
		userInput[i] = toupper(userInput[i]);
		i++;
	}

	userInputToken = strtok(userInput, " ");
	if (userInputToken) {

		// need to check for { \n . ' ! : , " ; }
		// Should also make sure this happens on the final character only…
		// Later.

		finalCharacterCheck = strchr(userInputToken, '\n');
		if (finalCharacterCheck) {
			tmp = malloc(sizeof(char)*(strlen(userInputToken)-1));
			strncpy(tmp,userInputToken,strlen(userInputToken)-1);
			userInputToken = tmp;
			free(tmp);
			tmp = NULL;
		}
	}

	while (userInputToken != NULL) { // NULL = NO (more) tokens.
		if (0 == strcmp(userInputToken, YES)) {
			outputFlags->YES = true;
		} else if (0 == strcmp(userInputToken, QUIT)) {
			outputFlags->QUIT = true;
		} else if (0 == strcmp(userInputToken, HELP)) {
			outputFlags->HELP = true;
		} else if (0 == strcmp(userInputToken, PLAY)) {
			outputFlags->PLAY = true;
		} else if (0 == strcmp(userInputToken, NO)) {
			outputFlags->NO = true;
		}

		userInputToken = strtok(NULL, " ");
		if (userInputToken) {
			finalCharacterCheck = strchr(userInputToken, '\n');
			if (finalCharacterCheck) {
				tmp = malloc(sizeof(char)*(strlen(userInputToken)-1));
				strncpy(tmp,userInputToken,strlen(userInputToken)-1);
				userInputToken = tmp;
				free(tmp);
				tmp = NULL;
			}
		}
	}
	// is there a way to make sure we delete the array?

	return outputFlags;
}

#endif