#include <vector>
#include <iostream>
#include <ctime>
#include "diamond.h"

using namespace std;

diamond::diamond(vector<string>& map){
    srand(time(NULL));
    int lmag,cmag;
    do{
        lmag=rand()%(map.size()-1)+1;
        cmag=rand()%(map[1].length()-1)+1;
    }while(map[lmag][cmag]!='.');
    map[lmag][cmag]='G';
}