myBuildFlags = -Wall -g

all:
	gcc $(myBuildFlags) src/main.c -o TheMessage

clean:
	rm -f TheMessage
	rm -Rf *.dSYM
