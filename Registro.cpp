#include "Registro.hpp"


ostream & operator<<(ostream & os, const Bitacora & bitacora)
{
    os << bitacora.date << " - ";
    os << bitacora.time << " - ";
    os << bitacora.IP_O << " - ";
    os << bitacora.OP << " - ";
    os << bitacora.ON << " - ";
    os << bitacora.DP << " - ";
    os << bitacora.IP_D << " - ";

    return os;
}
