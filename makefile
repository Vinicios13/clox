prod: compile-prod run

dev: compile-dev run

compile-dev:
	gcc -o target/output -g src/*.c

compile-prod:
	 -o target/output src/*.c

run:
	./target/output

clear:
	rm ./target/output
