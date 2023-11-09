#include "gameloop.h"

void gameLoop(array<pair<int, char>, 9>& mainarr) {
    bool gameover = false;
    int choose;
    char symbol, botsymbol;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(0, 1);
    int randomNumber = distrib(gen);
    char playerSymbol = 'X';

    if (randomNumber == 1) {
        symbol = 'X';
        botsymbol = 'O';
    }
    else {
        symbol = 'O';
        botsymbol = 'X';
    }

    while (!gameover) {
        system("cls");
        map(mainarr);
        if (symbol == botsymbol) {
            botTurn(mainarr, symbol);
        }
        else {
            Sleep(1000);
            input(choose, mainarr, symbol, playerSymbol, gameover);
        }

        if (playerSymbol == 'X' && checkForWin(mainarr, playerSymbol)) {
            gameover = true;
            cout << "x win" << endl;
        }
        else if (playerSymbol == 'O' && checkForWinForBot(mainarr, playerSymbol)) {
            gameover = true;
            cout << "o win" << endl;
        }

        if (symbol == 'X') {
            symbol = 'O';
        }
        else {
            symbol = 'X';
        }
    }
}