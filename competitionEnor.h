#ifndef FLIGHTENOR_H_INCLUDED
#define FLIGHTENOR_H_INCLUDED

#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;



struct Competition {
    string angler;
    string championship_name;
};



class CompetitionEnor{

    private:
        ifstream _f;
        Competition _dx;
        bool _end;
    public:
        CompetitionEnor(const std::string &str) { _f.open(str.c_str());  };
        Competition current() { return _dx; }
        void first() {next();};
        void next();
        bool end() const { return _end;}
};

#endif
