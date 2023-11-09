#include "fillarr.h"
array<pair<int, char>, 9> fillarr(array<pair<int, char>, 9>& arr){
    arr = { make_pair(1, 'v'),
        make_pair(2, 'v'),
        make_pair(3, 'v'),
        make_pair(4, 'v'),
        make_pair(5, 'v'),
        make_pair(6, 'v'),
        make_pair(7, 'v'),
        make_pair(8, 'v'),
        make_pair(9, 'v') };
    return arr;
}
