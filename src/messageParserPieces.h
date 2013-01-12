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

#ifndef MAX_INPUT
#define MAX_INPUT 64
#endif

#include "outputFlagContainer.h"

#ifndef MESSAGEPARSERPIECES_H
#define MESSAGEPARSERPIECES_H


outputFlagContainer* getUserInput(char *userInput) {
	char user_input[MAX_INPUT]; // shit, bad practice in the naming convention…
	char *userInputToken = NULL;
	char *tmp = NULL;
	char *finalCharacterCheck = NULL;

	outputFlagContainer *outputFlags = malloc(sizeof(outputFlagContainer));
	outputFlags = resetOutputFlags(outputFlags);

	// Tokens to search for:
	char help[] = "help";
	char quit[] = "quit";

	char yes[] = "yes";
	char no[] = "no";
	char not[] = "not";
	char play[] = "play";


	userInput = fgets(user_input, MAX_INPUT-1, stdin);

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

	while (userInputToken != NULL) { // NULL = no (more) tokens.
		if (0 == strcmp(userInputToken, yes)) {
			outputFlags->yes = true;
		} else if (0 == strcmp(userInputToken, quit)) {
			outputFlags->quit = true;
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