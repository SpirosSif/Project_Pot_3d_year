#include <vector>
#include <iostream>
#include <ctime>
#include <ncurses.h>
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

void poteridis::firstmove(vector<string>& map){
    srand(time(NULL));
    // do
    // {
    //     lpot=rand()%map[0].size(); 
    //     cpot=rand()%map.size();
    // }while(map[lpot][cpot]!='.');
    move(lpot,cpot);
    addch ('M');
    // refresh ();
}

void poteridis::movingpot(vector<string>& map)
{
    int x;
    move(lpot,cpot);
    addch (' ');
    srand(time(NULL));
// 	clear ();
    // keypad (stdscr,TRUE);
    do{
        x = rand()%4;
        switch(x){
            case 1: ch=KEY_UP; break;
            case 2: ch=KEY_DOWN; break;
            case 3: ch=KEY_LEFT; break;    
            case 4: ch=KEY_RIGHT; break;
        }
        switch (ch){
            case KEY_UP:
                if(map[lpot-1][cpot]=='.')
                    lpot--; 
                break;
            case KEY_DOWN : 
                if(map[lpot+1][cpot]=='.')
                    lpot++; 
                break;
            case KEY_LEFT: 
                if(map[lpot][cpot-1]=='.')
                    cpot--; 
                break;
            case KEY_RIGHT: 
                if(map[lpot][cpot+1]=='.')
                    cpot++; 
                break;
        }
    }while(map[lpot][cpot]!='.');
    move(lpot,cpot);
    map[lpot][cpot]=' ';
    addch('M');
    refresh();
}