#include <iostream>
#include <vector>
#include <ctime>
#include <ncurses.h>

#include "malfoi.h"

malfoi::malfoi(vector<string>& map){
    // start_color();
    // init_pair(1,COLOR_GREEN,COLOR_BLACK);
    srand(time(NULL));
    do{
        lmalf=rand()%(map.size()-1)+1;
        cmalf=rand()%(map[1].length()-1)+1;
    }while(map[lmalf][cmalf]=='*');

    // attron(COLOR_PAIR(1));
    map[lmalf][cmalf]='L';
    // mvaddch(lmalf,cmalf,'L');
    
    // move(lmalf,cmalf);
    // addch('L');
    // attroff(COLOR_PAIR(1));
    // firstmove(map);
}

void malfoi::setlmalf(int x) {lmalf=x;}

void malfoi::setcmalf(int y) {cmalf=y;}

int malfoi::getlmalf() {return lmalf;}

int malfoi::getcmalf() {return cmalf;}

int malfoi::getescape() {return escape;}

void malfoi::firstmove(vector<string>& map){
    curs_set(0);
    keypad (stdscr,TRUE);
    move(lmalf,cmalf );
    addch ('L');
    // movingmalf(map);
}

void malfoi::movingmalf(vector<string>& map){
	// refresh ();
// 	clear ();
    ch = getch ();
    if(ch == 27)
        escape=1;
    move(lmalf,cmalf);
    addch ('.');
    switch (ch){
        case KEY_UP : 
            if(map[lmalf-1][cmalf]=='.')
                lmalf--; 
            break;
        case KEY_DOWN : 
            if(map[lmalf+1][cmalf]=='.')
                lmalf++; 
            break;
        case KEY_LEFT: 
            if(map[lmalf][cmalf-1]=='.')
                cmalf--; 
            break;
        case KEY_RIGHT: 
            if(map[lmalf][cmalf+1]=='.')
                cmalf++; 
            break;
    }
    map[lmalf][cmalf]='.';
    move(lmalf,cmalf);
    addch ('L');
    
}