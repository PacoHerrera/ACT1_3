#include "Registro.hpp"


ostream & operator<<(ostream & os, const Registro & registro)
{
    os << registro.date << " - ";
    os << registro.time << " - ";
    os << registro.IP_O << " - ";
    os << registro.OP << " - ";
    os << registro.ON << " - ";
    os << registro.DP << " - ";
    os << registro.IP_D << " - ";

    return os;
}
