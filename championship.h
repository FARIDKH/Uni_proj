

#pragma once

#include "competitionEnor.h"
#include <string>


struct Championship {
    string name;
    int angler_count = 0;
};

class ChampionshipEnor {
    private:
        CompetitionEnor _tt;
        Championship _cur;
        bool _end;
    public:
        ChampionshipEnor(const std::string &str): _tt(str.c_str()) { };
        void first() {_tt.first(); next();}
        void next();
        Championship current() const { return _cur;}
        bool end() const { return _end;}

};

