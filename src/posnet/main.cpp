#include <iostream>
#include "Posnet.h"
#include "Persona.h"
#include "TarjetaDeCredito.h"
#include "EntidadFinanciera.h"
#include "Ticket.h"

int main()
{
	Posnet posnet {};
    Persona persona {"40545665", "Pepe", "Gomez", "1112345678", "pepe@fakemail.com"};
    EntidadFinanciera e = BIRZA;
    TarjetaDeCredito tarjeta {"FakeBank", "1234567890123456", 15000, persona, e};

    std::cout << "Tarjeta antes del pago" << std::endl;
    std::cout << tarjeta.toString() << std::endl;

    std::cout << std::endl << "Ticket tras pagar..." << std::endl;
    Ticket ticketGenerado = posnet.efectuarPago(tarjeta, 10000, 5);
    std::cout << ticketGenerado.toString() << std::endl;

    std::cout << std::endl << "Tarjeta despues del pago" << std::endl;
    std::cout << tarjeta.toString() << std::endl;

	return 0;
}