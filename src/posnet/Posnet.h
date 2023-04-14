#ifndef POSNET_H
#define POSNET_H

#include "TarjetaDeCredito.h"
#include "Ticket.h"

class Posnet
{
	const double RECARGO_POR_CUOTA = 0.03;
	const int MIN_CANT_CUOTAS = 1;
	const int MAX_CANT_CUOTAS = 6;

    bool datosValidos(const TarjetaDeCredito &tarjeta, double monto, int cant);
    double recargoSegunCuotas(int cantCuotas);

public:
	Ticket efectuarPago(TarjetaDeCredito &tarjeta, double montoAAbonar, int cantCuotas);
};

#endif