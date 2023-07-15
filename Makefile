make: compile_debug run

.SILENT:

compile_debug:
	gcc -o build/debug -g src/*.c -Wall -Wextra -lm

debug:
	gdb -tui build/debug

run:
	./build/debug