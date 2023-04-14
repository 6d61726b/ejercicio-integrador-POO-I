#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket
{
    std::string nombreApellido;
    double montoTotal;
    double montoPorCuota;

public:
	Ticket(std::string nombreApellido, double montoTotal, double montoPorCuota);
	~Ticket();
	std::string toString();
};

#endif