#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "level.h"

class Graphics;

class Game {
public:
	Game();
	~Game();
private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Player _player;

	Level _level;
};

#endif
