#include <iostream>
#include <vector>
#include <ctime>

#include "malfoi.h"

malfoi::malfoi(vector<string>& map){
    int lmalfoi,cmalfoi;
    do{
        lmalfoi=rand()%(map.size()-1)+1;
        cmalfoi=rand()%(map[1].length()-1)+1;
    }while(map[lmalfoi][cmalfoi]=='*');
    map[lmalfoi][cmalfoi]='L';
}
