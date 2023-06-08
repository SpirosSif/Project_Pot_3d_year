#include <vector>
#include <iostream>
#include <ctime>
#include "poteridis.h"

poteridis::poteridis(vector<string>& map){
    srand(time(NULL));
    int lpot,cpot;
    do{
        lpot=rand()%(map.size()-1)+1;
        cpot=rand()%(map[1].length()-1)+1;
    }while(map[lpot][cpot]!='.');
    map[lpot][cpot]='M';
}