#include <iostream>
using namespace std;

class Bitacora{
    private:
        string date;
        string time;
        string IP_O;
        string PO;
        string ON;
        string IP_D;
        string DP;
        string DN;
    public:
        Persona(){}
        Persona(string _date, string _hour, string _originIP, string _originPort, string _originName, string _destinatioPort, 
        string _destinationIP, string _dName): date(_date), hour(_hour), originIP(_originIP), originPort(_originPort), originName(_originName), 
        destinationIP(_destinationIP), destinationPort(_destinatioPort), destinationName(_dName){}
};
