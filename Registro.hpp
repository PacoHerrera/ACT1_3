#ifndef registro_hpp
#define registro_hpp

#include <iostream>
using namespace std;

class Registro{
    protected:
    //Fecha, Hora, IP Origen, Puerto Origen, Nombre Origen, IP Destino, Puerto Destino, Nombre Destino
        string date;
        string time;
        string IP_O;
        string OP;
        string ON;
        string IP_D;
        string DP;
        string DN;

    public:
        Registro(){}
        Registro(string _date, string _time, string _IP_O, string _OP, string _ON, string _DP, 
        string _IP_D, string _DN): date(_date), time(_time), IP_O(_IP_O), OP(_OP), ON(_ON), 
        IP_D(_IP_D), DP(_DP), DN(_DN){}

        string Date();
        string Time();
        string originIp();
        string originPort();
        string originName();
        string destinationPort();
        string destinationIp();
        string destinationName();

};

#endif