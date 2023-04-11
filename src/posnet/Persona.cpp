#include "Persona.h"

Persona::Persona(string DNI, string nombre, string apellido, string telefono, string mail)
{
	this->DNI = DNI;
	this->nombre = nombre;
	this->apellido = apellido;
	this->telefono = telefono;
	this->mail = mail;
}

Persona::~Persona()
{
}

string nombreCompleto()
{
	return this->nombre + " " + this->apellido;
}