#include "board.h"
using namespace std;

Board::Board(int size, vector<vector<int> > snakes, vector<vector<int> > ladders)
{
	this->size = size;
	for(auto &snake: snakes)
	{
		this->snakes[snake[0]] = snake[1];
	}
	for(auto &ladder: ladders)
	{
		this->ladders[ladder[0]] = ladder[1];
	}
}