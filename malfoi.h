#ifndef MALFOI_H
#define MALFOI_H

using namespace std;

class malfoi{
    private:
        int lmalf,cmalf,escape,ch;
    public:
        malfoi(vector<string>& map);
        void setlmalf(int x);
        void setcmalf(int y);
        int getlmalf();
        int getcmalf();
        void firstmove(vector<string>& map);
        void movingmalf(vector<string>& map);

};
#endif