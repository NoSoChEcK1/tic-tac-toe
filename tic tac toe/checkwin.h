#pragma once
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
using namespace std;
bool checkForWin(const array<pair<int, char>, 9>& arr,char symbol);