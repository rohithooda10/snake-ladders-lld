#include "mover.h"

using namespace std;

Mover::Mover(Board* board)
{
	this->board = board;
}

int Mover::movePlayer(int startPos, int roll)
{
	startPos += roll;
	if(startPos > this->board->size) return -1;
	if(startPos == this->board->size) return 0;

	while(this->board->snakes.find(startPos) != this->board->snakes.end())
	{
		cout<<"Player was bitten by snake at:"<< startPos<<endl;
		startPos = this->board->snakes[startPos];
	}
	while(this->board->ladders.find(startPos) != this->board->ladders.end())
	{
		cout<<"Player climbed ladder at:"<< startPos<<endl;
		startPos = this->board->ladders[startPos];
	}
	return startPos;
}