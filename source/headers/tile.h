#ifndef TILE_H
#define TILE_H

#include "globals.h";

struct SDL_Texture;
class Graphics;

class Tile {
public:
	Tile();
	Tile(SDL_Texture* tileset, Vector2 size, Vector2 tilesetPosition, Vector2 position);
	void update(int elapsedTime);
	void draw(Graphics &graphics);
private:
	SDL_Texture* _tileset;
	Vector2 _size;
	Vector2 _tilesetPosition;
	Vector2 _position;
};


#endif
