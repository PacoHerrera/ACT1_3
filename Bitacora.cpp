#include <iostream>
using namespace std;

class Bitacora{
    private:
        string date;
        string time;
        string IP_O;
        string OP;
        string ON;
        string IP_D;
        string DP;
        string DN;
    public:
        Bitacora(){}
        Bitacora(string _date, string _time, string _IP_O, string _OP, string _ON, string _DP, 
        string _IP_D, string _DN): date(_date), time(_time), IP_O(IP_O), OP(_OP), ON(_ON), 
        IP_D(_IP_D), DP(_DP), DN(_DN){}
};
