#ifndef MOVER_H
#define MOVER_H
#include "header.h"

class Mover
{
public:
	Board* board;
	Mover(Board* board);
	int movePlayer(int startPos, int endPos);
};

#endif