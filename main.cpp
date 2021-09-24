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

    if (!file.is_open())
        throw runtime_error("Error al leer el archivo");

    string line; // Variable that storage every line

    /* Read the data line by line*/

    while (getline(file, line))
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
    vector<Registro> Registros = readCSV("equipo15.csv");

    //Imprimir el vector

    //copy(Registros.begin(), Registros.end(), ostream_iterator<Registro>(cout));

    cout << "Total de registros: " << Registros.size() << endl;
    string argbusqueda;
    bool wee = false;
    cout << "Qué nombre desea buscar?: " << endl;
    cin >> argbusqueda;

    for (int i; i <= Registros.size(); i++)
    {
        if (Registros[i].destinationName() == argbusqueda || Registros[i].originName() == argbusqueda)
        {
            cout << "Se encontro " << argbusqueda << " de Busqueda en el indice: " << i << endl;
            wee = true;
        }
    }
    if (wee == false)
    {
        cout << "No se encontro en el registro." << endl;
    }

    cout << "Dominios de correo electronico: " << endl;
    for (int i = 0; i <= 50; i++)
    {
        cout << Registros[i].destinationName() << endl;
    }

    cout << "Red interna de compañia: " << endl;
    for (int i = 0; i <= 50; i++)
    {
        cout << Registros[i].destinationPort() << endl;
    }

    cout << "Ports under 1000: " << endl;
    for (int i = 0; i <= 150; i++)
    {
        if (Registros[i].destinationIp() > "1000")
        {
            cout << "Puerto " << Registros[i].destinationIp() << " encontrado en indice: " << i << endl;
        }
    }

    int count = 0;
    for (int i = 0; i <= Registros.size(); i++)
    {
        if (Registros[i].Date() == "11-8-2020")
        {
            count++;
        }
    }
    cout << "El numero de registros del 11-8-2020 es de: " << count << endl;

    return 0;
}