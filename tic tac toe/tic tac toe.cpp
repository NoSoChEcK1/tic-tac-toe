
#include <iostream>
#include <random>
#include<array>
#include<utility>
#include"map.h"
#include"windows.h"
#include"input.h"
#include"fillarr.h"
#include"bot.h"
#include"gameloop.h"
#include"checkForWinForBot.h"
#include"checkwin.h"
using namespace std;
int main()	
{
	array<pair<int, char>, 9>mainarr;
	fillarr(mainarr);
	gameLoop(mainarr);
}
