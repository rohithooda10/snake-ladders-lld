#include "game.h"
using namespace std;

void Game::createGame(int n, vector<vector<int> > snakes, 
		vector<vector<int> > ladders, int diceCount, vector<Player*> players)
{
	for(auto &player: players)
	{
		this->turn.push(player);
		playerPos[player->id] = 0;
	}
	this->dice = new Dice(diceCount);
	this->board = new Board(n, snakes, ladders);
	this->mover = new Mover(board);
}
void Game::playGame()
{
	while(this->turn.size() > 1)
	{
		Player* currPlayer = this->turn.front();
		this->turn.pop();

		// Roll die
		int roll = this->dice->roll();
		cout<<currPlayer->name<<" played his chance and got: "<< roll<<endl;

		// Jump
		int startPos = playerPos[currPlayer->id];
		int endPos = this->mover->movePlayer(startPos, roll);
		if(endPos == -1) 
		{
			cout<<"Player couldn't move"<<endl;
			this->turn.push(currPlayer);
			continue;
		}
		else if(endPos == 0)
		{
			cout<<currPlayer->name<<" won the game!"<<endl;
			continue;
		}
		else
		{
			playerPos[currPlayer->id] = endPos;
			// Land
			cout<<"Player moved from:"<<startPos<<" to "<<endPos<<endl;
			this->turn.push(currPlayer);
		}
		
	}
}
