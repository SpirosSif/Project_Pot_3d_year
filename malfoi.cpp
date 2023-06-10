#include <iostream>
#include <vector>
#include <ctime>
#include <ncurses.h>

#include "malfoi.h"

malfoi::malfoi(vector<string>& map){
    do{
        lmalf=rand()%(map.size()-1)+1;
        cmalf=rand()%(map[1].length()-1)+1;
    }while(map[lmalf][cmalf]=='*');
    firstmove(map);
}

void malfoi::setlmalf(int x) {lmalf=x;}

void malfoi::setcmalf(int y) {cmalf=y;}

int malfoi::getlmalf() {return lmalf;}

int malfoi::getcmalf() {return cmalf;}

void malfoi::firstmove(vector<string>& map){
    // curs_set(0);
    keypad (stdscr,TRUE);
    move(cmalf, lmalf);
    addch ('L');
    movingmalf(map);
}

void malfoi::movingmalf(vector<string>& map)
{
	
// 	refresh ();
// 	clear ();
   
    ch = getch ();
    move(cmalf, lmalf);
    addch (' ');
    switch (ch){
        case KEY_UP : cmalf--; break;
        case KEY_DOWN : cmalf++; break;
        case KEY_LEFT: lmalf--; break;
        case KEY_RIGHT: lmalf++; break;
    }
    if(map[cmalf][lmalf]=='*'){
        switch (ch){
            case KEY_UP : cmalf--; break;
            case KEY_DOWN : cmalf++; break;
            case KEY_LEFT: lmalf--; break;
            case KEY_RIGHT: lmalf++; break;
        }
    }
    move(cmalf, lmalf);
    map[cmalf][lmalf]=' ';   
    addch ('L');
    if(ch == 27)
        escape=1;
}