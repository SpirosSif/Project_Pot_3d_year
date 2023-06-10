#include <vector>
#include <iostream>
#include <ctime>
#include "poteridis.h"

poteridis::poteridis(vector<string>& map){
    srand(time(NULL));
    do{
        lpot=rand()%(map.size()-1)+1;
        cpot=rand()%(map[1].length()-1)+1;
    }while(map[lpot][cpot]!='.');
    map[lpot][cpot]='M';
}

void poteridis::setlpot(int x) {lpot=x;}

void poteridis::setcpot(int y) {cpot=y;}

int poteridis::getlpot() {return lpot;}

int poteridis::getcpot() {return cpot;}