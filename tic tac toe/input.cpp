    #include "input.h"

void input(int& choose, array<pair<int, char>, 9>& arr, char symbol, char playerSymbol, bool& gameover) {
        if (_kbhit()) {
            switch (_getch()) {
            case 'q': {
                choose = 0;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'w': {
                choose = 1;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'e': {
                choose = 2;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'a': {
                choose = 3;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 's': {
                choose = 4;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'd': {
                choose = 5;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'z': {
                choose = 6;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'x': {
                choose = 7;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case 'c': {
                choose = 8;
                if (arr[choose].second == '-') {
                    arr[choose].second = symbol;
                }
                break;
            }
            case '0': {
                gameover = true;
                break;
            }
            }
        }
        if (playerSymbol == 'X') {
            if (checkForWin(arr, playerSymbol)) {
                gameover = true;
                cout << "x win" << endl;
            }
        }
        else if (playerSymbol == 'O') {
            if (checkForWinForBot(arr, playerSymbol)) {
                gameover = true;
                cout << "o win" << endl;
            }
        }
}