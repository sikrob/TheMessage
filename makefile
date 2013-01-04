myBuildFlags = -Wall -g

all:
	gcc $(myBuildFlags) src/main.c src/outputFlagContainer.h -o TheMessage

clean:
	rm -f TheMessage
	rm -Rf *.dSYM
