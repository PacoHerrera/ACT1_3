#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <iterator>

#include "person.cpp"

using namespace std;

auto readCSV(string filename)
{       
        //Create a Persona vector
    vector<Persona> lines;

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
        getline(ss, DN;

        Persona pers = Persona(date, hour, oIP, oPort, oName, dIP, dPort, dName);
        lines.push_back(pers);
    }

    file.close();

    return lines;
}

int main()
{   
    vector <Persona> personas = readCSV("equipo14.csv");

    //Imprimir el vector

        //copy(personas.begin(), personas.end(), ostream_iterator<Persona>(cout));

        //cout << personas.size();


    return 0;
}