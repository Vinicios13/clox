all: compile run
compile:
	gcc -o target/output src/*.c
run:
	./target/output
clear:
	rm ./target/output
