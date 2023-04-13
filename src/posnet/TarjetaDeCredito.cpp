#include "TarjetaDeCredito.h"

TarjetaDeCredito::TarjetaDeCredito(std::string entidadBancaria, 
								   std::string nroTarjeta, 
								   double saldo, 
								   const Persona& persona,
								   EntidadFinanciera entidadFinanciera) :
								   titular{persona}
{
	this->entidadBancaria = entidadBancaria;
	this->nroTarjeta = nroTarjeta;
	this->saldo = saldo;
	this->entidadFinanciera = entidadFinanciera;
}

TarjetaDeCredito::~TarjetaDeCredito()
{
}

bool TarjetaDeCredito::tieneSaldoDisponible(double monto)
{
    return saldo >= monto;
}

void TarjetaDeCredito::descontar(double monto)
{
    saldo = saldo - monto;
}

std::string TarjetaDeCredito::toString()
{
	std::string s = this->titular.nombreCompleto();
	std::string e = "";

	if (this->entidadFinanciera == 0)
	{
		e = "BIRZA";
	}
	else
	{
		e = "CASTERMARD";
	}

	return "Tarjeta de Credito { Entidad bancaria: " + this->entidadBancaria + ", numero de tarjeta: " + this->nroTarjeta + ", saldo: " + std::to_string(this->saldo) + ", entidad financiera: " + e + ", titular: " + s + " }";
}

std::string TarjetaDeCredito::nombreCompletoDeTitular()
{
	return titular.nombreCompleto();
}
