
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include "competitionEnor.h"





void CompetitionEnor::next(){

    string line;
    getline(_f , line);

    if( !(_end == _f.fail()) ){
        std::cout << "---" << std::endl;
        istringstream is(line);
        is >> _dx.angler >> _dx.championship_name;
        std::cout << _dx.angler;
        string fish;
        int size;
        for( is >> fish >> size ; !is.fail(); is >> fish >> size ){

        }
        if(is.fail()){
            _end = true;
        }
    }
}








