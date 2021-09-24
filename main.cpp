#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <iterator>

#include "Registro.cpp"

using namespace std;

auto readCSV(string filename)
{       
        //Create a Registro vector
    vector<Registro> lines;

        //Read the csv file
    ifstream file(filename);

    if(!file.is_open()) throw runtime_error("Error al leer el archivo");

        string line; // Variable that storage every line

    /* Read the data line by line*/

    while(getline(file, line))
    {
        stringstream ss(line);

        //Variables for every field
            string date;
            string time;
            string IP_O;
            string OP;
            string ON;
            string DP;
            string IP_D;
            string DN;
/*Fecha, Hora, IP Origen, Puerto Origen, Nombre Origen, IP Destino, Puerto Destino, Nombre Destino*/
        getline(ss, date, ',');
        getline(ss, time, ',');
        getline(ss, IP_O, ',');
        getline(ss, OP, ',');
        getline(ss, ON, ',');
        getline(ss, IP_D, ',');
        getline(ss, DP, ',');
        getline(ss, DN);

        Registro reg = Registro(date, time, IP_O, OP, ON, IP_O, DP, DN);
        lines.push_back(reg);
    }

    file.close();

    return lines;
}

int main()
{   
    vector <Registro> Registros = readCSV("equipo15.csv");

    //Imprimir el vector

        //copy(Registros.begin(), Registros.end(), ostream_iterator<Registro>(cout));

        cout << Registros.size() << endl;


    return 0;
}
