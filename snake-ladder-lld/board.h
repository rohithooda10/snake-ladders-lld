#ifndef BOARD_H
#define BOARD_H
#include "header.h"
using namespace std;

class Board
{
public:
	int size;
	unordered_map<int, int> snakes, ladders;
	Board(int size, vector<vector<int> > snakes, vector<vector<int> > ladders);
};

#endif