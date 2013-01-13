myBuildFlags = -Wall -g

all:
	gcc $(myBuildFlags) src/main.c src/outputFlagContainer.h src/messageParserPieces.h src/messages.h src/gameloop.h -o TheMessage

clean:
	rm -f TheMessage
	rm -Rf *.dSYM
