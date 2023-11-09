#include "map.h"
void map(array<pair<int, char>, 9>& arrmap) {
    const int X = 3;
    const int Y = 3;

    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < X; ++j) {
            if (j != 0) {
                cout << "|";
            }
            int index = i * X + j;
            if (arrmap[index].second != ' ') {
                cout << " " << arrmap[index].second << " ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
        if (i != Y - 1) {
            for (int j = 0; j < X; ++j) {
                if (j != 0) {
                    cout << "|";
                }
                cout << "---";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < 3; ++i) {
           if ((arrmap[i * 3].second == arrmap[i * 3 + 1].second && arrmap[i * 3].second == arrmap[i * 3 + 2].second) && arrmap[i * 3].second != ' ') {
                 arrmap[i * 3].second = arrmap[i * 3 + 1].second = arrmap[i * 3 + 2].second = '-';
             }
             if ((arrmap[i].second == arrmap[i + 3].second && arrmap[i].second == arrmap[i + 6].second) && arrmap[i].second != ' ') {
                 arrmap[i].second = arrmap[i + 3].second = arrmap[i + 6].second = '-';
             }
         }
         if ((arrmap[0].second == arrmap[4].second && arrmap[0].second == arrmap[8].second) && arrmap[0].second != ' ') {
             arrmap[0].second = arrmap[4].second = arrmap[8].second = '-';
         }
         if ((arrmap[2].second == arrmap[4].second && arrmap[2].second == arrmap[6].second) && arrmap[2].second != ' ') {
             arrmap[2].second = arrmap[4].second = arrmap[6].second = '-';
         }
}