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


outputFlagContainer *getUserInput(outputFlagContainer *outputFlags) {
	outputFlags = resetOutputFlags(outputFlags);

	char *userInput = NULL;
	char user_input[MAX_INPUT];
	char *userInputToken = NULL;
	char *tmp = NULL;
	char *finalCharacterCheck = NULL;

	// Tokens to search for:
	char* HELP = "HELP";
	char* QUIT = "QUIT";
	char* YES = "YES";
	char* NO = "NO";
	char* PLAY = "PLAY";

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
		finalCharacterCheck = strchr(userInputToken, '\n');
		if (finalCharacterCheck) {
			tmp = malloc(sizeof(char)*(strlen(userInputToken))); // As tmp is one char less than userInputToken, this is correct.
			if (tmp == NULL){
				exit(1);
			}
			strncpy(tmp,userInputToken,strlen(userInputToken)-1);
			tmp[strlen(userInputToken)-1] = '\0';
			strcpy(userInputToken, tmp);
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
				tmp = malloc(sizeof(char)*(strlen(userInputToken)));
				if (tmp == NULL){
					exit(1);
				}
				strncpy(tmp,userInputToken,strlen(userInputToken)-1);
				tmp[strlen(userInputToken)-1] = '\0';
				strcpy(userInputToken, tmp);
				free(tmp);
				tmp = NULL;
			}
		}
	}

	return outputFlags;
}

#endif