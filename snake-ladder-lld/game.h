#ifndef GAME_H
#define GAME_H
#include "header.h"
using namespace std;

class Game
{
	Board* board;
	Dice* dice;
	queue<Player*> turn;
	unordered_map<int, int> playerPos;
	Mover* mover;
public:
	void createGame(int n, vector<vector<int> > snakes, 
			vector<vector<int> > ladders, int diceCount, vector<Player*> players);
	void playGame();
};
#endif