#include "bot.h"
void botTurn(array<pair<int, char>, 9>& arr, char botSymbol) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(0, 8);

    for (int i = 0; i < 9; ++i) {
        if (arr[i].second == '-') {
            arr[i].second = botSymbol;
            if (checkForWinForBot(arr, botSymbol)) {
                return;
            }
            arr[i].second = '-';
        }
    }

    int pos;
    do {
        pos = distrib(gen);
    } while (arr[pos].second != '-');

    arr[pos].second = botSymbol;
}