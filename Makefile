build:
	g++ -Wall -std=c++17 -I"./libs/" src/*.cpp -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer -llua5.3  -o sparky;
run:
	./sparky 
clean:
	rm sparky
debug:
	./sparky -debug
dependencies:
	sudo apt install build-essential libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev liblua5.3-dev;
