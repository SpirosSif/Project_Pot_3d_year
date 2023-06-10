#ifndef POTERIDIS_H
#define POTERIDIS_H

using namespace std;

class poteridis{
    private:
        int lpot,cpot;
    public:
        poteridis(vector<string>& map);
        void setlpot(int x);
        void setcpot(int y);
        int getlpot();
        int getcpot();
};
#endif