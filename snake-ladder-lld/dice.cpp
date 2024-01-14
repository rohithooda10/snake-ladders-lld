#include "header.h"
using namespace std;
Dice::Dice(int count)
{
	this->count = count;
	srand(time(0));
}
int Dice::roll()
{
	int low = count;
	int high = count * 6;
	return rand() % (high - low + 1) + low;
}