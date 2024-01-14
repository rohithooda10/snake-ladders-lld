#ifndef DICE_H
#define DICE_H
#include "header.h"
using namespace std;

class Dice
{
public:
	int count;
	Dice(int count);
	int roll();
};
#endif
