PATH = "default"

PHONY: run
run:
	g++ -std=c++17 $(PATH)
	./a.out < sample.txt

PHONY: exec
exec:
	./a.out < sample.txt

