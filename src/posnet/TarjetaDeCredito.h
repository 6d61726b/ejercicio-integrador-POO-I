#ifndef TARJETA_DE_CREDITO
#define TARJETA_DE_CREDITO

#include <iostream>
#include <string>
#include "Persona.h"
#include "EntidadFinanciera.h"

class TarjetaDeCredito
{
    std::string entidadBancaria;
    std::string nroTarjeta;
    double saldo;
    Persona titular;
    EntidadFinanciera entidadFinanciera;

public:
    TarjetaDeCredito(std::string entidadBancaria, std::string nroTarjeta, double saldo, const Persona& persona, EntidadFinanciera entidadFinanciera);
    ~TarjetaDeCredito();
    bool tieneSaldoDisponible(double monto);
    void descontar(double monto);
    std::string toString();
    std::string nombreCompletoDeTitular();
};

#endif