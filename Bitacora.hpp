#include <iostream>
using namespace std;

class Bitacora{
    protected:
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

auto Date(){return date;}
        auto time(){return time;}
        auto IP_O(){return IP_O;}
        auto OP(){return OP;}
        auto ON(){return ON;}
        auto DestinationPort(){return IP_O;}
        auto IP_O(){return IP_O;}


        bool comparaDia(Bitacora); //¿Cuántos récords hay del segundo día registrado? ¿Qué día es este?
        bool comparaNombre(Bitacora); //¿Alguna de las computadoras pertenece a Jeffrey, Betty, Katherine, Scott, Benjamin, Samuel o Raymond? 
        bool comparaComputador(Bitacora); // ¿Alguna computadora se llama server.reto.com? 
        bool comparaPuerto(Bitacora); //Considerando solamente los puertos destino ¿Qué puertos abajo del 1000 se están usando? 

};
