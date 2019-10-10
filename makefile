all: compile run
compile:
	gcc -o target/output src/main.c src/chunk.c  src/memory.c src/debug.c
run:
	./target/output
clear:
	rm ./target/output
