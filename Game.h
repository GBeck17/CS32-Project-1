#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "History.h"
#include "City.h"


class Game
{
public:
	// Constructor/destructor
	Game(int rows, int cols, int nFlatulans);
	~Game();

	// Mutators
	void play();

private:
	City * m_city;
};

int decodeDirection(char dir);

#endif

