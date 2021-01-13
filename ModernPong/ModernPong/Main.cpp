#include <iostream>
#include "PongGame.h";

PongGame* game = nullptr;




int main(int argc, char *argv[]) {

	game = new PongGame();

	game->initgame();


	while (game->isGameRunning()) {
		game->handleEvents();
		game->update();
		game->render();
	}


	game->clean();


	return 0;
}


