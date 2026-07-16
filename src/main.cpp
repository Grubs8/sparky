#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <glm/glm.hpp>
#include <imgui/imgui.h>
#include <sol/sol.hpp>
#include "Game.h"



int main(int argc, char* argv[]) {
	
	
/*
	// Tries to use the Lua language with the sol library
	sol::state lua;
	lua.open_libraries(sol::lib::base);

	// Tries to create a vector 2 and normalize it with the glm library
	glm::vec2 velocity = glm::vec2(5.0, -2.5);
	velocity = glm::normalize(velocity);

	// Tries to initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);	
		

	std::cout << "Hello, world!" << std::endl;
	return 0;
*/
	Game game;

	game.Initialize();
	game.Run();
	game.Destroy();

}
