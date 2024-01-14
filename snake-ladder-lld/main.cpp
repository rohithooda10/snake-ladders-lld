#include "header.h"

using namespace std;

int main()
{

	Game* game = new Game();
	
	int n = 100;
	int diceCount = 2;
	vector<vector<int> > snakes = {{52, 10}, {20, 5}};
	vector<vector<int> > ladders = {{2, 10}, {20, 75}};
	vector<Player*> players = {new Player("Rohit", 1), new Player("Ravi", 2)};
	
	game->createGame(n, snakes, ladders, diceCount, players);
	game->playGame();
	return 0;
}