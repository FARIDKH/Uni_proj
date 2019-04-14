#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "championship.h"

using namespace std;


int main()
{

    ChampionshipEnor ce("File.txt");
    ce.first();

    while(!ce.end()){
        cout << ce.current().name << endl;
        ce.next();
    }

    return 0;

}
