#ifndef DIAMOND_H
#define DIAMOND_H 

using namespace std;

class diamond{
    private:
        int lmag,cmag; //line magic and column magic
    public:
        diamond(vector<string>& map);
        void setlmag(int x);
        void setcmag(int y);
        int getlmag();
        int getcmag();
};

#endif