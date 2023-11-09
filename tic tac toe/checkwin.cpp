#include "checkwin.h"

    bool checkForWin(const array<pair<int, char>, 9>&arr, char symbol) {
     
        for (int i = 0; i < 3; ++i) {
            if (arr[i * 3].second == symbol && arr[i * 3 + 1].second == symbol && arr[i * 3 + 2].second == symbol) {
                return true; 
            }
        }

        
        for (int i = 0; i < 3; ++i) {
            if (arr[i].second == symbol && arr[i + 3].second == symbol && arr[i + 6].second == symbol) {
                return true;
            }
        }

      
        if ((arr[0].second == symbol && arr[4].second == symbol && arr[8].second == symbol) ||
            (arr[2].second == symbol && arr[4].second == symbol && arr[6].second == symbol)) {
            return true; 
        }

        return false;
    }

