#pragma once
#include "SDL.h";


class PongGame {

	struct {
		int screenwidth = 800;
		int screenheight = 600;
		int screenxpos = SDL_WINDOWPOS_CENTERED;
		int screenypos = SDL_WINDOWPOS_CENTERED;
		const char* gametitle = " Modern Pong";
		bool fullscreen = false;
	} WindowProps;



public:
	PongGame();
	~PongGame();

	void initgame();

	void handleEvents();
	void update();
	void render();
	void clean();

	bool isGameRunning() { return isgamerunning; }


private:
	bool isgamerunning;
	SDL_Window* window;
	SDL_Renderer* renderer;

protected:





};

