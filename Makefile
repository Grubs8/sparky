build:
	g++ -Wall -std=c++17 -I"./libs/" src/*.cpp -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -llua5.4  -o sparky;
run:
	./sparky 
clean:
	rm sparky
debug:
	./sparky -debug
