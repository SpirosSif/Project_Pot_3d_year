#include <vector>
#include <iostream>
#include <ctime>
#include "diamond.h"

using namespace std;

diamond::diamond(vector<string>& map){
    srand(time(NULL));
    do{
        lmag=rand()%(map.size()-1)+1;
        cmag=rand()%(map[1].length()-1)+1;
    }while(map[lmag][cmag]!='.');
    map[lmag][cmag]='G';
}

void diamond::setlmag(int x) {lmag=x;}
void diamond::setcmag(int y) {cmag=y;}
int diamond::getlmag() {return lmag;}
int diamond::getcmag() {return cmag;}