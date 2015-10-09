#ifndef DOOR_H
#define DOOR_H

#include "rectangle.h";
#include "globals.h"

#include <string>

class Door : public Rectangle {
public:
	Door() {}
	Door(Rectangle r, std::string destination) :
		Rectangle(r.getLeft() * globals::SPRITE_SCALE, r.getTop() * globals::SPRITE_SCALE,
				r.getWidth() * globals::SPRITE_SCALE, r.getHeight() * globals::SPRITE_SCALE),
		_destination(destination)
	{}

	const inline Rectangle getRectangle() const { return this->getRect(); }
	const inline std::string getDestination() const { return this->_destination; }

private:
	std::string _destination;
};


#endif
