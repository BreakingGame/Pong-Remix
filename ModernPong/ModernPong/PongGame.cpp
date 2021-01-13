#include "PongGame.h"
#include <iostream>


using namespace std;

PongGame::PongGame() {


}

PongGame::~PongGame() {


}

void PongGame::initgame() {

	int flags = 0;
	if (WindowProps.fullscreen == true) {
		flags = SDL_WINDOW_FULLSCREEN;
	}


	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		cout << "Subsystems initialized..." << endl;

		window = SDL_CreateWindow(WindowProps.gametitle, WindowProps.screenxpos, WindowProps.screenypos, WindowProps.screenwidth, WindowProps.screenheight, flags);

		if (window) {
			cout << "Window Created!!" << endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);

		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			cout << "Renderer created" << endl;
		}

		isgamerunning = true;

	}

	else {//if sdl didn't initialized properly
		isgamerunning = false;
	}


}

void PongGame::handleEvents() {

	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type) {
		case SDL_QUIT:
			isgamerunning = false;
			break;

		default:
			break;


	}




}

void PongGame::update() {

}

void PongGame::render() {
	SDL_RenderClear(renderer);
	//add stuff to render
	SDL_RenderPresent(renderer);

}

void PongGame::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	cout << "END GAME";
}
