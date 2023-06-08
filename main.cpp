#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <ctime>
#include <ncurses.h>

#include "poteridis.h"
#include "malfoi.h"
#include "diamond.h"

using namespace std;

int main(int args,char** argv){
    initscr();
    vector<string> map;
    if(args==1){
        cout<<"βάλε ένα .txt μαζί με την εκτέλεση"<<endl;
        return 0;
    }
    ifstream file(argv[1],ios::in);
    string lines;
    while(file>>lines)
        map.push_back(lines);
    
    file.close();

    cout<<"line "<<map.size()<<" column "<<map[1].size()<<endl;
    srand(time(NULL));

    poteridis p(map);
    malfoi m(map);
    diamond d(map);

    for(int i=0;i<map.size();i++)
        printw(map[i].data());
    endwin();
    return 1; 

}