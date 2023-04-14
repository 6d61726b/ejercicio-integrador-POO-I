#include "Posnet.h"

Ticket Posnet::efectuarPago(TarjetaDeCredito &tarjeta, double montoAAbonar, int cantCuotas)
{
    if (datosValidos(tarjeta, montoAAbonar, cantCuotas)) 
    {
    	double montoFinal = montoAAbonar + montoAAbonar * recargoSegunCuotas(cantCuotas);

        if (tarjeta.tieneSaldoDisponible(montoFinal))
        {
            tarjeta.descontar(montoFinal);

        	std::string nomApe = tarjeta.nombreCompletoDeTitular();
            double montoPorCuota = montoFinal / cantCuotas;
            Ticket elTicket = Ticket(nomApe, montoFinal, montoPorCuota);

            return elTicket;
		}
    }

    return Ticket {"", 0, 0};	
}

bool Posnet::datosValidos(const TarjetaDeCredito &tarjeta, double monto, int cant)
{
    bool esMontoValido = monto > 0;
    bool cantCuotasValidas = cant >= MIN_CANT_CUOTAS && cant <= MAX_CANT_CUOTAS;

    return esMontoValido && cantCuotasValidas;
}

double Posnet::recargoSegunCuotas(int cantCuotas) {
	return (cantCuotas - 1) * RECARGO_POR_CUOTA;
}
