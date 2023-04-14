#include "Ticket.h"

Ticket::Ticket(std::string nombreApellido, double montoTotal, double montoPorCuota)
{
    this->nombreApellido = nombreApellido;
    this->montoTotal = montoTotal;
    this->montoPorCuota = montoPorCuota;
}

Ticket::~Ticket()
{
}

std::string Ticket::toString()
{
    return "Ticket { Nombre apellido: " + nombreApellido + ", monto total: " + std::to_string(montoTotal) + ", monto por cuota: " + std::to_string(montoPorCuota) + " }";
}