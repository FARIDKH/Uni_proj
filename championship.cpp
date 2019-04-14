
#include <iostream>
#include "championship.h"

using namespace std;

void ChampionshipEnor::next(){

    if( !(_end = _tt.end()) ){
            cout << "next" << endl;
        _cur.name = _tt.current().championship_name;
        while(!_tt.end() && _tt.current().championship_name == _cur.name){
            _cur.angler_count++;
            _tt.next();
        }
    } else {
        _end = true;
    }
}
